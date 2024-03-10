.data
SMILE EQU 0

SPRITE_REGISTRY dw OFFSET SMILE_SPRITE


; FORMAT : First two bytes are WIDTH, HEIGHT of the Sprite, respectively 
SMILE_SPRITE db 8, 8
				 db 00h, 00h, 0Eh, 0Eh, 0Eh, 0Eh, 00h, 00h
		 		 db 00h, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 00h
		 		 db 0Eh, 0Eh, 03h, 0Eh, 0Eh, 03h, 0Eh, 0Eh
		       db 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh
		 		 db 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh
		 		 db 0Eh, 0Eh, 02h, 0Eh, 0Eh, 02h, 0Eh, 0Eh
		 		 db 00h, 0Eh, 0Eh, 02h, 02h, 0Eh, 0Eh, 00h
		 		 db 00h, 00h, 0Eh, 0Eh, 0Eh, 0Eh, 00h, 00h



.code
; XORs the sprite bitmap with whatever was there before, meaning that we can easily restore the background, by XORing again
; Careful: Showing the sprite (calling this function) to the same position twice will REMOVE it
; Register Params Expected:
; 	DH : X Chunk to draw at
; 	DL : Y Chunk to draw at 
; 	CX : Sprite key to draw
ShowSprite PROC far
	; Non-Parameter registers used that need to be saved as they are used here: AX, BX, DI, SI
	push ax 
	push bx
	push di
	push si

	; Point DS to this data segment
	mov ax, @data
	mov ds, ax

	; First step is to find which sprite we want to draw from the key passed in CX
	mov bx, cx ; Copy CX into BX first as we want to move sprite dimensions into CH and CL 
	; Extract the offset of the sprite from registry. Registry list are WORD type, so we need to multiply CX by 2
	shl bx, 1 ; Multiply our given index by 2
	add bx, OFFSET SPRITE_REGISTRY ; Add the offset of the sprite registry to the index to get the offset of the wanted sprite
	mov bx, ds:[bx] ; Move into bx the offset of the sprite 

	mov ch, ds:[bx] ; Move the first byte (width of the sprite) into CH
	mov cl, ds:[bx + 1] ; Move the second byte (height of the sprite) into CL
	mov si, ds:[bx + 1] ; Point SI to beginning of byte data, for some reason its not + 2
	xor bx, bx ; Clear BX, idk why but it literally won't work without this




	; Calculating X pixel to draw at 
	mov ax, dx ; Copy DX into AX, All of DX is needed for calculations
	mov bx, cx ; Copy CX into BX, CL is needed to bit shift 

	mov cl, 3 ; we want to mul 8, which is shl 3. Mul by 8 to get the pixel location we ened
	mov dl, dh ; Since shl could possibly overflow (we would lose bits), lets move our X chunk value to the lower half of DX
	xor dh, dh ; 0 out the top part (effectively a 'movzx' was done)
	shl dx, cl ; shift left by cl = 3

	xor di, di ; Clear DI first, it could be poisoned by a previous ShowSprite call
	mov di, dx ; Point DI to where we need to start

	mov dx, ax ; restore DH and DL from AX to now calculate Y pixel to draw at
	mov cx, bx ; restore CX from BX as it contains our sprite dimensions


	
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

	; Use CX for counting pixels drawn in chunk: CL for height and CH for width
   xor bx, bx
   mov bh, ch ; Store CH (Width of sprite) in BH to remember it 
	next_line:
		push di    ; Remember where we started, TODO: make this mov into a register instead of stack 
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

		; How does this part work?, we remembered where we started earlier by pushing DI, 
		; Now since we gotta go next line, we restore that value (DI), and add 320 to it to easily 
		; 		get to the next line
		pop di  
		add di, 320 

		dec cl ; Finished one whole line
		jnz next_line
	
	; CL = 0 means that we wrote all pixels : we are done. 

	; Restore registers that were modified here to their original state before this function was called 
	pop si
	pop di
	pop bx
	pop ax

	ret
ShowSprite ENDP
