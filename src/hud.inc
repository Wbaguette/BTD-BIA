
.code
DrawMonkeyBar proc far
    push cx
    push dx

    ; Row 1
    xor cx, cx
    xor dx, dx
    mov dh, MONKEY_BAR_X_OFFSET
    mov cl, HUD_MB_0
    call ShowSprite

    xor cx, cx
    xor dx, dx
    mov dh, MONKEY_BAR_X_OFFSET
    add dh, 4
    mov cl, HUD_MB_1
    call ShowSprite

    xor cx, cx
    xor dx, dx
    mov dh, MONKEY_BAR_X_OFFSET
    add dh, 8
    mov cl, HUD_MB_2
    call ShowSprite

    ; Row 2
    xor cx, cx
    xor dx, dx
    mov dh, MONKEY_BAR_X_OFFSET
    mov dl, 5
    mov cl, HUD_MB_3
    call ShowSprite

    xor cx, cx
    xor dx, dx
    mov dh, MONKEY_BAR_X_OFFSET
    add dh, 4
    mov dl, 5
    mov cl, HUD_MB_4
    call ShowSprite

    xor cx, cx
    xor dx, dx
    mov dh, MONKEY_BAR_X_OFFSET
    add dh, 8
    mov dl, 5
    mov cl, HUD_MB_5
    call ShowSprite

    ; Row 3
    xor cx, cx
    xor dx, dx
    mov dh, MONKEY_BAR_X_OFFSET
    mov dl, 10
    mov cl, HUD_MB_0
    call ShowSprite

    xor cx, cx
    xor dx, dx
    mov dh, MONKEY_BAR_X_OFFSET
    add dh, 4
    mov dl, 10
    mov cl, HUD_MB_1
    call ShowSprite

    xor cx, cx
    xor dx, dx
    mov dh, MONKEY_BAR_X_OFFSET
    add dh, 8
    mov dl, 10
    mov cl, HUD_MB_2
    call ShowSprite

    ; Row 4
    xor cx, cx
    xor dx, dx
    mov dh, MONKEY_BAR_X_OFFSET
    mov dl, 15
    mov cl, HUD_MB_0
    call ShowSprite

    xor cx, cx
    xor dx, dx
    mov dh, MONKEY_BAR_X_OFFSET
    add dh, 4
    mov dl, 15
    mov cl, HUD_MB_1
    call ShowSprite

    xor cx, cx
    xor dx, dx
    mov dh, MONKEY_BAR_X_OFFSET
    add dh, 8
    mov dl, 15
    mov cl, HUD_MB_2
    call ShowSprite

    ; Row 5
    xor cx, cx
    xor dx, dx
    mov dh, MONKEY_BAR_X_OFFSET
    mov dl, 20
    mov cl, HUD_MB_3
    call ShowSprite

    xor cx, cx
    xor dx, dx
    mov dh, MONKEY_BAR_X_OFFSET
    add dh, 4
    mov dl, 20
    mov cl, HUD_MB_4
    call ShowSprite

    xor cx, cx
    xor dx, dx
    mov dh, MONKEY_BAR_X_OFFSET
    add dh, 8
    mov dl, 20
    mov cl, HUD_MB_5
    call ShowSprite

    pop dx
    pop cx
    ret
DrawMonkeyBar endp