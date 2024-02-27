.model small
.stack 200h

include shapes.inc

.data
    VRAM equ 0a000h  ; VGA VRAM begins at this location
    color db 11111111b 
    x equ 0
    y equ 0 
.code
main proc
    ;set video mode 
    mov ah, 00h
    mov al, 13h ; video mode (320x200, 256 color)
            ; each pixel is one byte in this mode
            ; note that pixels are sequential, 
            ; so pixel 320 is the first pixel in the second row
    int 10h ; trigger change to video mode

    mov ax, VRAM ; move vram to data segment
    mov es, ax ; es points to VGA memory (es can only be accessed via register)
    
    mov al, color ; move the color into al register
    mov dh, x     ; move x chunk position into upper half of dx
    mov dl, y     ; move y chunk position into lower half of dx
    mov cx, 64    ; pixel count
    call dchunk

     
    exit: ; terminates program
        xor ax, ax ; zero out
        mov ah, 4ch ; terminate process code
        int 21h ; trigger exit
main endp
end main