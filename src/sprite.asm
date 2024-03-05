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
   ; Sprite location
   mov si, OFFSET sprite
   ; Dimensions of sprite
   mov ch, 8
   mov cl, 8
   call ShowSprite
      
   exit
main ENDP

; XORs the sprite map, meaning that we can easily restore the background, by XORing again
; Careful: Showing the sprite (calling this function) to the same position twice will REMOVE it
ShowSprite PROC
   push dx ; DX gets modified during mul so lets push this
   ; Firstly, lets find the exact coordinates to start at
   ; We are given chunks in dh, dl so we need to multiply by 8 (shl 3)
   push cl ; cl is used to shift so we need to push it
   mov cl, 3 ; we want to mul 8, which is shl 3
   shl dh, cl
   pop cl ; restore cl
   movzx di, dh


   ; Use DI (Destination Index) as the start of where we need to draw
   ; mov di, ax

   mov ax, 8*320
   xor bx, bx
   add bl, dl
   mul bx
   
   add di, ax
   pop dx

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