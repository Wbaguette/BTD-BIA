; All shapes are drawn on a chunk by chunk grid. All provided
; X/Y pairs are treated as chunk coordinates when drawing, NOT pixels

; Multiply Y by 320 to determine which row an element should draw at
; X is simply an offset from 0-319

.data
   color db 0
.code 
; Draws a horizontal line on the screen, starting at BX
; and continuing to the right 1 chunk length (for 8 pixels total)
; DL : Color
; BX : Pixel (start)
DrawHorizontalLine proc far 
   push cx
   xor cx, cx  ; zero out for loop
   mov cx, CHUNK_SIZE   ; 8 pixels per chunk line
   
   draw_line:
      mov es:[bx], dl
      inc bx
      loop draw_line
   pop cx
   ret

DrawHorizontalLine endp

; Draws a chunk (8x8 square) on the screen
; DL : Color
; AH : X (chunk)
; AL : Y (chunk)
DrawChunk proc far
   push bx
   push cx
   push dx
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
      ; mov ax, bx ; save original bx value
      push bx
      call DrawHorizontalLine
      pop bx
      ; mov bx, ax ; restore original bx value
      add bx, X_PIXELS ; move start position to next row
      loop draw_c
   pop dx
   pop cx
   pop bx
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
; Draws a rectangle with the area filled by DL, BX should be larger than AX
; AX : Chunk (X/Y) TL corner
; BX : Chunk (X/Y) BR corner
; DL : Color
; Note that this is incredibly slow due to all the stack manipulation, up to 1ms for a SINGLE call
DrawArea proc far
   push cx
   push dx
   xor cx, cx

   ; AH no longer matters, we have all the info we need from it
   ; So save AL to know how high to go and call it a day
   mov dh, al ; Save Y for now

   arealoop:
      ; # of chunks to fill along x
      mov cl, bh 
      sub cl, ah

      area_fillx:
         mov ah, cl ; X corresponds to current iter
         mov al, dh ; Draw bottom up starting from top down
         dec ah ; 1 offset so -1 to reach 0
         call DrawChunk
         loop area_fillx
   
   inc dh ; move 1 y chunk closer to origin
   cmp dh, bl
   jl arealoop ; repeat while dh <= target height (BL)

   pop dx
   pop cx
   ret
DrawArea endp
