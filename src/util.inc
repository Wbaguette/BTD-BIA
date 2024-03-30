
.code
; Calculate the straight line distance between two chunk coordinates
; AX : Chunk A (X/Y)  
; BX : Chunk B (X/Y)  
; Returns 
; AL : Straight line distance between A and B (number)
DistanceBetweenChunks proc far
    ; SQRT((B-A)x^2 + (B-A)y^2)
    ret
DistanceBetweenChunks endp