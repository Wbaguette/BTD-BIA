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

    int 10h ; trigger change to video mode
    mov ax, VGA_VIDEO_SEGMENT
    mov es, ax ; es points to VGA memory
    mov ah, 06h ; 06h triggers scroll down
    mov al, 20 ; number of lines to scroll
    jmp draw
    
    EndFlipPage: ; Exit if a key's been hit.
        mov     ah,1
        int     16h
        jnz     Done
        jmp     draw
    
    Done: ; Finished, clear key, reset screen mode and exit.
        mov     ah,0    ;clear key
        int     16h
        mov     ax,3    ;reset to text mode
        int     10h
        mov     ah,4ch  ;exit to DOS
        int     21h
    draw:
        mov cl, 0 ; start x position
        mov dl, 25 ; end x position
        ;ch specif2es the upper y axis coordinate
        mov ch, 2 ; start y position
        mov dh, 15 ; end y position
        ;bh specifies the background/foreground color and cursor handling 
        ;bh takes an 8 bit binary number
        ;the "b" at the end specifies binary
        mov bh , 01110000b

main ENDP
END main 
