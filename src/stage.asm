.model small
.stack
; DOCS - https://stanislavs.org/helppc/idx_interrupt.html 
.data
VGA_VIDEO_SEGMENT       equ     0a000h  ;VGA display memory segment

.code
main PROC
    ;set video mode 
    mov ah, 00h
    mov al, 13h ; video mode (320x200, 256 color)
            ; each pixel is one byte in this mode
    int 10h ; trigger change to video mode
    mov ax, VGA_VIDEO_SEGMENT ; move vram to data segment
    mov es, ax ; es points to VGA memory (es can only be accessed via register)
  
    ; mov ah, 06h ; 06h triggers scroll down
    ; mov al, 0 ; no idea what this does but it breaks without it

    mov al, 100
    mov bx, 0 ;pixel offset 0 (none)
    mov cx, 64000 ;pixel count

    drawloop:
        mov es:[bx], ax
        inc bx
        dec al
        loop drawloop

    ; drawloop:
    ;     mov cl, 5 ; start x position
    ;     mov dl, 35 ; end x position
    ;     ; mov ch, 0 ; start y position
    ;     ; mov dh, 1 ; end y position
    ;     mov bh, 44h ; color
    ;     inc ch ; draw next line
    ;     inc dh 
    ;     dec bh ; change color
    ;     cmp ch, 25 ; 25 lines drawn
    ;     jnz drawloop

main ENDP
END main 
