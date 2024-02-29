.model small
.stack 200h ; 512 bytes (book recommended it ¯\_(ツ)_/¯)
; DOCS - https://stanislavs.org/helppc/idx_interrupt.html 

include shapes.inc

.data
    X_PIXELS equ 320
    Y_PIXELS equ 200
    CHUNK_SIZE equ 8
    VRAM  equ 0a000h  ; VGA VRAM begins at this location
    PURPLE equ 22h
    TEAL equ 33h
    YELLOW equ 44h
    PINK equ 55h
    LIGHT_GRAY equ 66h
    GREEN equ 77h
    RED equ 88h

    color db 0
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
    mov al, TEAL ; color
    mov bx, 0 ;pixel offset 0 (none)
    mov cx, X_PIXELS
    mov cx, 64000 ;pixel count

    ; calc number of horizontal chunks
    ; mov ax, X_PIXELS
    ; mov bx, CHUNK_SIZE
    ; div bx
    ; mov cx, ax ; number of chunks to draw
    ; xor ax, ax
    ; mov dl, TEAL

    ; we need USES or something akin to it
    drawloop:
        xor ax, ax
        xor dx, dx
        mov dl, TEAL
        call draw_chunk
        ; add ax, CHUNK_SIZE
        ; loop drawloop

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
        xor bx, bx ; clear offset
        xor ax, ax ; clear (usually keydata)
        mov al, color ; get last color we drew
        add al, 5 ; change color
        mov color, al ; save as last color drawn
        jmp drawloop  ; redraw

    exit: ; terminates program
        xor ax, ax ; zero out
        mov ah, 4ch ; terminate process code
        int 21h ; trigger exit
main ENDP
END main 
