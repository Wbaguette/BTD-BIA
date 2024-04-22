MONKEY struc
    chunk dw 0FFFFh ; monkey's location (X/Y upper/lower 8 bits)
    pops dw 0 
    upgrades db 0 ; upgrades
    radius db 3 ; radius of chunks it can see
    damage db 1 
    fireRate db 10 ; how many frames before this monkey can inflict damage again
    sprite db MONKEY_DART_1
    direction db 0 ; where should the monkey face
    highlighted db 0 ; (bool) when true, renders the monkey's range and allows for upgrading
    deployed db 0 ; Is the monkey on the front lines? PTSD      0 = no, 1 = yes 
MONKEY ends

.data?
    monkey_struc_size db 12 
    alive_monkey_head dw 0
    alive_monkeys MONKEY MAX_MKYS DUP(<>)

.code

; Places a monkey on AX (AH: X      AL: Y), and draws it
PlaceMonkey proc far
    push bx 
    push ds
    push dx 
    push cx 

    xor si, si
    xor cx, cx
    xor bx, bx 

    push ax
    mov ax, @data
    mov ds, ax
    pop ax
    
    cmp alive_monkey_head, MAX_MKYS ; If we have 10 monkeys, we can't place anymore
    je finish_place_monkey

    ; Checking if this was called with the cursor on the path, we don't want monkeys on the bloon path!
    mov bx, 0
    check_if_cursor_on_path_iter:
        cmp bx, PATH_LENGTH * 2 ; Have we iterated all the way through?
        je cursor_not_on_path  ; Fall through if still iterating, we jumped if we have iterated through all path tiles 

        cmp ax, [PATH + bx]  ; Are we on a path tile?
        je finish_place_monkey ; Fall through if we should keep checking path tiles

        add bx, 2              ; Path indices are words so advance pointer by 2 

        jmp check_if_cursor_on_path_iter
    

    cursor_not_on_path:


    ; Check if a monkey exists at AX already
    mov bx, OFFSET alive_monkeys
    mov cx, MAX_MKYS
    check_monkey_already_there:
    
        cmp ds:[bx + MONKEY.chunk], ax  ; if there's a monkey on this chunk, we cannot place a new one on top: exit the proc 
        je finish_place_monkey          ; Fall through if the monkeys' positions are not conflicting 

        cmp ds:[bx + MONKEY.deployed], 1 ; if the monkey instance we are looking at is deployed, we cannot write a new monkey in this slot 
        je continue_mky_checks           ; Fall through if we are able to write new monkey data here

        mov ds:[bx + MONKEY.chunk], ax    ; Write monkey's chunk position
        mov ds:[bx + MONKEY.deployed], 1  ; Deploy the monkey to the front lines. Godspeed soldier o7 
        inc alive_monkey_head             ; We wrote new monkey data, so increase this pointer

        ; Now we gotta draw the monkey 
        mov dx, ds:[bx + MONKEY.chunk] ; get instance's chunk
        mov cl, ds:[bx + MONKEY.sprite] ; get sprite 
        call ShowSprite

        mov ds:[bx + MONKEY.highlighted], 1
        call DrawRadius ; The monkey is highlighted so let's show the range!

        jmp finish_place_monkey ; Don't bother iterating more

        continue_mky_checks:
        add bl, monkey_struc_size
    loop check_monkey_already_there

    finish_place_monkey:
    pop cx
    pop dx
    pop ds
    pop bx 
    ret
PlaceMonkey endp


