; Example usage of Sprite module, this will draw a smiley face 🙂
.model small
.stack 200h

include ../macros.inc
include module.inc

.data
sprite db 00h, 00h, 0Eh, 0Eh, 0Eh, 0Eh, 00h, 00h
		 db 00h, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 00h
		 db 0Eh, 0Eh, 03h, 0Eh, 0Eh, 03h, 0Eh, 0Eh
		 db 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh
		 db 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh
		 db 0Eh, 0Eh, 02h, 0Eh, 0Eh, 02h, 0Eh, 0Eh
		 db 00h, 0Eh, 0Eh, 02h, 02h, 0Eh, 0Eh, 00h
		 db 00h, 00h, 0Eh, 0Eh, 0Eh, 0Eh, 00h, 00h
 
.code
main PROC
	setup
	mov ax, @data
	mov ds, ax

	; Let's draw the sprite at chunk DH, DL
	mov dh, 15 ; WIDTH, X chunk
	mov dl, 15 ; HEIGHT, Y chunk
	; Sprite location in memory

   ; TODO: Rather than doing this, I want to have all sprites defined in module.inc, and
   ;       we just pass a key in some register, and then the ShowSprite takes care of CH and Cl
   ;       this will make it so user only needs to pass location, and the key of the sprite to draw
	mov si, OFFSET sprite
	; Dimensions of sprite
	mov ch, 8 ; Width
	mov cl, 8 ; Height
	call ShowSprite
		
	exit
main ENDP

end main