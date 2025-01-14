include sprite/module.inc
include const.inc

x db CURSOR_X_LOWER  ; chunk
y db CURSOR_Y_LOWER  ; chunk
selected db 0   ; the thing the cursor is hovering above 

.code
; Draw the cursor at screen origin
DrawCursor proc far
    push dx 
    push cx

    mov dh, x ; Draw sprite at X chunk
	mov dl, y ; Draw sprite at Y chunk
	mov cx, CURSOR ; Sprite we want to draw, this maps to an index in the include file 
	call ShowSprite

    pop dx 
    pop cx
    ret
DrawCursor endp

; Returns cursor's current chunk coordinates in DX
GetPos proc far
    xor dx, dx
    mov dh, x
    mov dl, y
    ret
GetPos endp

MoveRight proc near
    push dx
    inc x   ; move right
    cmp x, CURSOR_X_UPPER ; bounds checking
    jge s
    ; Safe to draw
    dec x   ; go back to original position
    call DrawCursor ; clear the cursor at current location
    inc x   ; now we can draw the new cursor
    call DrawCursor ; draw at new position

    ; Checker if we're on a monkey!
    xor dx, dx
    mov dh, x
    mov dl, y
    call IsMonkeySelected
    pop dx
    ret     ; completed successfully
    s:
        pop dx
        dec x   ; go back to original position
        ret
MoveRight endp

MoveLeft proc near
    push dx
    dec x ; move left
    cmp x, CURSOR_X_LOWER ; bounds checking
    jl s2
    ; Safe to draw    
    inc x   ; go back to original position
    call DrawCursor ; clear the cursor at current location
    dec x   ; move Left
    call DrawCursor ; draw at new position
    ; Checker if we're on a monkey!
    xor dx, dx
    mov dh, x
    mov dl, y
    call IsMonkeySelected
    pop dx
    ret     ; completed successfully
    s2:
        pop dx
        inc x   ; go back to original position
        ret
MoveLeft endp

MoveUp proc near
    push dx
    dec y
    cmp y, CURSOR_Y_LOWER ; bounds checking
    jl s3
    ; Safe to draw    
    inc y   ; go back to original position3
    call DrawCursor ; clear the cursor at current location
    dec y   ; move Up
    call DrawCursor ; draw at new position
    ; Checker if we're on a monkey!
    xor dx, dx
    mov dh, x
    mov dl, y
    call IsMonkeySelected
    pop dx
    ret     ; completed successfully
    s3:
        pop dx
        inc y   ; go back to original position
        ret
MoveUp endp

MoveDown proc near
    push dx
    inc y
    cmp y, CURSOR_Y_UPPER ; bounds checking
    jge s4
    ; Safe to draw    
    dec y   ; go back to original position4
    call DrawCursor ; clear the cursor at current location
    inc y   ; move Down
    call DrawCursor ; draw at new position
    ; Checker if we're on a monkey!
    xor dx, dx
    mov dh, x
    mov dl, y
    call IsMonkeySelected
    pop dx
    ret     ; completed successfully
    s4:
        pop dx
        dec y   ; go back to original position
        ret
MoveDown endp