; Takes in CX the frame number 
; Iterate through monkeys, for each monkey if they can fire this frame, iterate through the alive bloons 
;   If there is any bloon in range, destroy the bloon
; Use FrameNumber / FireRate , if remainder = 0, the monkey can fire, except for frame 0
PopBloons proc far
    push ds
    push ax
    push bx
    push dx
    push di
    push si

    xor bx, bx

    mov ax, @data
    mov ds, ax

    cmp alive_monkey_head, 0   ; If head is 0, we have no monkeys placed, don't bother doing stuff
    jne go_ahead_passenger
    jmp done_pop_bloons
    
    go_ahead_passenger:

    mov bx, OFFSET alive_monkeys ; Pointer to beginning of alive monkeys 
    mov ax, alive_monkey_head    ; Number of times to iterate

    loop_alive_monkeys_for_pops:
        cmp ax, 0 
        jne bypass_jmp_limit
        jmp done_pop_bloons

        bypass_jmp_limit:

        xor dh, dh
        mov dl, ds:[bx + MONKEY.fireRate]     ; dl now has this monkey's fire rate 

        push ax 
        mov ax, cx 
        div dl       ;  AL: Quotient,    AH: Remainder 
        cmp ah, 0       ; If remainder = 0, then the monkey can fire 
        pop ax  
        je bypass_jmp_limit_2  
        jmp monkey_cant_fire

        bypass_jmp_limit_2:
        mov di, ds  ; Store ds of monkeys in di 
        mov si, bx  ; Store bx in si

        mov dx, ds:[bx + MONKEY.chunk]  ; DX now has monkey position 

        ; Iterate through alive bloons, and shoot the first one that is in range!
        push ax
        push bx 
        push cx
        push ds
        push si

        call get_round_ds
        mov ds, ax

        mov ax, alive_bloons_head ; alive_bloons_head tells us how many bloons are alive
        mov bx, OFFSET alive_bloons
        
        check_alive_bloons_iter:
            cmp ax, 0
            je done_check_alive_bloons_iter
            xor cx, cx 
            
            cmp ds:[bx + BLOON.state], 0  ; Only go forward with this code if the bloon is alive
            jne continue_check_alive_bloons_iter
            
            ; At this point, the bloon is alive, need to check if its in range
            xor ch, ch
            push si
            xor si, si
            mov si, ds:[bx + BLOON.pathIndex]
            and si, 0FFh

            shl si, 1

            mov cx, [PATH + si]    ; Now cx has the chunk of the bloon ,   dx has the position of the monkey
            pop si
            call DistanceBetweenChunks
            ; Returns 
            ; CH : Horizontal distance between A & B
            ; CL : Vertical distance between A & B
            push ds
            push bx 
            mov ds, di
            mov bx, si
            cmp ch, ds:[bx + MONKEY.radius]
            jg not_in_range_        ; Fall through if we wanna check CL
            cmp cl, ds:[bx + MONKEY.radius]
            jg not_in_range_       ; Fall through if its in range 
            pop bx 
            pop ds

            ; DS is pointing to bloons now 
            ; BX has pointer to BLOON
            push dx 
            xor dx, dx 
            mov dx, ds:[bx + BLOON.level]  ; DX has bloon level, 

            push bx 
            push ds
            mov bx, si
            mov ds, di
            ; DS is now pointing to monkeys
            ; BX is now pointing to MONKEY instance 
            sub dx, ds:[bx + MONKEY.damage]
    
            and dx, 0FFh ; Clear top bits 
            pop ds
            pop bx

            cmp dx, BLOON_RED
            jl bloon_was_killed_by_mky ; Fall through if the bloon isn't dead 
            mov ds:[bx + BLOON.level], dx
            pop dx 
            jmp done_check_alive_bloons_iter

            bloon_was_killed_by_mky:
            inc ds:[bx + BLOON.state]
            pop dx 
            jmp done_check_alive_bloons_iter

            not_in_range_:
            pop bx 
            pop ds

            continue_check_alive_bloons_iter:
            add bl, bloon_struc_size ; Align ourselves to next bloon struct
            dec ax
            jmp check_alive_bloons_iter

        done_check_alive_bloons_iter:
        pop si
        pop ds
        pop cx
        pop bx
        pop ax
        
        monkey_cant_fire:
        add bl, monkey_struc_size
        dec ax
        jmp loop_alive_monkeys_for_pops

    done_pop_bloons:
    pop si
    pop di
    pop dx
    pop bx
    pop ax
    pop ds
    ret
PopBloons endp
    
; TODO: Bounds check
; draw the monkey's sightline relative to current chunk
; BX : beginning of monkey struct that we want to highlight 
DrawRadius proc near
    push cx
    push ax
    push dx
    push bx

    ; chunks visible = range * 2 + 1 (range for either side + 1 for tile monkey is on)
    xor cx, cx
    mov cl, ds:[bx + MONKEY.radius] ; get range
    shl cl, 1 ; double
    inc cl ; +1

    mov ax, ds:[bx + MONKEY.chunk] ; get current pos

    radY:
        push cx
        xor cx, cx
        mov cl, ds:[bx + MONKEY.radius] ; get range
        shl cl, 1 ; double
        inc cl ; +1

        radX: ; draw X
            mov dx, ax
            sub dh, ds:[bx + MONKEY.radius] ; shift pos by radius so monkey is central X
            dec dh  ; account for + 1

            sub dl, ds:[bx + MONKEY.radius] ; central monkey y
            add dh, cl ; x offset

            push cx ; save iter
            mov cl, RANGE ; sprite to draw
            call ShowSprite
            pop cx ; restore iter
            loop radX
        pop cx
        inc al ; Y offset
        loop radY
        
    pop bx
    pop dx
    pop ax
    pop cx
    ret
DrawRadius endp

; Highlight a monkey if it exists at the given chunk coordinates
; Also unhighlights any previously selected monkeys
; DX : X/Y position of cursor
IsMonkeySelected proc near
    push bx
    push cx
    push ax

    mov ax, @data
    mov ds, ax

    ; Check if a monkey exists at AX already
    mov bx, OFFSET alive_monkeys
    mov cx, alive_monkey_head

    IsMonkeyHighlighted:
        cmp ds:[bx + MONKEY.deployed], 0 ; Not deployed don't even bother
        je IsMonkeyEnd ; Since the array is sequential we can exit immediately

        cmp dx, ds:[bx + MONKEY.chunk]  ; Is the monkey at target chunk?
        je SetHighlight          ; This monkey is selected, highlight it
        ; jmp GoNextMonkey

        ; The monkey is not selected, is it highlighted from a previous selection?
        cmp ds:[bx + MONKEY.highlighted], 1 
        je RemoveOldHighlight ; Has a previous highlight, remove it
        jmp GoNextMonkey ; No previous highlight to remove, move on to next monkey

        SetHighlight:
        mov ds:[bx + MONKEY.highlighted], 1
        call DrawRadius
        jmp IsMonkeyEnd ; Go to the next monkey to check for needed removals

        RemoveOldHighlight:
        mov ds:[bx + MONKEY.highlighted], 0 ; Set to 0
        call DrawRadius ; Remove the sightline and fallthrough to next monkey

        GoNextMonkey:
        add bl, monkey_struc_size
    loop IsMonkeyHighlighted

    IsMonkeyEnd:
    pop ax
    pop cx
    pop bx
    ret
IsMonkeySelected endp