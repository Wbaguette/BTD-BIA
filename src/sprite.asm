.model small
.stack 200h

include macros.inc
include const.inc
include sprite/module.inc

.data
sprite db 00h, 00h, 0Eh, 0Eh, 0Eh, 0Eh, 00h, 00h
		 db 00h, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 00h
		 db 0Eh, 0Eh, 03h, 0Eh, 0Eh, 03h, 0Eh, 0Eh
		 db 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh
		 db 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh
		 db 0Eh, 0Eh, 02h, 0Eh, 0Eh, 02h, 0Eh, 0Eh
		 db 00h, 0Eh, 0Eh, 02h, 02h, 0Eh, 0Eh, 00h
		 db 00h, 00h, 0Eh, 0Eh, 0Eh, 0Eh, 00h, 00h

smile db 0fh, 0fh, 0fh, 0fh, 0fh, 0fh, 0fh, 0fh
		db 0fh, 0fh, 02ch, 02ch, 02ch, 02ch, 0fh, 0fh
		db 0fh, 02ch, 02ch, 02ch, 02ch, 02ch, 02ch, 0fh
		db 0fh, 02ch, 010h, 02ch, 02ch, 010h, 02ch, 0fh
		db 0fh, 02ch, 02ch, 02ch, 02ch, 02ch, 02ch, 0fh
		db 0fh, 02ch, 03h, 02ch, 02ch, 03h, 02ch, 0fh
		db 0fh, 02ch, 02ch, 03h, 03h, 02ch, 02ch, 0fh
		db 0fh, 0fh, 02ch, 02ch, 02ch, 02ch, 0fh, 0fh


		 
.code
main PROC
	setup
	mov ax, @data
	mov ds, ax

	; Let's draw the sprite at chunk DH, DL
	mov dh, 23 ; WIDTH, X chunk
	mov dl, 23 ; HEIGHT, Y chunk
	; Sprite location in memory
	mov si, OFFSET sprite
	; Dimensions of sprite
	mov ch, 8 ; Width
	mov cl, 8 ; Height
	call ShowSprite


	; Let's draw the sprite at chunk DH, DL
	mov dh, 10 ; WIDTH, X chunk
	mov dl, 10 ; HEIGHT, Y chunk
	; Sprite location in memory
	mov si, OFFSET smile
	; Dimensions of sprite
	mov ch, 8 ; Width
	mov cl, 8 ; Height
	call ShowSprite
		
	exit
main ENDP

; XORs the sprite bitmap with whatever was there before, meaning that we can easily restore the background, by XORing again
; Careful: Showing the sprite (calling this function) to the same position twice will REMOVE it
; Register Params Expected:
;  DH : X Chunk to draw at
;  DL : Y Chunk to draw at 
;  SI : OFFSET of the sprite bitmap
;  CH : Width of the sprite 
;  CL : Height of the sprite 
ShowSprite PROC
	; Non-Parameter registers used that need to be saved as they are used here: AL, BX, DI
	push ax ; even though AL is used, its better to push 16 bit stuff to stack, so push whole ax
	push bx
	push di

	; Calculating X pixel to draw at 
	push dx ; Save DH and DL because we need them later, DX gets modified 
	push cx ; CL is used to shift so we need to push it

	mov cl, 3 ; we want to mul 8, which is shl 3. Mul by 8 to get the pixel location we ened
	mov dl, dh ; Since shl could possibly overflow (we would lose bits), lets move our X chunk value to the lower half of DX
	xor dh, dh ; 0 out the top part (effectively a 'movzx' was done)
	shl dx, cl ; shift left by cl = 3
	mov di, dx ; Point DI to where we need to start

	pop cx ; restore CX as it contains our sprite dimensions
	pop dx ; Restore DH and DL to now calculate Y pixel to draw at

	
	; Calculating Y pixel to draw at 
	push dx ; Save DH and DL
	push cx ; Push CL cuz we gotta use it for SHL

	; Two bit shifts are needed to multiply by 2560, so lets store our original Y chunk value
   mov bl, dl ; BL temporarily stores DL for us to use in the second bit shift
	mov cl, 11 ; First number of bits to shift by   2^11 
	xor dh, dh ; Clear DH
	shl dx, cl 

	mov cl, 9 ; Second bit shift, 2^9       (2^11 + 2^9) = 2560 = 8 * 320
	xor bh, bh ; Clear the top half of BH to prepare for SHL on BL 
	shl bx, cl

	add dx, bx ; Add the two bit shifts together
	add di, dx ; Add the result of all this math to the DI, and now DI has where we need to draw at
	
	pop cx ; restore registers used in computation
	pop dx

	; Use CX for counting pixels drawn in chunk,  
	; CL for height and CH for width
   xor bx, bx
   mov bh, ch ; Store CH (Width of sprite) in BH to remember it 
	next_line:
		push di    ; Remember where we started
		mov ch, bh ; Recover CH 
	continue_line:
		mov al, ds:[si] ; Gotta move this value because we do not want to poison the actual sprite pixel byte value when XORing
		; XOR what we have the screen currently: es:[di], and what we want to draw 
		xor al, es:[di]
		mov es:[di], al ; Write the result of the XOR to VGA memory

		inc si ; Scan forward on sprite pixels
		inc di ; Scan forward on VGA location
		dec ch ; We wrote one pixel, so we have CH-1 more left on the line

		jnz continue_line ; If CH != 0, continue drawing the line

		; If we get to this part it means that CH = 0, meaning that we drew all pixels on one line
		; 		and we need to go to the next line

		; How this part worky?, we remembered where we started earlier by pushing DI, 
		; Now since we gotta go next line, we restore that value (DI), and add 320 to it to easily 
		; 		get to the next line
		pop di  
		add di, 320 

		dec cl ; Finished one whole line
		jnz next_line
	
	; CL = 0 means that we wrote all pixels : we are done. 

	; Restore registers that were modified here to their original state before this function was called 
	pop di
	pop bx
	pop ax

	ret
ShowSprite ENDP

end main