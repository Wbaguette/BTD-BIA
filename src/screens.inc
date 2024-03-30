; Manage all superflous screens (title, death, etc.)

.code
ShowTitle proc far
    push ds
    push ax
    push bx
    push dx
    push cx

    ; set segment
    mov ax, @data
    mov ds, ax

    ; sprite number is an ever increasing counter corresponding to the sprite to draw
    xor ax, ax ; our y position (low), and sprite number (high)
    mov ah, BG_START ; Initialize sprite number

    ShowTitleY:
        xor bx, bx ; our x position (needs to reset for each row)
        ShowTitleX:
            xor dx, dx
            xor cx, cx
            mov dh, bl ; set x
            mov dl, al ; set y
            mov cl, ah ; set sprite
            call ShowSprite

            add bl, 4 ; next col for background tile is 4 chunks to the right
            inc ah ; sprite number++ (move to next sprite)
            cmp bl, X_CHUNKS ; Have all columns been drawn?
            jl ShowTitleX

        add al, 5 ; next row for background tile is 5 chunks down
        cmp al, Y_CHUNKS ; Have all rows been drawn?
        jl ShowTitleY

    ; Keyboard detection fails if this happens after awaitgame (probably ds)
    pop cx
    pop dx
    pop bx
    pop ax
    pop ds
  
    ; wait for input to start/end game
    awaitgame:
        xor ax, ax ; clear existing data
        xor bx, bx
        xor dx, dx
        mov ah, 10h ; get keyboard input
        int 16h

        cmp al, 32 ; space key is pressed, start game
        je startgame
        cmp al, 27 ; esc is pressed, terminate
        jmp ex
        jmp awaitgame
    
    startgame:
        ret
ShowTitle endp