MONKEY struc
    chunk dw 0FFFFh ; monkey's location (X/Y upper/lower 8 bits)
    pops dw 0 
    upgrades db 0 ; upgrades
    radius db 1 ; radius of chunks it can see
    damage db 1 
    fireRate db 12 ; how many frames before this monkey can inflict damage again
    sprite db MONKEY_DART_1
    direction db 0 ; where should the monkey face
    highlighted db 0 ; (bool) when true, renders the monkey's range and allows for upgrading
    deployed db 0 ; Is the monkey on the front lines? PTSD      0 = no, 1 = yes 
MONKEY ends

.data?
    monkey_struc_size db 12
    alive_monkey_head dw 0
    ; alive_monkies MONKEY <0A0Ah, 0, 0, 3, 1, 12, MONKEY_DART_1, 0, 0, 1> , 9 DUP(<>)
    alive_monkies MONKEY 10 DUP(<>)


.data?
    monkey_struc_size db 12
    alive_monkey_head dw 0
    ; alive_monkies MONKEY <0A0Ah, 0, 0, 3, 1, 12, MONKEY_DART_1, 0, 0, 1> , 9 DUP(<>)
    alive_monkies MONKEY 10 DUP(<>)


.data
    monkeys MONKEY 10 DUP(<?>)

.code

; Places a monkey on AX (AH: X      AL: Y)
PlaceMonkey proc far
    push bx 
    push ds
    xor bx, bx 

    push ax
    mov ax, @data
    mov ds, ax
    pop ax
    
    cmp alive_monkey_head, 10 ; If we have 10 monkeys, we can't place anymore
    je finish_place_monkey

    ; Check if a monkey exists here already
    mov bx, OFFSET alive_monkies
    mov cx, alive_monkey_head
    check_monkey_already_there:
        cmp ds:[bx + MONKEY.chunk], ax
        je finish_place_monkey

        cmp ds:[bx + MONKEY.deployed], 1
        je continue_mky_checks

        mov ds:[bx + MONKEY.chunk], ax
        mov ds:[bx + MONKEY.deployed], 1
        inc alive_monkey_head 
        jmp finish_place_monkey

    continue_mky_checks:
        add bl, monkey_struc_size
    loop check_monkey_already_there

    finish_place_monkey:
    pop ds
    pop bx 
    ret
PlaceMonkey endp


; Iterates through alive monkies and draws them at their position
DrawMonkey proc far
    push bx 
    push ax
    push cx 
    push ds
    
    mov ax, @data
    mov ds, ax
    
    xor cx, cx
    mov bx, OFFSET alive_monkies
    mov ax, alive_monkey_head
    draw_monkies_loop:
        cmp ax, 0
        je draw_monkies_loop_done

        cmp ds:[bx + MONKEY.deployed], 1
        jne dont_draw_monkey

        mov dx, ds:[bx + MONKEY.chunk] ; get instance's chunk
        mov cl, ds:[bx + MONKEY.sprite] ; get sprite 
        call ShowSprite

        dont_draw_monkey:
        add bl, monkey_struc_size
        dec ax
        jmp draw_monkies_loop


    draw_monkies_loop_done:
    pop ds
    pop cx 
    pop ax
    pop bx
    ret

    ; cmp ds:[bx + MONKEY.highlighted], 0
    ; jne showRange
    ; showRange:
    ;     call DrawRadius
    ;     ret
DrawMonkey endp

; TODO: Bounds check
; draw the monkey's sightline relative to current chunk
DrawRadius proc near
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
    ret
DrawRadius endp