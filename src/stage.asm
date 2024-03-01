.model small
.stack 200h ; 512 bytes (book recommended it ¯\_(ツ)_/¯)
; DOCS - https://stanislavs.org/helppc/idx_interrupt.html 

include shapes.inc

.data
    X_PIXELS equ 320
    Y_PIXELS equ 200
    CHUNK_SIZE equ 8
    X_CHUNKS equ 40
    Y_CHUNKS equ 25
    TOTAL_CHUNKS equ 1000
    VRAM  equ 0a000h  ; VGA VRAM begins at this location
    PURPLE equ 22h
    TEAL equ 33h
    YELLOW equ 44h
    PINK equ 55h
    LIGHT_GRAY equ 66h
    GREEN equ 77h
    RED equ 88h
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

    drawloop:
        ; ZERO ZERO FUCKING ZERO ZERO ZERO ZERO
        xor ax, ax
        xor bx, bx
        xor dx, dx

        mov ax, cx ; setup for div
        mov bx, Y_CHUNKS ; THIS BREAKS WITH DX IDK WHY
        div bx  ; X chunk
        mov ah, al ; conform to parameter order
        mov al, dl ; y chunk

        ; only draw if a perimeter piece
        cmp ah, 39
        je dothing
        cmp al, 24
        je dothing
        cmp al, 0
        je dothing
        loop drawloop
    
    awaitkey: ; terminates program on key press
        mov ah, 10h
        int 16h
        cmp al, 32 ; space key is pressed, terminate
        je exit
        jmp awaitkey ; space was not pressed
    
    dothing:
        push cx
        mov dl, TEAL ; set color
        call draw_chunk
        pop cx
        dec cx
        jmp drawloop

    exit: ; terminates program
        xor ax, ax ; zero out
        mov     ax,3    ;reset to text mode
        int     10h
        xor ax, ax ; zero out
        mov ah, 4ch ; terminate process code
        int 21h ; trigger exit
main ENDP
END main 
