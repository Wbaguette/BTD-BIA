; Manage all superflous screens (title, death, etc.)

.code
ShowTitle proc far
    push ds
    push ax
    push bx
    push dx

    call TitleGradientBG

    ; Keyboard detection fails if this happens after awaitgame (probably ds)
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

; Draw sky gradient for title screen
TitleGradientBG proc near
    xor ax, ax
    xor bx, bx
    mov bh, X_CHUNKS ; edge of screen
    mov bl, 5
    mov dl, SKY_1
    call DrawArea

    xor ax, ax
    xor bx, bx
    mov al, 6
    mov bh, X_CHUNKS ; edge of screen
    mov bl, 11
    mov dl, SKY_2
    call DrawArea

    xor ax, ax
    xor bx, bx
    mov al, 12
    mov bh, X_CHUNKS ; edge of screen
    mov bl, 17
    mov dl, SKY_3
    call DrawArea

    xor ax, ax
    xor bx, bx
    mov al, 18
    mov bh, X_CHUNKS ; edge of screen
    mov bl, YZ_CHUNKS ; this one fails as Y_CHUNKS 
    mov dl, SKY_4
    call DrawArea

    ret
TitleGradientBG endp