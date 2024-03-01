; All shapes are drawn on a chunk by chunk grid. All provided
; X/Y pairs are treated as chunk coordinates when drawing, NOT pixels

; Multiply Y by 320 to determine which row an element should draw at
; X is simply an offset from 0-319

; Draws a horizontal line on the screen, starting at BX
; and continuing to the right 1 chunk length (for 8 pixels total)
; DL : Color
; BX : Pixel (start)
.code 
draw_horizontal_line proc far 
   xor cx, cx  ; zero out for loop
   mov cx, 8   ; 8 pixels per chunk line
   
   draw_line:
      mov es:[bx], dl
      inc bx
      loop draw_line
   ret

draw_horizontal_line endp

; Draws a chunk (8x8 square) on the screen
; DL : Color
; AH : X (chunk)
; AL : Y (chunk)
.code
draw_chunk proc far
   xor bx, bx ; clear
   mov ch, dl ; save color because dx gets reset on mul
   mov bl, ah ; save x chunk for later
   mov cl, 3  ; we will want to shift by this amount

   ; calc y offset
   xor ah, ah  ; clear X chunk
   mov dx, 320 ; 320 pixels per row 
   shl dx, cl  ; 8 rows per chunk, so 8*320 is true vertical offset
   mul dx      ; vertical offset
   mov dx, ax  ; save y offset

   ; calc x offset
   xor ax, ax  ; clear
   mov al, bl  ; get X chunk
   shl ax, cl  ; shift by 3 = mul by 8 for chunking
   add ax, dx  ; add y offset for true pixel position
   
   ; cleanup and draw prep
   xor dx, dx  ; clear
   mov dl, ch  ; restore saved color
   mov bx, ax  ; must store pixel position in bx
   xor cx, cx  ; zero out for loop
   mov cx, 8   ; 8 pixels per chunk line

   draw_c:   
      push cx  
      push bx  ; we don't want to modify our start position for next iter
      call draw_horizontal_line
      pop bx   
      add bx, 320 ; go to next row to be drawn
      pop cx
      loop draw_c
   ret 
draw_chunk endp
