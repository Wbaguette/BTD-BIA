
.code
; Calculate the approximate straight line distance between two chunk coordinates
; AX : Chunk A (X/Y)  
; BX : Chunk B (X/Y)  
; Returns 
; AH : Horizontal distance between A & B
; AL : Vertical distance between A & B
;
; So fun fact, this actually isn't necessary. All we need to do is Bx-Ax and
; By-Ay. If BOTH results come back within range then the bloon can be popped
; Square roots are expensive so this just seems like the most reasonable approach

DistanceBetweenChunks proc far
    ;TODO this needs to be abs value cause no guarantee B > A or vice versa
    sub ah, bh ; Lol I think this is literally it
    sub al, bl
    ret
DistanceBetweenChunks endp