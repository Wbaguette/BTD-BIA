; TODO: We are assuming good input right now, we likely will need a 
; validator method to formalize these chunk coordinates instead of direct
; X/Y pass in. Otherwise it may get messy

; Multiply Y by 320 to determine which row an element should draw at
; X is simply an offset from 0-319

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

   ; dx is now reset by mul
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
draw_chunk endp
