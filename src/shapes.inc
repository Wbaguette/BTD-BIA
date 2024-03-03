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
   xor cx, cx ; clear
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
      push cx  ; save which line of the chunk we are drawing
      push bx  ; save our start position
      call draw_horizontal_line
      pop bx   ; restore start position
      add bx, X_PIXELS ; move start position to next row
      pop cx   ; restore which line of the chunk we just drew
      loop draw_c
   ret 
draw_chunk endp

; ! The CHEAPEST way to do a perimeter would be to hard code iterations
; for horizontal and vertical drawing, rather than going through every chunk
; and skipping over. This would be much uglier though

; Draws a chunk along the perimeter of the screen, skipping
; over non-perimeter chunks
; DL : Color
.data?
   color db ?
.code 
draw_perimeter proc far
   mov cx, TOTAL_CHUNKS
   mov color, dl ; save as dx is needed for chunk calcs

   perimeterloop:
      push cx  ; save chunk iterator
      dec cx   ; sub 1 since true chunks are zero-based

      ; ZERO ZERO ZERO ZERO ZERO ZERO or division fucking dies
      xor ax, ax
      xor bx, bx
      xor dx, dx 

      ; 1d to 2d chunk coordinate
      mov ax, cx ; get 1d chunk index
      mov bx, Y_CHUNKS 
      div bx     ; 1D index / Y_CHUNKS = X (AX) and Y (DX) chunks
      mov ah, al ; conform to parameter order by 
      mov al, dl ;    moving X to AH and Y to AL

      ; perimeter chunk checking
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
         mov dl, color ; restore color
         call draw_chunk
      continue:
         pop cx ; restore chunk iterator
         loop perimeterloop
   ret
draw_perimeter endp

