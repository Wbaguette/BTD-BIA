MONKEY struc
    chunk dw 0 ; monkey's location (X/Y upper/lower 8 bits)
    pops dw 0 
    upgrades db 0 ; upgrades
    radius db 1 ; radius of chunks it can see
    damage db 1 
    fireRate db 12 ; how many frames before this monkey can inflict damage again
    sprite db MONKEY_DART_1
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