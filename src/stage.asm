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

    drawloop:
        push cx 
        dec cx ; sub 1 since chunks are zero-based

        ; ZERO ZERO FUCKING ZERO ZERO ZERO ZERO
        xor ax, ax
        xor bx, bx
        xor dx, dx

        mov ax, cx ; setup for div
        mov bx, Y_CHUNKS ; THIS BREAKS WITH DX IDK WHY
        div bx  ; X chunk
        mov ah, al ; conform to parameter order
        mov al, dl ; y chunk

        ; debug colors
        xor bx, bx
        inc bx
        add bl, al
        add bl, ah
        mov dl, bl ; color is chunk X + chunk Y + 1

        cmp ah, 0 ; x=0
        je ddd
        cmp al, 0 ; y=0
        je ddd
        cmp ah, 39
        je ddd
        cmp al, 24
        je ddd
        jmp con

        ddd:
            mov dl, TEAL ; set color
            call draw_chunk
        con:
            pop cx
        loop drawloop
    
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
