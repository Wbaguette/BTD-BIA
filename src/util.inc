; Convert given X/Y coordinates to chunk coordinates
; This is done by simply floor dividing a coordinate
; by the determined chunk size
; AX : X
; BX : Y
;
; Returns: AH : X, AL : Y in chunk coordinates
.code
chunk proc far
    mov cl, CHUNK_SIZE
    div cl ; X chunk
    mov ch, al ; save X chunk
    mov ax, bx 
    div cl ; Y chunk
    xor ah, ah ; clear 
    mov ah, ch ; add X chunk for return
    ret
chunk endp 