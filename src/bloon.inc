BLOON struc
    level dw 1 ; sprite corresponds to level, this is the sprite key
    pathIndex db 0 ; an index corresponding to which element in the PATH this bloon is at
    speed db 10 ; Number of frames (gameloops) it takes to move 1 chunk

    timeout dw 0; Number of frames since the beginning of round this bloon should spawn

    ; TODO: Maybe have an alive or dead value here. 
BLOON ends

.code
; TODO Move a bloon to its next step along the path, if the end of path, delete (and lose a life)
; Takes offset of bloon instance in BX
Step proc far
    ; First step is to erase the bloon sprite
    mov ds, ax
    mov cx, ds:[bx + BLOON.pathIndex]          ; Get the pathIndex
    mov dx, [PATH + bx]
    mov cx, ds:[bx + BLOON.level]
    call ShowSprite


    ; mov cx, red1.level

    inc ds:[bx + BLOON.pathIndex]
    ret
Step endp
