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
   mov cx, CHUNK_SIZE   ; 8 pixels per chunk line
   
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
   mov cl, 3  ; we will want to shift by this amount (equiv to * 8)

   ; calc y offset
   xor ah, ah  ; clear X chunk
   mov dx, X_PIXELS ; pixels per row 
   shl dx, cl  ; rows per chunk, so chunksize*rowsize is true vertical offset
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
   mov cx, CHUNK_SIZE   ; 8 pixels per chunk line

   draw_c:   
      push cx  
      push bx  ; we don't want to modify our start position for next iter
      call draw_horizontal_line
      pop bx   
      add bx, X_PIXELS ; go to next row to be drawn
      pop cx
      loop draw_c
   ret 
draw_chunk endp

; Draws a chunk along the perimeter of the screen, skipping
; over non-perimeter chunks
; DL : Color
.data?
   color db ?
.code 
draw_perimeter proc far
   mov cx, TOTAL_CHUNKS
   mov color, dl  ; save, dx is needed for math

   perimeterloop:
      push cx  ; save true iterator
      dec cx   ; sub 1 since chunks are zero-based

      ; ZERO ZERO ZERO ZERO ZERO ZERO
      xor ax, ax
      xor bx, bx
      xor dx, dx

      mov ax, cx ; setup for div
      mov bx, Y_CHUNKS ; THIS BREAKS WITH DX IDK WHY
      div bx  ; X chunk
      mov ah, al ; conform to parameter order
      mov al, dl ; y chunk

      cmp ah, 0 ; x=0
      je isperimeter
      cmp al, 0 ; y=0
      je isperimeter
      cmp ah, XZ_CHUNKS ;x=X_CHUNKS-1
      je isperimeter
      cmp al, YZ_CHUNKS ;y=Y_CHUNKS-1
      je isperimeter
      jmp continue   ; skip drawing

      isperimeter:   ; draw
         mov dl, color ; set color
         call draw_chunk
      continue:
         pop cx
         loop perimeterloop
   ret
draw_perimeter endp