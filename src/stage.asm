.model small
.stack 200h ; 512 bytes (book recommended it ¯\_(ツ)_/¯)
; DOCS - https://stanislavs.org/helppc/idx_interrupt.html 

include shapes.inc
include const.inc

.code
main PROC
    ;set video mode 
    mov ah, 00h
    mov al, 13h ; video mode (320x200, 256 color)
            ; each pixel is one byte in this mode
            ; note that pixels are sequential, 
            ; so pixel 320 is the first pixel in the second row
    int 10h ; trigger change to video mode

    mov ax, VRAM ; move vram to data segment
    mov es, ax ; es points to VGA memory (es can only be accessed via register)
    mov bx, 0 ;pixel offset 0 (none)
    mov cx, TOTAL_CHUNKS

    xor dx, dx
    mov dl, TEAL
    call draw_perimeter
    
    awaitkey: ; terminates program on key press
        mov ah, 10h
        int 16h
        cmp al, 32 ; space key is pressed, terminate
        je exit
        jmp awaitkey ; space was not pressed
    
    exit: ; terminates program
        xor ax, ax ; zero out
        mov     ax,3    ;reset to text mode
        int     10h
        xor ax, ax ; zero out
        mov ah, 4ch ; terminate process code
        int 21h ; trigger exit
main ENDP
END main 
