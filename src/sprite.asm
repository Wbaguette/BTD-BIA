.model small
.stack 200h

include macros.inc
include const.inc

.data
sprite db 00h, 00h, 0Eh, 0Eh, 0Eh, 0Eh, 00h, 00h
		 db 00h, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 00h
		 db 0Eh, 0Eh, 03h, 0Eh, 0Eh, 03h, 0Eh, 0Eh
		 db 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh
		 db 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh, 0Eh
		 db 0Eh, 0Eh, 02h, 0Eh, 0Eh, 02h, 0Eh, 0Eh
		 db 00h, 0Eh, 0Eh, 02h, 02h, 0Eh, 0Eh, 00h
		 db 00h, 00h, 0Eh, 0Eh, 0Eh, 0Eh, 00h, 00h


cat db 0fh, 0fh, 0fh, 0fh, 0fh, 0fh, 0fh, 0fh
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
	mov dh, 5 ; WIDTH, X chunk
	mov dl, 5 ; HEIGHT, Y chunk
	; Sprite location in memory
	mov si, OFFSET cat
	; Dimensions of sprite
	mov ch, 8 ; Width
	mov cl, 8 ; Height
	call ShowSprite
		
	exit
main ENDP

; XORs the sprite map, meaning that we can easily restore the background, by XORing again
; Careful: Showing the sprite (calling this function) to the same position twice will REMOVE it
; Register Params Expected:
;  DH : X Chunk to draw at
;  DL : Y Chunk to draw at 
;  SI : OFFSET of the sprite bitmap
;  CH : Width of the sprite 
;  CL : Height of the sprite 
ShowSprite PROC
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

	
	push dx
	; Calculating Y pixel to draw at 
	mov ax, 8*320 ; 320 bytes per line, 8 bytes per chunk     2^11 + 2^9
	mov bx, 0
	add bl, dl
	mul bx
	add di, ax

	pop dx

	; Use cx for counting pixels drawn in chunk,  cl for height and ch for width, we need to store ch somewhere
   xor bx, bx
   mov bh, ch
	draw_y:
		push di
		mov ch, bh
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