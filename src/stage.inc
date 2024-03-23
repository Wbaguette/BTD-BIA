; Procedures for drawing all assets of the game background
; This file controls stage-specific aspects such as where
; the path bloons travel along are placed, where the decor is, etc


; array of all chunk X/Y coordinates the path follows
PATH dw 0008h, 0108h, 0208h, 0308h, 0408h
    dw 0508h, 0509h, 050ah, 050bh, 050ch, 050dh, 050eh
    dw 050fh, 0510h, 0511h, 0512h, 0513h, 0514h, 0515h
    dw 0615h, 0715h, 0815h

    dw 0915h ,0914h ,0913h
    dw 0912h ,0911h ,0910h ,090fh ,090eh ,090dh ,090ch ,090bh
    dw 090ah ,0909h ,0908h, 0808h, 0708h, 0608h

    dw 0508h, 0509h, 050ah, 050bh, 050ch, 050dh, 050eh
    dw 050fh, 0510h, 0511h, 0512h, 0513h, 0514h, 0515h
    dw 0615h, 0715h

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
