; Procedures for drawing all assets of the game background
; This file controls stage-specific aspects such as where
; the path bloons travel along are placed, where the decor is, etc


; array of all chunk X/Y coordinates the path follows
PATH dw 0008h, 0108h, 0208h, 0308h, 0408h, 0508h, 0608h, 0708h
    dw 0501h, 0601h, 0701h, 0801h, 0901h, 0a01h, 0b01h, 0c01h
    dw 0d01h, 0e01h, 0f01h, 0808h, 0908h, 0a08h, 0b08h, 0c08h
    dw 0d08h, 0e08h, 0f08h, 0f01h, 0f02h, 0f03h, 0f04h, 0f05h
    dw 0f06h, 0f07h, 0501h, 0502h, 0503h, 0504h, 0505h, 0506h
    dw 0507h, 0509h, 050ah, 050bh, 050ch, 050dh, 050eh, 050fh
    dw 0510h, 0511h, 0512h, 0513h, 0514h, 0515h, 0615h, 0715h
    dw 0815h, 0915h, 0a15h, 0b15h, 0c15h, 0d15h, 0e15h, 0f15h
    dw 1015h, 1115h, 1215h, 1315h, 1415h, 1515h, 1516h, 1517h
    dw 1518h
PATH_LENGTH = ($ - PATH) / 2

.code
InitStage proc far
    mov dl, STAGE_BACKGROUND
    call DrawBackground
    call DrawPath

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
