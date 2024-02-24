.model small
.stack 200h ; 512 bytes
; DOCS - https://stanislavs.org/helppc/idx_interrupt.html 
.data
    VGA_VIDEO_SEGMENT       equ     0a000h  ;VGA display memory segment 
    color db 0
.code
main PROC
    ;set video mode 
    mov ah, 00h
    mov al, 13h ; video mode (320x200, 256 color)
            ; each pixel is one byte in this mode
    int 10h ; trigger change to video mode

    mov ax, VGA_VIDEO_SEGMENT ; move vram to data segment
    mov es, ax ; es points to VGA memory (es can only be accessed via register)
  
    mov al, color ; color
    mov bx, 0 ;pixel offset 0 (none)
    mov cx, 64000 ;pixel count

    drawloop:
        mov es:[bx], ax ; draw pixel
        inc bx ; go to next pixel 
        loop drawloop  

    awaitkey: ; terminates program on key press
        mov ah, 10h
        int 16h
        cmp al, 32 ; space key is pressed, terminate
        je exit
        cmp al, 27 ; escape key is pressed, redraw
        je redraw
        jmp awaitkey ; space was not pressed

    redraw:
        mov cx, 64000
        xor bx, bx
        xor ax, ax ; clear
        mov al, color ; get previous draw color
        add al, 5 ; change color
        mov color, al ; save 
        jmp drawloop 

    exit: ; terminates program
        xor ax, ax ; zero out
        mov ah, 4ch ; terminate process code
        int 21h ; trigger exit
main ENDP
END main 
