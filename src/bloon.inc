BLOON struc
    level dw 1 ; sprite corresponds to level
    pathIndex db 0 ; an index corresponding to which element in the PATH this bloon is at
    speed db 10 ; Number of frames (gameloops) it takes to move 1 chunk
BLOON ends

.code
; TODO Move a bloon to its next step along the path, if the end of path, delete (and lose a life)
; Takes offset of bloon instance in BX
Step proc far
	; mov si, bx   ; get the instance
    lea bx, ds:[bx].pathIndex
    ; mov bx, BLOON PTR [bx.pathIndex]  ; reference the bloon's pos
    add [bx], WORD PTR 1  ; update instance's pos
    ret
Step endp
