; TODO: We are assuming good input right now, we likely will need a 
; validator method to formalize these chunk coordinates instead of direct
; X/Y pass in. Otherwise it may get messy

; Multiply Y by 320 to determine which row an element should draw at
; Multiply X by 200 to determine where in the row an element should be offset

.data
   t_color db 0

.code
; TODO: Refactor this to maybe use DI register instead of BX
; Fills a chunk (8x8 pixels) with a desired color
; PARAMETERS:
;  AL : Color to draw with
;  DH : X chunk position to draw at
;  DL : Y chunk position to draw at 
dchunk proc far 
   ; Do the stupid math to know where to draw first pixel
   mov t_color, al ; Store the color temporarily to use al 
   xor ax, ax    ; Zero out ax for multiplication use
   mov ax, 320   ; Hopefully this doesn't overflow, there might something in dx
   mul dh

   mov bx, ax    ; Store this value in bx to reuse ax

   xor ax, ax
   mov ax, 200  
   mul dl       ; Hopefully this doesn't overflow, there might something in dx   
   add bx, ax   ; Now the index to start drawing at is in bx
   xor ax, ax   ; clear

   draw: 
      mov al, t_color     ; Move the color back to draw 
      mov es:[bx], ax ; draw pixel

      ; Check if we need to go to next line 
      mov t_color, al     ; We need to borrow ax for division
      mov ax, cx
      mov di, 8
      div di
      cmp ah, 0
      je new_row
      
      same_row:
         inc bx          ; go to next pixel 
         jmp lloop
      new_row:
         add bx, 320
         jmp lloop


      lloop:
         loop draw
   ret
dchunk endp

.data 
   tmp db 0
; Draws a horizontal line on the screen, starting at AH
; and extending to the right to fill the chunk
; DL : Color
; AH : X (pixel)
; AL : Y (pixel)
.code 
draw_horizontal_line proc far 
   mov cx, 8 ; 8 pixels per chunk
   xor bx, bx
   mov ch, dl ; save color because dx gets reset on mul
   ; xor dx, dx

   mov bx, ax ; save x/y coords

   ; calc y offset
   xor ax, ax ; clear passed coords
   mov ax, 320 ; vertical offset value
   mov dx, bx  ; store coords in dx
   xor dh, dh  ; clear x coord, we only care for y right now
   mul dx      ; calculate y offset and store in ax

   ; dx is now reset
   mov dx, ax ; store calc in dx since it was 0'd 

   ; calc x offset
   xor bl, bl ; clear y coord since its already been accounted for

   ; cant get shift working sooo
   mov bl, bh; we need to shift bh two bits to the right
   xor bh, bh ; otherwise its too large of an offset

   add ax, bx ; add x offset to find true pixel position
   xor dx, dx ; clear y offset - no longer needed
   mov dl, ch ; restore color to original register
   xor ch, ch ; zero out borrowed register

   mov bx, ax ; must store pixel position in bx
   
   ; mov dl, al ; prep for y offset calc
   ; mov bh, ah ; save x offset for later
   ; xor ax, ax ; clear for math

   ; ; calc y offset
   ; mov ax, 320 ; put row length
   ; mul dx ; get pixel offset (Y * row length)

   ; ; prep for x offset
   ; xor dx, dx ; clear used value
   ; mov dx, ax ; save y offset

   ; ; calc x offset
   ; mov ax, 200
   ; mov ch, bl ; save color 
   ; mov bl, bh ; move x offset to bl 
   ; xor bh, bh ; clear bh for mult with bx
   ; mul bx     ; calc x offset
   
   ; ; restore color and reset values
   ; mov bx, ax ; set bx to x offset
   ; add ax, dx ; add y offset to get pixel address
   ; mov dl, ch ; restore saved color
   ; xor ch, ch ; clear borrowed register

   draw_line:
      mov es:[bx], dl
      inc bx
      loop draw_line
   ret

.code
draw_horizontal_line endp
; Draws a horizontal line on the screen, starting at DH
; and extending to the right to fill the chunk
; DL : Color
; AH : X (pixel)
; AL : Y (pixel)
draw_chunk proc far
   mov cx, 8

   draw_c:   
      push cx
      push ax
      call draw_horizontal_line
      pop ax
      inc al
      pop cx
      loop draw_c
   ret 
   ; mov t_c, al ; save color
   ; mov cx, 8  ; chunk size
   ; xor ax, ax ; clear

   ; ; X offset
   ; mov ax, 200
   ; mul dh 
   ; mov bx, ax

   ; draw_c:
   ;    xor ax, ax ; Y offset
   ;    mov ax, 320
   ;    mul dl

   ;    add bx, ax
   ;    mov al, t_c ; restore color
   ;    mov es:[bx], al
   ;    inc dl ; move down one row
   ;    loop draw_c
   ; ret
draw_chunk endp