.model small
.stack 200h

include macros.inc

.data
  
sprite DB 00h, 00h, 0Eh, 0Eh, 0Eh, 0Eh, 00h, 00h,
          00h, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 00h,
          0Eh, 0Eh, 03h, 0Eh, 0Eh, 03h, 0Eh, 0Eh,
          0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh,
          0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh,
          0Eh, 0Eh, 02h, 0Eh, 0Eh, 02h, 0Eh, 0Eh,
          00h, 0Eh, 0Eh, 02h, 02h, 0Eh, 0Eh, 00h,
          00h, 00h, 0Eh, 0Eh, 0Eh, 0Eh, 00h, 00h,
.code
main PROC
   setup
   mov ax, @data
   mov ds, ax

   ; Let's draw the sprite at chunk DH, DL
   mov dh, 3
   mov dl, 3
   call ShowSprite
   


   
   
   exit
main ENDP

; XORs the sprite map, meaning that we can easily restore the background, by XORing again
; Careful: Showing the sprite (calling this function) to the same position twice will REMOVE it
; 
ShowSprite PROC
   ; DX gets modified so lets push this, chunks are 8
   push dx
   mov ax, 8
   mul dh
   ; Use DI (Destination Index) as the start of where we need to draw
   mov di, ax

   mov ax, 8*320
   xor bx, bx
   add bl, dl
   mul bx
   
   add di, ax
   pop dx

   mov si, OFFSET sprite
   ; Use cx for counting pixels drawn in chunk,  cl for height and ch for width
   mov cl, 8
   draw_y:
      push di
      mov ch, 8
   draw_x:
      mov al, ds:[si]
      xor al, es:[di]
      mov es:[di], al
      inc si
      inc di
      dec ch
      jnz draw_x
      pop di
      add di, 320
      inc bl
      dec cl
      jnz draw_y
   
   ret
ShowSprite ENDP


end main