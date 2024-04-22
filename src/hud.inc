
.code
DrawMonkeyBar proc far
    push cx
    push dx

    ; Row 1
    xor cx, cx
    xor dx, dx
    mov dh, INST_X_OFFSET
    mov dl, INST_Y_OFFSET
    mov cl, HUD_INST_0
    call ShowSprite

    xor cx, cx
    xor dx, dx
    mov dh, INST_X_OFFSET
    add dh, 4
    mov dl, INST_Y_OFFSET
    mov cl, HUD_INST_1
    call ShowSprite

    xor cx, cx
    xor dx, dx
    mov dh, INST_X_OFFSET
    add dh, 8
    mov dl, INST_Y_OFFSET
    mov cl, HUD_INST_2
    call ShowSprite

    ; Row 2
    xor cx, cx
    xor dx, dx
    mov dh, INST_X_OFFSET
    mov dl, INST_Y_OFFSET
    add dl, 5
    mov cl, HUD_INST_3
    call ShowSprite

    xor cx, cx
    xor dx, dx
    mov dh, INST_X_OFFSET
    add dh, 4
    mov dl, INST_Y_OFFSET
    add dl, 5
    mov cl, HUD_INST_4
    call ShowSprite

    xor cx, cx
    xor dx, dx
    mov dh, INST_X_OFFSET
    add dh, 8
    mov dl, INST_Y_OFFSET
    add dl, 5
    mov cl, HUD_INST_5
    call ShowSprite

    pop dx
    pop cx
    ret
DrawMonkeyBar endp

; Draw lives on hud
; Register params: 
; AX : Number of lives remaining
DrawLives proc far
    push cx
    push dx
    xor cx, cx

    DrawLivesRemaining:
        cmp ax, 0 ; All lives drawn
        je DrawLivesDone   ; Fall through if we still have some lives remaining to draw  

        ; More lives to draw
        mov dh, LIVES_X_OFFSET
        add dh, al ; Easy offset!
        mov dl, LIVES_Y_OFFSET
        mov cx, HEART
        call ShowSprite

        dec ax
        jmp DrawLivesRemaining

    DrawLivesDone:
    pop dx
    pop cx
    ret
DrawLives endp