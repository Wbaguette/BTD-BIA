.data
   t_color db 0

.code
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

   mov al, t_color      ; Move the color back to draw 
   draw: 
      mov es:[bx], ax ; draw pixel
      ; Check if we need to go to next line 

      inc bx          ; go to next pixel

      loop draw
   ret
dchunk endp