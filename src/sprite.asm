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


cat DB 055h, 055h, 05Fh, 073h, 07Fh, 06Ah, 05Eh, 061h, 063h, 064h, 066h, 066h, 065h, 069h, 071h, 070h, 06Eh, 073h, 075h, 07Bh, 07Fh, 085h, 088h, 08Ah, 091h, 092h, 094h, 09Eh, 0A5h, 0AAh, 09Fh, 09Dh
DB 058h, 056h, 070h, 09Ch, 0B0h, 0AFh, 07Fh, 062h, 063h, 065h, 065h, 069h, 06Eh, 071h, 073h, 073h, 072h, 07Ah, 07Eh, 080h, 084h, 089h, 08Ah, 08Ch, 091h, 097h, 0AAh, 0C2h, 0C6h, 0B3h, 0A3h, 0A1h
DB 058h, 058h, 076h, 0BDh, 0EAh, 0E4h, 0C6h, 094h, 064h, 068h, 06Dh, 06Eh, 074h, 074h, 074h, 073h, 075h, 07Bh, 07Eh, 084h, 089h, 08Bh, 08Ch, 092h, 09Ah, 0A1h, 0C2h, 0E8h, 0EFh, 0C2h, 0A0h, 0A0h
DB 05Fh, 05Eh, 07Fh, 0DBh, 0EEh, 0EBh, 0E7h, 0CCh, 092h, 06Dh, 072h, 074h, 073h, 073h, 076h, 078h, 07Ch, 081h, 085h, 08Ah, 090h, 091h, 094h, 09Eh, 09Bh, 0A9h, 0D1h, 0E7h, 0F0h, 0D4h, 0A3h, 09Fh
DB 064h, 060h, 087h, 0E3h, 0EAh, 0E7h, 0DFh, 0D8h, 0BDh, 08Dh, 074h, 077h, 078h, 07Ah, 07Dh, 07Eh, 082h, 083h, 086h, 08Ah, 08Fh, 094h, 09Dh, 09Ch, 092h, 0B5h, 0D4h, 0E5h, 0EFh, 0D9h, 0A5h, 0A3h
DB 064h, 062h, 099h, 0E3h, 0E9h, 0E3h, 0D8h, 0CCh, 0C3h, 0B5h, 091h, 07Dh, 080h, 082h, 083h, 083h, 086h, 088h, 08Ah, 08Ah, 092h, 09Bh, 0A5h, 081h, 093h, 0B5h, 0D9h, 0EAh, 0F0h, 0DAh, 0ABh, 0ABh
DB 065h, 065h, 0AAh, 0E5h, 0ECh, 0E1h, 0C2h, 0AFh, 0A8h, 0AFh, 0B0h, 096h, 083h, 085h, 086h, 087h, 08Ah, 08Ch, 08Dh, 092h, 09Ah, 0A7h, 088h, 076h, 093h, 0B4h, 0D6h, 0EDh, 0F2h, 0D9h, 0AEh, 0ABh
DB 06Ah, 06Ah, 093h, 0D2h, 0E6h, 0E2h, 0C6h, 09Dh, 08Ah, 089h, 0ACh, 0B8h, 0AEh, 09Dh, 0A0h, 098h, 09Ch, 0A7h, 0A8h, 0AEh, 0C3h, 0A4h, 069h, 073h, 08Eh, 0B4h, 0D3h, 0EBh, 0EFh, 0D3h, 0B4h, 0B5h
DB 072h, 072h, 08Bh, 0BFh, 0C8h, 0DCh, 0B6h, 094h, 07Dh, 061h, 07Eh, 08Ah, 0CDh, 0DCh, 0DCh, 0E2h, 0E5h, 0E4h, 0E2h, 0E6h, 0BAh, 060h, 053h, 05Eh, 084h, 0B2h, 0CEh, 0DFh, 0E7h, 0CDh, 0BCh, 0BDh
DB 078h, 07Eh, 07Fh, 0ADh, 0C4h, 0B3h, 0B2h, 095h, 07Dh, 069h, 055h, 050h, 070h, 095h, 0AAh, 0C8h, 0CEh, 0C2h, 0A4h, 089h, 055h, 035h, 044h, 056h, 082h, 0C0h, 0C6h, 0D4h, 0DDh, 0BAh, 0BFh, 0C2h
DB 080h, 085h, 089h, 09Dh, 0C7h, 0A0h, 094h, 088h, 067h, 04Ah, 03Dh, 044h, 04Ah, 057h, 078h, 08Fh, 081h, 07Eh, 06Ah, 041h, 02Fh, 036h, 033h, 036h, 057h, 083h, 0AAh, 0DDh, 0ACh, 0CBh, 0C5h, 0C7h
DB 087h, 08Ch, 091h, 096h, 079h, 08Dh, 05Eh, 060h, 04Fh, 049h, 04Ah, 040h, 03Fh, 04Bh, 05Ah, 07Bh, 06Fh, 062h, 056h, 041h, 035h, 036h, 034h, 044h, 04Dh, 058h, 09Dh, 0B7h, 095h, 0C9h, 0CBh, 0CBh
DB 090h, 091h, 096h, 07Dh, 074h, 062h, 04Ah, 03Dh, 040h, 037h, 040h, 043h, 03Ah, 047h, 058h, 062h, 077h, 060h, 052h, 034h, 03Ah, 035h, 039h, 043h, 045h, 04Eh, 076h, 095h, 08Eh, 0BCh, 0D2h, 0D0h
DB 095h, 097h, 0A3h, 086h, 058h, 054h, 040h, 036h, 03Ah, 038h, 041h, 044h, 049h, 053h, 042h, 044h, 05Ah, 040h, 047h, 03Fh, 042h, 044h, 03Eh, 041h, 042h, 039h, 056h, 06Fh, 06Fh, 0D0h, 0D5h, 0D3h
DB 09Bh, 09Eh, 0A6h, 0A8h, 043h, 04Fh, 04Bh, 03Eh, 037h, 040h, 044h, 04Dh, 045h, 043h, 039h, 04Ch, 057h, 03Bh, 03Bh, 04Bh, 04Bh, 051h, 059h, 05Eh, 05Eh, 055h, 054h, 04Eh, 06Bh, 0D9h, 0D4h, 0D7h
DB 09Fh, 0A2h, 0A9h, 0B6h, 05Fh, 077h, 05Ah, 03Eh, 03Bh, 039h, 044h, 044h, 03Eh, 037h, 03Dh, 054h, 05Ch, 03Dh, 039h, 040h, 03Fh, 03Ah, 03Fh, 064h, 085h, 07Ch, 082h, 060h, 091h, 0E2h, 0D6h, 0DCh
DB 0A7h, 0ABh, 0AFh, 0C6h, 0A2h, 086h, 048h, 03Ch, 06Dh, 0AFh, 091h, 083h, 05Eh, 03Ah, 03Fh, 05Fh, 05Dh, 042h, 031h, 041h, 04Eh, 058h, 07Ch, 06Fh, 06Bh, 071h, 090h, 0AEh, 0BDh, 0E1h, 0DBh, 0DCh
DB 0ADh, 0ACh, 0B7h, 0C7h, 09Dh, 07Fh, 053h, 050h, 0B1h, 0CBh, 05Fh, 093h, 0A6h, 057h, 047h, 066h, 05Dh, 047h, 04Eh, 05Dh, 0ABh, 06Ch, 082h, 0C2h, 072h, 04Fh, 071h, 0A9h, 0C8h, 0E2h, 0DCh, 0DCh
DB 0AEh, 0ADh, 0C1h, 0B5h, 081h, 084h, 064h, 059h, 08Ch, 0CDh, 08Eh, 0BAh, 0A5h, 066h, 05Eh, 070h, 073h, 058h, 058h, 050h, 0C3h, 092h, 089h, 0C4h, 06Ch, 069h, 079h, 094h, 0A5h, 0E3h, 0DDh, 0DCh
DB 0AFh, 0B4h, 0CAh, 0ACh, 065h, 085h, 05Ah, 054h, 05Bh, 099h, 0BFh, 0B2h, 075h, 059h, 063h, 06Ch, 070h, 059h, 04Ch, 047h, 0A0h, 0C5h, 0BEh, 084h, 05Dh, 067h, 07Ah, 08Ch, 086h, 0DFh, 0DFh, 0DCh
DB 0B9h, 0BCh, 0D0h, 0A5h, 061h, 087h, 058h, 04Ch, 04Bh, 052h, 065h, 067h, 05Ah, 051h, 06Dh, 076h, 077h, 05Ch, 04Ah, 062h, 06Bh, 068h, 056h, 046h, 043h, 047h, 077h, 07Dh, 084h, 0E6h, 0E1h, 0DEh
DB 0BDh, 0BEh, 0D1h, 0ACh, 06Eh, 093h, 065h, 052h, 052h, 054h, 054h, 04Ch, 045h, 05Fh, 071h, 07Dh, 082h, 06Fh, 059h, 04Eh, 058h, 054h, 04Bh, 046h, 042h, 04Ah, 081h, 08Bh, 085h, 0E0h, 0E2h, 0DFh
DB 0BFh, 0C5h, 0D6h, 0B9h, 079h, 088h, 073h, 05Bh, 049h, 050h, 050h, 04Bh, 062h, 076h, 052h, 05Ch, 05Dh, 05Dh, 070h, 063h, 057h, 052h, 04Dh, 049h, 04Ah, 05Eh, 098h, 077h, 074h, 0D9h, 0E3h, 0E4h
DB 0C0h, 0C7h, 0D4h, 0CBh, 077h, 060h, 066h, 060h, 053h, 063h, 05Dh, 063h, 08Bh, 070h, 03Ah, 04Fh, 042h, 037h, 076h, 080h, 058h, 04Bh, 04Fh, 041h, 03Ch, 056h, 081h, 063h, 068h, 0D1h, 0E5h, 0E4h
DB 0C6h, 0C8h, 0CCh, 0D5h, 08Dh, 063h, 063h, 062h, 056h, 058h, 056h, 073h, 08Dh, 06Dh, 034h, 033h, 02Ch, 032h, 07Bh, 077h, 05Ah, 049h, 048h, 040h, 04Bh, 056h, 059h, 048h, 078h, 0D5h, 0E5h, 0E2h
DB 0C7h, 0C9h, 0CCh, 0D9h, 0AEh, 071h, 060h, 059h, 053h, 053h, 05Bh, 067h, 080h, 091h, 066h, 032h, 036h, 06Bh, 081h, 074h, 05Ah, 04Fh, 044h, 03Eh, 047h, 04Bh, 049h, 04Eh, 08Dh, 0D5h, 0E6h, 0E4h
DB 0C8h, 0C8h, 0CAh, 0D2h, 0CFh, 075h, 062h, 05Bh, 05Ah, 059h, 058h, 05Eh, 07Bh, 089h, 081h, 051h, 05Ch, 082h, 07Bh, 06Eh, 054h, 048h, 044h, 04Dh, 04Ah, 039h, 03Eh, 04Ch, 0A2h, 0C6h, 0D9h, 0E6h
DB 0C9h, 0C9h, 0CBh, 0CEh, 0DAh, 0A9h, 060h, 060h, 05Bh, 057h, 050h, 050h, 063h, 06Ch, 05Bh, 047h, 053h, 061h, 060h, 053h, 049h, 040h, 047h, 049h, 050h, 061h, 061h, 06Dh, 0AEh, 0ADh, 0BCh, 0E7h
DB 0C9h, 0CDh, 0D1h, 0D0h, 0D9h, 0CDh, 079h, 054h, 04Eh, 048h, 04Ah, 050h, 050h, 049h, 040h, 04Dh, 058h, 04Ah, 042h, 03Ch, 03Eh, 037h, 039h, 03Fh, 048h, 049h, 061h, 077h, 09Bh, 09Bh, 0B8h, 0DCh
DB 0CDh, 0CFh, 0CFh, 0D4h, 0E0h, 0D7h, 0A4h, 05Fh, 04Dh, 045h, 046h, 051h, 052h, 05Bh, 064h, 061h, 05Fh, 058h, 047h, 03Eh, 037h, 031h, 029h, 029h, 046h, 059h, 057h, 06Bh, 087h, 08Ah, 0B5h, 0D2h
DB 0CEh, 0CEh, 0D1h, 0D5h, 0E2h, 0C7h, 0B4h, 078h, 049h, 046h, 048h, 04Ah, 045h, 054h, 060h, 05Bh, 05Ah, 053h, 03Bh, 029h, 022h, 01Eh, 025h, 035h, 037h, 043h, 04Eh, 066h, 069h, 068h, 0A2h, 0C3h
DB 0CFh, 0CEh, 0D1h, 0DFh, 0E0h, 0B6h, 09Bh, 078h, 044h, 033h, 037h, 039h, 03Bh, 045h, 037h, 032h, 02Fh, 025h, 01Ch, 01Bh, 01Bh, 023h, 02Dh, 033h, 02Bh, 02Ch, 054h, 08Ah, 05Eh, 063h, 098h, 0BDh


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
	mov ch, 32 ; Width
	mov cl, 32 ; Height
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