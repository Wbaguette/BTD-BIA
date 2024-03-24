MONKEY struc
    chunk dw 0 ; monkey's location (X/Y upper/lower 8 bits)
    upgrades db 0 ; upgrades
    range db 1 ; radius of chunks it can see
    damage db 1 
    fireRate db 12 ; how many frames before this monkey can inflict damage again
    sprite db DART_MONKEY_0
    direction db 0 ; where should the monkey face
    highlighted db 0 ; (bool) when true, renders the monkey's range and allows for upgrading
MONKEY ends

.code
; overwrites cl
; BX : Monkey instance
DrawMonkey proc far

    mov dx, ds:[bx + MONKEY.chunk] ; get instance's chunk
    mov cl, ds:[bx + MONKEY.sprite]

    call ShowSprite
    cmp ds:[bx + MONKEY.highlighted], 0
    jne showRange

    ; ret
    showRange:
        call DrawRadius
        ret
DrawMonkey endp

; draw the monkey's sightline relative to current chunk
DrawRadius proc near
    mov cl, ds:[bx + MONKEY.range] ; up
    mov dx, ds:[bx + MONKEY.chunk] ; get current pos
    
    rangeup:
        push cx
        push dx
        add dl, cl
        mov cl, SMILE
        call ShowSprite
        pop dx
        pop cx
        loop rangeup

    mov cl, ds:[bx + MONKEY.range] ; down
    rangedown:
        push cx
        push dx
        sub dl, cl
        mov cl, SMILE
        call ShowSprite
        pop dx
        pop cx
        loop rangedown

    mov cl, ds:[bx + MONKEY.range] ; left
    rangeleft:
        push cx
        push dx
        sub dh, cl
        mov cl, SMILE
        call ShowSprite
        pop dx
        pop cx
        loop rangeleft

    mov cl, ds:[bx + MONKEY.range] ; right
    rangeright:
        push cx
        push dx
        add dh, cl
        mov cl, SMILE
        call ShowSprite
        pop dx
        pop cx
        loop rangeright    
    ret
DrawRadius endp