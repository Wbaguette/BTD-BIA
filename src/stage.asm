.model small
.stack 200h ; 512 bytes
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
  
    mov al, 100 ; color
    mov bx, 0 ;pixel offset 0 (none)
    mov cx, 64000 ;pixel count

    drawloop:
        mov es:[bx], ax
        inc bx
        dec al
        loop drawloop
    
    awaitkey: ; terminates program on key press
        mov ah, 10h
        int 16h
        cmp al, 32 ; space key is pressed, terminate
        je exit
        jmp awaitkey ; space was not pressed

    exit: ; terminates program
        xor ax, ax ; zero out
        mov ah, 4ch ; terminate process code
        int 21h ; trigger exit
main ENDP
END main 
