; All shapes are drawn on a chunk by chunk grid. All provided
; X/Y pairs are treated as chunk coordinates when drawing, NOT pixels

; Multiply Y by 320 to determine which row an element should draw at
; X is simply an offset from 0-319

; Draws a horizontal line on the screen, starting at BX
; and continuing to the right 1 chunk length (for 8 pixels total)
; DL : Color
; BX : Pixel (start)
.data
   color db 0
.code 
DrawHorizontalLine proc far 
   push cx
   push bx
   xor cx, cx  ; zero out for loop
   mov cx, CHUNK_SIZE   ; 8 pixels per chunk line
   
   draw_line:
      mov es:[bx], dl
      inc bx
      loop draw_line
   pop bx
   pop cx
   ret

DrawHorizontalLine endp

; Draws a chunk (8x8 square) on the screen
; DL : Color
; AH : X (chunk)
; AL : Y (chunk)
DrawChunk proc far
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
      call DrawHorizontalLine
      add bx, X_PIXELS ; move start position to next row
      loop draw_c
   ret 
DrawChunk endp

; Set the entire visible background to a given color
; DL : Color
DrawBackground proc far
   mov cx, TOTAL_CHUNKS
   mov color, dl ; save as dx is needed for chunk calcs

   bgloop:
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

      mov dl, color ; restore color
      call DrawChunk
      pop cx ; restore chunk iterator
      loop bgloop
   ret
DrawBackground endp

; TODO : Bounds checking
; Draws a rectangle with the area filled by DL
; AX : Chunk (X/Y) TL corner
; BX : Chunk (X/Y) BR corner
; DL : Color
DrawArea proc far
   mov cl, bx ; target x to draw backwards from
   push ax ; save origin

   mov al, bl ; draw at target height
   areaX:
      mov ah, cl ; draw as we go along
      call DrawChunk
      loop areaX

   pop ax

   ; mov dh, ah ; store current x

   ; areaY:
   ;    push cx ; save y pos
      
   ;    mov cl, bh ; get target x pos
   ;    areaX:
   ;       inc ah ; x+1
   ;       call DrawChunk
   ;       loop areaX

   ;    pop cx
   ;    mov ah, dh ; restore original x
   ;    inc al ; y+1
   ;    loop areaY
   ret
DrawArea endp
