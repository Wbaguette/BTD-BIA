; Example usage of Sprite module
.model small
.stack 200h

include ../macros.inc
include module.inc
 
.code
main PROC
	setup

	mov dh, 20 ; WIDTH, Draw sprite at X chunk
	mov dl, 20 ; HEIGHT, Draw sprite at Y chunk
	mov cx, CURSOR ; Sprite we want to draw, this maps to an index in the include file 
	call ShowSprite

	mov dh, 39 ; WIDTH, Draw sprite at X chunk
	mov dl, 24 ; HEIGHT, Draw sprite at Y chunk
	mov cx, SMILE2 ; Sprite we want to draw, this maps to an index in the include file 
	call ShowSprite

	mov dh, 0 ; WIDTH, Draw sprite at X chunk
	mov dl, 15 ; HEIGHT, Draw sprite at Y chunk
	mov cx, SMILE ; Sprite we want to draw, this maps to an index in the include file 
	call ShowSprite

	mov dh, 15 ; WIDTH, Draw sprite at X chunk
	mov dl, 15 ; HEIGHT, Draw sprite at Y chunk
	mov cx, SMILE ; Sprite we want to draw, this maps to an index in the include file 
	call ShowSprite

	mov dh, 20 ; WIDTH, Draw sprite at X chunk
	mov dl, 0 ; HEIGHT, Draw sprite at Y chunk
	mov cx, DART_MONKEY_0 ; Sprite we want to draw, this maps to an index in the include file 
	call ShowSprite

	exit
main ENDP

end main