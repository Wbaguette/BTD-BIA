; Procedures for drawing all assets of the game background
; This file controls stage-specific aspects such as where
; the path bloons travel along are placed, where the decor is, etc


; array of all chunk X/Y coordinates the path follows
; Seek resources/map_reference.jpg to see corresponding locations
PATH dw 000bh, 010bh, 020bh, 030bh, 040bh, 050bh, 060bh, 070bh ; A
    dw 070ah, 0709h, 0708h, 0707h, 0706h ; B
    dw 0806h, 0906h, 0a06h, 0b06h, 0c06h ; C

    ; D
    dw 0c07h, 0c08h, 0c09h, 0c0ah, 0c0bh, 0c0ch, 0c0dh
    dw 0c0eh, 0c0fh, 0c10h, 0c11h 

    dw 0b11h, 0a11h, 0911h, 0811h, 0711h, 0611h, 0511h, 0411h ; E 
    dw 0412h, 0413h, 0414h, 0415h ; F

    ; G
    dw 0515h, 0615h, 0715h, 0815h, 0915h, 0a15h, 0b15h, 0c15h, 0d15h
    dw 0e15h, 0f15h, 1015h, 1115h, 1215h, 1315h, 1415h, 1515h, 1615h 
    dw 1715h, 1815h

    dw 1814h, 1813h, 1812h, 1811h, 1810h, 180fh, 180eh ; H
    dw 170eh, 160eh, 150eh, 140eh, 130eh, 120eh, 110eh, 100eh ; I
    dw 100dh, 100ch, 100bh, 100ah, 1009h ; J
    dw 1109h, 1209h, 1309h, 1409h, 1509h, 1609h, 1709h, 1809h ; K
    dw 1808h, 1807h, 1806h, 1805h, 1804h, 1803h ; L
    
    ; M
    dw 1703h, 1603h, 1503h, 1403h, 1303h, 1203h, 1103h, 1003h 
    dw 0f03h

    dw 0f03h, 0f02h, 0f01h, 0f00h ; N

PATH_LENGTH = ($ - PATH) / 2

.code
InitStage proc far
    push dx

    mov dl, STAGE_BACKGROUND
    call DrawBackground
    call DrawPath
    call DrawWater

    pop dx 
    ret
InitStage endp

DrawPath proc near
    xor dx, dx
    xor bx, bx
    mov cx, PATH_LENGTH
    mov dl, STAGE_PATH

    dp: 
        push bx
        push cx
        mov ax, [PATH+bx]
        call DrawChunk
        pop cx
        pop bx
        add bx, 2
        loop dp
    ret
DrawPath endp

DrawWater proc near
    push dx
    push cx

    ; First Row (4 32x32 tiles)
    xor cx, cx
    xor dx, dx
    mov dh, INST_X_OFFSET - 4 ; 4 chunks larger than INST
    mov cl, STAGE_WATER_0
    call ShowSprite

    xor cx, cx
    xor dx, dx
    mov dh, INST_X_OFFSET - 4 ; 4 chunks larger than INST
    add dh, 4
    mov cl, STAGE_DEEP_WATER
    call ShowSprite

    xor cx, cx
    xor dx, dx
    mov dh, INST_X_OFFSET - 4 ; 4 chunks larger than INST
    add dh, 8
    mov cl, STAGE_DEEP_WATER
    call ShowSprite

    xor cx, cx
    xor dx, dx
    mov dh, INST_X_OFFSET - 4 ; 4 chunks larger than INST
    add dh, 12
    mov cl, STAGE_DEEP_WATER
    call ShowSprite

    ; Second Row (4 32x32 tiles)
    xor cx, cx
    xor dx, dx
    mov dh, INST_X_OFFSET - 4; 4 chunks larger than INST
    mov dl, 4
    mov cl, STAGE_WATER_1
    call ShowSprite

    xor cx, cx
    xor dx, dx
    mov dh, INST_X_OFFSET - 4; 4 chunks larger than INST
    add dh, 4
    mov dl, 4
    mov cl, STAGE_WATER_2
    call ShowSprite

    xor cx, cx
    xor dx, dx
    mov dh, INST_X_OFFSET - 4; 4 chunks larger than INST
    add dh, 8
    mov dl, 4
    mov cl, STAGE_DEEP_WATER
    call ShowSprite

    xor cx, cx
    xor dx, dx
    mov dh, INST_X_OFFSET - 4; 4 chunks larger than INST
    add dh, 12
    mov dl, 4
    mov cl, STAGE_DEEP_WATER
    call ShowSprite

    ; Third Row (3 32x32 tiles along X)
    xor cx, cx
    xor dx, dx
    mov dh, INST_X_OFFSET
    mov dl, 8
    mov cl, STAGE_WATER_3
    call ShowSprite

    xor cx, cx
    xor dx, dx
    mov dh, INST_X_OFFSET
    add dh, 4
    mov dl, 8
    mov cl, STAGE_DEEP_WATER
    call ShowSprite

    xor cx, cx
    xor dx, dx
    mov dh, INST_X_OFFSET
    add dh, 8
    mov dl, 8
    mov cl, STAGE_DEEP_WATER
    call ShowSprite

    ; Last Row (3 32x24 tiles)
    xor cx, cx
    xor dx, dx
    mov dh, INST_X_OFFSET
    mov dl, 12
    mov cl, STAGE_WATER_4
    call ShowSprite

    xor cx, cx
    xor dx, dx
    mov dh, INST_X_OFFSET
    add dh, 4
    mov dl, 12
    mov cl, STAGE_DEEP_WATER_SMALL
    call ShowSprite

    xor cx, cx
    xor dx, dx
    mov dh, INST_X_OFFSET
    add dh, 8
    mov dl, 12
    mov cl, STAGE_DEEP_WATER_SMALL
    call ShowSprite
   
    pop cx
    pop dx
    ret
DrawWater endp