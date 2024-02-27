.model small
.stack

.code
    main proc
      ;set video mode 
      mov ah, 00h
      mov al, 13h

      int 10h ; 640x350 16-bit color mode

      drawSomething:
        ;write pixels on screen
        mov ah, 0ch 
        mov bh, 0
        mov dx, 25 ; row

        mov cx, 25 ; col
        mov al, 010b ; color
        loop drawSomething

      int 10h
    main endp
end main