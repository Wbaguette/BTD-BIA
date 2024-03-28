; The include file for sprite drawing implementation
; Author: Jean-Pierre Derbes

.data
; FORMAT : First two bytes are WIDTH, HEIGHT of the Sprite, respectively 

; Directions: Once you have ran the LUA script in Aseprite and have the .txt file, 
;		copy and paste its contents here. Then, add a new entry to the sprite registry.
;		To do this, add OFFSET {SPRITE_NAME} after the previous value in the registry.
;		Then, make an EQU that maps to the index of the entry you just added 
;		The EQU variable name is what should be passed into CX when calling ShowSprite externally.
SPRITE_REGISTRY dw OFFSET BG1_SPRITE, OFFSET BG2_SPRITE, OFFSET BG3_SPRITE, OFFSET BG4_SPRITE, OFFSET BG5_SPRITE, OFFSET BG6_SPRITE, OFFSET BG7_SPRITE, OFFSET BG8_SPRITE
	dw OFFSET BG9_SPRITE, OFFSET BG10_SPRITE, OFFSET BG11_SPRITE, OFFSET BG12_SPRITE, OFFSET BG13_SPRITE, OFFSET BG14_SPRITE, OFFSET BG15_SPRITE, OFFSET BG16_SPRITE
	dw OFFSET BG17_SPRITE, OFFSET BG18_SPRITE, OFFSET BG19_SPRITE, OFFSET BG20_SPRITE, OFFSET BG21_SPRITE, OFFSET BG22_SPRITE, OFFSET BG23_SPRITE, OFFSET BG24_SPRITE
	dw OFFSET BG25_SPRITE, OFFSET BG26_SPRITE, OFFSET BG27_SPRITE, OFFSET BG28_SPRITE, OFFSET BG29_SPRITE, OFFSET BG30_SPRITE, OFFSET BG31_SPRITE, OFFSET BG32_SPRITE
	dw OFFSET BG33_SPRITE, OFFSET BG34_SPRITE, OFFSET BG35_SPRITE, OFFSET BG36_SPRITE, OFFSET BG37_SPRITE, OFFSET BG38_SPRITE, OFFSET BG39_SPRITE, OFFSET BG40_SPRITE
	dw OFFSET BG41_SPRITE, OFFSET BG42_SPRITE, OFFSET BG43_SPRITE, OFFSET BG44_SPRITE, OFFSET BG45_SPRITE, OFFSET BG46_SPRITE, OFFSET BG47_SPRITE, OFFSET BG48_SPRITE
	dw OFFSET BG49_SPRITE, OFFSET BG50_SPRITE
	; BLOONS
	dw OFFSET BLOON_RED_SPRITE, OFFSET BLOON_RED_SPRITE, OFFSET BLOON_RED_SPRITE, OFFSET BLOON_RED_SPRITE, OFFSET BLOON_RED_SPRITE, OFFSET BLOON_RED_SPRITE 
	dw OFFSET BLOON_RED_SPRITE, OFFSET BLOON_RED_SPRITE, OFFSET BLOON_RED_SPRITE, OFFSET BLOON_RED_SPRITE, OFFSET BLOON_RED_SPRITE, OFFSET BLOON_RED_SPRITE
	dw OFFSET BLOON_RED_SPRITE, OFFSET BLOON_RED_SPRITE, OFFSET BLOON_RED_SPRITE, OFFSET BLOON_RED_SPRITE, OFFSET BLOON_RED_SPRITE, OFFSET BLOON_RED_SPRITE
	dw OFFSET BLOON_RED_SPRITE, OFFSET BLOON_RED_SPRITE
	; MONKEYS
	dw OFFSET MONKEY_DART_1_SPRITE, OFFSET MONKEY_DART_1_SPRITE, OFFSET MONKEY_DART_1_SPRITE, OFFSET MONKEY_DART_1_SPRITE, OFFSET MONKEY_DART_1_SPRITE, OFFSET MONKEY_DART_1_SPRITE 
	dw OFFSET MONKEY_DART_1_SPRITE, OFFSET MONKEY_DART_1_SPRITE, OFFSET MONKEY_DART_1_SPRITE, OFFSET MONKEY_DART_1_SPRITE, OFFSET MONKEY_DART_1_SPRITE, OFFSET MONKEY_DART_1_SPRITE
	dw OFFSET MONKEY_DART_1_SPRITE, OFFSET MONKEY_DART_1_SPRITE, OFFSET MONKEY_DART_1_SPRITE, OFFSET MONKEY_DART_1_SPRITE, OFFSET MONKEY_DART_1_SPRITE, OFFSET MONKEY_DART_1_SPRITE
	dw OFFSET MONKEY_DART_1_SPRITE, OFFSET MONKEY_DART_1_SPRITE
	; UX
	dw OFFSET CURSOR_SPRITE, OFFSET CURSOR_INVALID_SPRITE, OFFSET RANGE_SPRITE

; call it in a loop
BG_START EQU 0
BG_END EQU 49

; Bloons
BLOON_RED EQU 50
BLOON_MAX EQU 69

; Monkeys
MONKEY_DART_1 EQU 70
MONKEY_END EQU 89

; UX
CURSOR EQU 90
CURSOR_INVALID EQU 91
RANGE EQU 92

RANGE_SPRITE db 8, 8
             db 08h, 00h, 08h, 00h, 08h, 00h, 08h, 00h
             db 00h, 08h, 00h, 08h, 00h, 08h, 00h, 08h
             db 08h, 00h, 08h, 00h, 08h, 00h, 08h, 00h
             db 00h, 08h, 00h, 08h, 00h, 08h, 00h, 08h
             db 08h, 00h, 08h, 00h, 08h, 00h, 08h, 00h
             db 00h, 08h, 00h, 08h, 00h, 08h, 00h, 08h
             db 08h, 00h, 08h, 00h, 08h, 00h, 08h, 00h
             db 00h, 08h, 00h, 08h, 00h, 08h, 00h, 08h

CURSOR_INVALID_SPRITE db 8, 8
                      db 00h, 04h, 04h, 04h, 04h, 04h, 04h, 00h
                      db 04h, 04h, 00h, 00h, 00h, 00h, 00h, 04h
                      db 04h, 00h, 04h, 00h, 00h, 00h, 00h, 04h
                      db 04h, 00h, 00h, 04h, 00h, 00h, 00h, 04h
                      db 04h, 00h, 00h, 00h, 04h, 00h, 00h, 04h
                      db 04h, 00h, 00h, 00h, 00h, 04h, 00h, 04h
                      db 04h, 00h, 00h, 00h, 00h, 00h, 04h, 04h
                      db 00h, 04h, 04h, 04h, 04h, 04h, 04h, 00h


CURSOR_SPRITE db 8, 8
              db 04h, 04h, 04h, 00h, 00h, 04h, 04h, 04h
              db 04h, 00h, 00h, 00h, 00h, 00h, 00h, 04h
              db 04h, 00h, 00h, 00h, 00h, 00h, 00h, 04h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h
              db 04h, 00h, 00h, 00h, 00h, 00h, 00h, 04h
              db 04h, 00h, 00h, 00h, 00h, 00h, 00h, 04h
              db 04h, 04h, 04h, 00h, 00h, 04h, 04h, 04h
			  
BLOON_RED_SPRITE db 8, 8
             db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h
             db 00h, 00h, 028h, 028h, 028h, 028h, 00h, 00h
             db 00h, 028h, 028h, 028h, 028h, 0fh, 028h, 00h
             db 00h, 028h, 028h, 028h, 028h, 028h, 028h, 00h
             db 00h, 028h, 028h, 028h, 028h, 028h, 028h, 00h
             db 00h, 00h, 028h, 028h, 028h, 028h, 00h, 00h
             db 00h, 00h, 00h, 028h, 028h, 00h, 00h, 00h
             db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h

MONKEY_DART_1_SPRITE db 8, 8
              db 00h, 00h, 00h, 00h, 00h, 0b9h, 00h, 00h
              db 00h, 00h, 00h, 0b9h, 0b9h, 00h, 00h, 00h
              db 00h, 00h, 0b9h, 0b9h, 0b9h, 0b9h, 00h, 00h
              db 0b9h, 0b9h, 0b9h, 0b9h, 0b9h, 0b9h, 0b9h, 0b9h
              db 06h, 0b9h, 0b9h, 0b9h, 0b9h, 0b9h, 0b9h, 06h
              db 00h, 06h, 010h, 06h, 06h, 010h, 06h, 00h
              db 00h, 00h, 06h, 06h, 06h, 06h, 00h, 00h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h

BG1_SPRITE db 32, 40
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 08h, 08h, 015h, 015h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 08h, 015h, 015h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h
           db 03h, 03h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h
           db 03h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 08h, 015h, 015h
           db 035h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 035h, 03h, 03h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 08h, 08h, 015h, 015h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 08h, 08h, 08h, 08h, 08h
           db 03h, 03h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 03h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 03h, 03h, 03h, 03h, 03h, 035h, 035h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 035h, 035h, 03h, 035h, 03h, 03h, 03h, 03h, 03h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 03h, 035h, 03h, 03h

BG10_SPRITE db 32, 40
            db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 08h, 08h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 08h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 03h, 08h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 03h, 08h, 015h, 015h, 08h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 03h, 08h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 015h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 03h, 03h, 03h, 03h, 08h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 03h, 03h, 03h, 03h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 08h, 08h, 08h, 08h, 08h, 03h, 03h, 03h, 03h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 08h, 08h, 08h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 03h, 03h, 03h, 03h, 035h, 03h, 03h, 03h, 03h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 03h, 035h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 03h
            db 03h, 03h, 03h, 035h, 035h, 03h, 03h, 035h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 035h, 035h, 03h, 035h, 03h, 035h, 03h, 035h, 03h, 03h, 035h, 03h, 03h, 03h, 03h, 03h

BG11_SPRITE db 32, 40
            db 035h, 03h, 03h, 035h, 03h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 035h, 03h, 03h, 03h, 03h, 035h, 03h, 035h, 03h, 03h, 035h, 035h, 035h, 03h, 035h, 035h, 035h, 03h
            db 035h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 03h, 035h, 03h, 035h, 035h, 035h, 03h, 035h, 035h, 035h, 035h, 03h, 03h, 035h, 03h
            db 035h, 03h, 03h, 035h, 03h, 035h, 03h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 03h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h
            db 035h, 035h, 03h, 03h, 035h, 035h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 03h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 035h, 035h, 03h, 03h, 035h
            db 035h, 035h, 035h, 03h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 03h, 035h, 035h, 03h, 03h, 03h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 04eh, 035h, 04eh, 04eh, 035h, 04eh, 035h, 04eh, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 04eh, 04eh
            db 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 04eh, 035h, 04eh, 04eh, 035h, 04eh, 04eh, 035h, 04eh, 035h, 04eh, 035h, 035h, 035h, 035h, 04eh, 04eh, 04eh, 04eh
            db 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 04eh, 04eh, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 035h, 04eh, 035h, 035h, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 035h, 035h, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 035h, 04eh, 035h, 04eh, 04eh, 035h, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh

BG12_SPRITE db 32, 40
            db 035h, 035h, 03h, 035h, 035h, 035h, 035h, 03h, 035h, 035h, 035h, 035h, 03h, 035h, 03h, 035h, 03h, 03h, 035h, 03h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
            db 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 035h, 035h
            db 035h, 035h, 03h, 03h, 035h, 035h, 035h, 03h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 035h, 03h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 04eh, 04eh, 035h, 035h, 04eh, 04eh, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 04eh, 035h, 04eh, 035h, 035h, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 04eh, 035h, 035h, 035h, 035h, 035h
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h
            db 04eh, 04eh, 035h, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 04eh, 035h, 035h, 035h
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 035h, 04eh, 035h, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 035h
            db 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 035h, 04eh, 035h, 04eh, 04eh, 035h, 04eh, 035h, 035h, 035h, 035h, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh
            db 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 035h, 04eh, 035h, 035h, 035h, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 04eh, 035h, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh

BG13_SPRITE db 32, 40
            db 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 03h, 03h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 03h, 03h, 03h, 03h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 03h, 035h, 03h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 03h, 035h, 03h, 03h, 03h, 035h, 035h, 03h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 03h, 03h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 03h, 035h, 035h, 03h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 03h, 03h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 03h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 08h, 08h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 08h, 015h, 015h, 015h, 015h, 08h, 08h, 08h, 015h, 015h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 015h, 015h, 015h, 015h, 08h, 035h, 08h, 015h, 015h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 015h, 015h, 015h, 015h, 08h, 035h, 08h, 015h, 015h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 015h, 015h, 015h, 015h, 08h, 035h, 08h, 015h, 015h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 015h, 015h, 015h, 015h, 08h, 08h, 08h, 08h, 08h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 08h, 08h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 015h, 015h, 015h, 015h, 08h, 08h, 08h, 015h, 015h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 015h, 015h, 015h, 015h, 08h, 035h, 035h, 08h, 015h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 015h, 015h, 015h, 015h, 08h, 035h, 035h, 08h, 015h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 015h, 015h, 015h, 015h, 08h, 035h, 035h, 08h, 015h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 08h, 015h, 015h, 015h, 015h, 08h, 08h, 08h, 08h, 015h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 08h, 08h, 08h, 08h, 08h, 08h, 08h, 015h, 015h, 08h, 08h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 035h, 04eh, 035h, 035h, 04eh, 04eh
            db 035h, 04eh, 035h, 04eh, 035h, 04eh, 035h, 035h, 04eh, 04eh, 035h, 04eh, 035h, 04eh, 035h, 035h, 035h, 04eh, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 035h, 04eh, 04eh, 035h
            db 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 04eh, 035h, 035h, 035h, 04eh, 035h, 035h, 04eh, 04eh, 04eh, 035h
            db 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 04eh, 04eh, 04eh, 035h, 035h, 035h, 04eh, 04eh, 035h
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 035h, 035h, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 035h, 035h
            db 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 035h, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh

BG14_SPRITE db 32, 40
            db 03h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 03h, 035h, 035h, 035h, 03h, 035h, 035h, 035h, 03h, 035h, 035h, 035h, 03h, 035h, 035h, 03h, 03h, 035h, 035h, 035h, 03h, 03h, 03h
            db 035h, 03h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 035h, 03h, 03h, 03h, 035h, 03h, 035h, 03h, 035h, 03h, 035h, 03h, 03h, 035h, 03h, 035h, 03h, 03h, 03h, 03h
            db 035h, 035h, 03h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 03h, 035h, 035h, 035h, 03h, 03h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 035h, 03h, 03h, 03h
            db 03h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 03h, 035h, 03h, 03h, 035h, 035h, 035h, 035h, 03h, 03h, 03h, 035h, 035h, 035h, 035h, 03h, 03h, 03h, 03h, 03h
            db 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 03h, 03h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 08h, 08h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 08h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 08h, 08h, 08h
            db 015h, 08h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 08h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 015h, 015h, 08h
            db 015h, 015h, 08h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 015h, 08h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 08h, 08h, 08h
            db 015h, 015h, 08h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 08h, 015h, 015h, 08h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 015h, 08h, 08h, 015h, 015h, 015h, 015h, 08h, 08h, 015h, 015h, 015h, 015h, 08h, 035h, 08h, 015h, 015h, 015h, 015h, 015h, 08h, 035h, 035h, 035h, 035h, 035h, 08h, 015h, 015h, 015h, 08h
            db 08h, 08h, 035h, 08h, 08h, 015h, 015h, 08h, 035h, 08h, 015h, 015h, 015h, 08h, 035h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 08h, 015h, 015h, 08h
            db 08h, 08h, 035h, 035h, 08h, 015h, 015h, 08h, 035h, 08h, 015h, 015h, 015h, 08h, 035h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 015h, 015h, 08h
            db 015h, 08h, 08h, 035h, 08h, 015h, 015h, 08h, 035h, 08h, 015h, 015h, 015h, 08h, 035h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 015h, 015h, 08h
            db 015h, 015h, 08h, 035h, 08h, 015h, 015h, 08h, 035h, 08h, 015h, 015h, 015h, 08h, 035h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 015h, 015h, 08h
            db 015h, 015h, 015h, 08h, 08h, 015h, 015h, 08h, 035h, 08h, 015h, 015h, 015h, 08h, 035h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 015h, 015h, 08h
            db 015h, 015h, 08h, 035h, 08h, 015h, 015h, 08h, 035h, 08h, 015h, 015h, 015h, 08h, 035h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 08h, 035h, 035h, 035h, 035h, 035h, 08h, 015h, 015h, 08h
            db 015h, 015h, 08h, 035h, 08h, 015h, 015h, 08h, 08h, 08h, 08h, 015h, 015h, 08h, 035h, 035h, 08h, 015h, 015h, 08h, 08h, 08h, 08h, 035h, 035h, 035h, 035h, 035h, 08h, 015h, 015h, 08h
            db 08h, 08h, 035h, 035h, 035h, 08h, 08h, 08h, 08h, 08h, 08h, 015h, 015h, 015h, 08h, 035h, 035h, 08h, 08h, 08h, 08h, 08h, 035h, 035h, 035h, 035h, 035h, 08h, 015h, 015h, 015h, 015h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 04eh, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 035h
            db 035h, 035h, 04eh, 035h, 04eh, 04eh, 035h, 04eh, 04eh, 035h, 04eh, 035h, 035h, 035h, 035h, 04eh, 04eh, 035h, 04eh, 035h, 035h, 04eh, 04eh, 035h, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 035h, 035h, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 035h
            db 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 035h
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 035h, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 035h, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 035h, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 035h, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh

BG15_SPRITE db 32, 40
            db 03h, 03h, 03h, 03h, 03h, 03h, 035h, 03h, 03h, 035h, 035h, 035h, 035h, 03h, 03h, 035h, 035h, 03h, 03h, 03h, 035h, 035h, 03h, 03h, 035h, 035h, 035h, 03h, 035h, 03h, 03h, 03h
            db 03h, 03h, 03h, 03h, 03h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 03h, 03h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 03h
            db 03h, 03h, 03h, 03h, 03h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 03h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 03h, 03h
            db 03h, 03h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 03h, 03h, 035h
            db 035h, 03h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 015h, 08h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 08h, 015h, 08h, 08h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 015h, 015h, 015h, 08h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 015h, 015h, 015h, 08h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 08h, 015h, 015h, 015h, 08h, 08h, 08h, 08h, 08h, 08h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 08h, 015h, 015h, 015h, 015h, 08h, 035h, 035h, 035h, 035h, 035h
            db 035h, 08h, 08h, 015h, 015h, 08h, 08h, 08h, 08h, 015h, 015h, 08h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 08h, 08h, 015h, 015h, 015h, 08h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 035h, 08h, 015h, 015h, 015h, 08h, 08h, 035h, 035h, 035h, 035h
            db 035h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 08h, 035h, 08h, 08h, 015h, 015h, 015h, 08h, 035h, 035h, 035h, 035h
            db 035h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 08h, 035h, 035h, 035h, 035h
            db 035h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 035h, 035h, 035h, 08h, 015h, 015h, 015h, 015h, 08h, 035h, 035h, 08h
            db 035h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 08h, 035h, 035h, 035h, 08h, 08h, 015h, 015h, 015h, 08h, 035h, 035h, 08h
            db 08h, 035h, 08h, 015h, 015h, 08h, 08h, 08h, 08h, 015h, 015h, 08h, 035h, 035h, 035h, 035h, 035h, 08h, 08h, 08h, 08h, 035h, 035h, 08h, 08h, 015h, 015h, 015h, 015h, 08h, 08h, 08h
            db 08h, 08h, 015h, 015h, 015h, 015h, 08h, 08h, 015h, 015h, 015h, 015h, 08h, 035h, 035h, 035h, 08h, 015h, 015h, 015h, 015h, 08h, 08h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 08h, 08h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh
            db 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 04eh
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 04eh, 035h, 04eh
            db 035h, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 04eh
            db 04eh, 035h, 035h, 035h, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 04eh, 035h, 04eh, 04eh, 035h
            db 04eh, 04eh, 035h, 035h, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 04eh, 035h, 04eh, 035h, 035h, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 035h, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 035h, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh

BG16_SPRITE db 32, 40
            db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 03h, 03h, 03h, 035h, 03h, 03h, 03h
            db 03h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 035h, 035h, 035h, 03h, 03h, 035h, 035h, 035h, 03h, 03h, 035h, 035h, 03h, 035h, 03h, 03h, 035h, 035h, 035h, 03h, 035h, 035h, 03h
            db 035h, 035h, 03h, 035h, 03h, 03h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 03h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 08h, 08h, 08h, 08h, 08h, 08h, 08h, 035h, 08h, 08h, 08h, 08h, 08h, 08h, 08h, 035h, 035h, 035h, 08h, 08h, 08h, 08h, 08h, 08h, 035h, 035h, 08h, 015h, 015h, 015h, 08h, 08h
            db 08h, 015h, 08h, 08h, 08h, 08h, 08h, 035h, 08h, 015h, 08h, 08h, 08h, 08h, 08h, 035h, 035h, 08h, 015h, 015h, 08h, 08h, 08h, 08h, 08h, 035h, 08h, 08h, 015h, 015h, 08h, 08h
            db 08h, 015h, 08h, 08h, 035h, 08h, 08h, 035h, 08h, 015h, 08h, 08h, 035h, 08h, 08h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 08h, 015h, 08h, 035h, 035h, 08h, 015h, 015h, 08h, 035h
            db 08h, 015h, 015h, 08h, 08h, 035h, 08h, 035h, 08h, 015h, 015h, 08h, 08h, 035h, 08h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 08h, 015h, 015h, 08h, 035h, 08h, 015h, 015h, 08h, 035h
            db 08h, 08h, 015h, 015h, 015h, 08h, 08h, 035h, 08h, 08h, 015h, 015h, 015h, 08h, 08h, 035h, 08h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 08h, 035h, 08h, 015h, 015h, 08h, 035h
            db 08h, 035h, 08h, 08h, 015h, 015h, 08h, 08h, 08h, 035h, 08h, 08h, 015h, 015h, 08h, 08h, 08h, 015h, 015h, 08h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 015h, 015h, 08h, 035h
            db 08h, 035h, 035h, 08h, 08h, 015h, 015h, 08h, 08h, 035h, 035h, 08h, 08h, 015h, 015h, 08h, 08h, 015h, 015h, 08h, 08h, 035h, 035h, 035h, 08h, 08h, 035h, 08h, 015h, 015h, 08h, 035h
            db 015h, 08h, 08h, 08h, 08h, 015h, 08h, 08h, 015h, 08h, 08h, 08h, 08h, 015h, 08h, 08h, 035h, 08h, 015h, 015h, 08h, 08h, 035h, 08h, 08h, 035h, 035h, 08h, 015h, 015h, 08h, 08h
            db 08h, 08h, 08h, 08h, 08h, 08h, 08h, 08h, 08h, 08h, 08h, 08h, 08h, 08h, 08h, 035h, 035h, 035h, 08h, 08h, 08h, 08h, 08h, 08h, 035h, 035h, 08h, 015h, 015h, 015h, 015h, 08h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 04eh, 035h, 035h, 04eh, 035h, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h
            db 035h, 04eh, 035h, 035h, 04eh, 035h, 04eh, 035h, 04eh, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 04eh, 04eh, 035h, 035h, 035h, 035h
            db 04eh, 04eh, 035h, 04eh, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 04eh, 04eh, 04eh, 035h, 035h, 035h, 04eh, 035h, 04eh, 04eh, 035h, 035h, 035h, 04eh, 035h, 04eh
            db 04eh, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 035h, 04eh, 04eh, 035h, 04eh, 035h, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 035h, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh

BG17_SPRITE db 32, 40
            db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 03h, 035h, 03h, 03h, 03h, 03h, 035h, 035h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 035h, 035h, 035h, 035h, 03h, 03h
            db 03h, 035h, 035h, 035h, 03h, 03h, 03h, 03h, 035h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 035h, 03h, 03h, 03h, 03h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 03h, 035h, 035h, 035h, 035h, 03h, 03h, 03h, 035h, 035h, 03h, 03h, 035h, 03h, 03h, 035h, 03h, 035h, 035h, 03h, 03h, 03h, 03h, 035h, 035h, 035h, 03h, 035h, 035h, 03h, 03h, 035h
            db 035h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 035h, 035h, 035h, 03h, 03h, 035h, 03h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 03h, 03h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 035h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 015h, 015h, 015h, 015h, 08h, 035h, 035h, 035h, 035h, 035h, 08h, 015h, 015h, 015h, 015h, 08h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 08h, 015h, 015h, 08h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 08h, 015h, 015h, 08h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 035h, 035h, 035h
            db 08h, 08h, 08h, 08h, 08h, 08h, 08h, 08h, 08h, 08h, 035h, 035h, 08h, 015h, 015h, 08h, 08h, 08h, 08h, 08h, 08h, 035h, 035h, 08h, 015h, 015h, 08h, 08h, 015h, 015h, 015h, 015h
            db 08h, 015h, 015h, 08h, 08h, 08h, 08h, 015h, 015h, 08h, 035h, 035h, 08h, 015h, 015h, 08h, 08h, 08h, 015h, 015h, 08h, 08h, 035h, 08h, 015h, 015h, 08h, 035h, 08h, 08h, 015h, 015h
            db 08h, 015h, 015h, 015h, 08h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 08h, 015h, 015h, 08h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 08h, 015h, 015h
            db 08h, 015h, 015h, 015h, 08h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 08h, 015h, 015h, 08h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 08h, 08h, 015h
            db 08h, 015h, 015h, 015h, 08h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 08h, 015h, 015h, 08h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 035h, 08h, 015h
            db 08h, 015h, 015h, 015h, 08h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 08h, 015h, 015h, 08h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 035h, 08h, 015h
            db 08h, 015h, 015h, 015h, 08h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 08h, 08h, 015h, 08h, 035h, 035h, 08h, 015h, 015h, 08h, 035h, 08h, 015h, 015h, 08h, 035h, 035h, 035h, 035h, 08h
            db 08h, 015h, 015h, 015h, 08h, 035h, 08h, 015h, 015h, 08h, 08h, 035h, 08h, 08h, 08h, 08h, 08h, 08h, 015h, 015h, 08h, 035h, 035h, 08h, 015h, 015h, 08h, 08h, 035h, 035h, 035h, 08h
            db 08h, 015h, 015h, 015h, 015h, 08h, 015h, 015h, 015h, 015h, 08h, 035h, 08h, 035h, 08h, 08h, 08h, 08h, 08h, 08h, 035h, 035h, 08h, 015h, 015h, 015h, 015h, 08h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 08h, 08h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 015h, 015h, 08h, 08h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 015h, 015h, 08h, 08h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 08h, 08h, 08h, 08h, 08h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 04eh, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h
            db 04eh, 035h, 04eh, 035h, 04eh, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h
            db 035h, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 04eh, 04eh, 035h, 04eh, 035h, 035h, 035h, 035h
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h, 04eh, 04eh, 035h, 035h, 04eh, 04eh, 035h
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 035h, 035h
            db 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 035h
            db 04eh, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh

BG18_SPRITE db 32, 40
            db 035h, 035h, 035h, 035h, 035h, 035h, 03h, 03h, 035h, 03h, 035h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 03h, 03h, 035h, 03h, 03h, 03h, 03h, 035h, 03h, 03h, 035h
            db 03h, 035h, 035h, 03h, 03h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 03h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 03h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 03h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 015h, 08h, 08h, 015h, 015h, 08h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 08h, 035h, 035h, 08h, 08h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 08h, 08h, 035h, 08h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 015h, 08h, 035h, 08h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 015h, 08h, 08h, 08h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 015h, 015h, 08h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 015h, 015h, 08h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 015h, 08h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 08h, 08h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 08h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 08h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 04eh, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 04eh, 035h, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 04eh, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 04eh, 035h, 04eh, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 04eh
            db 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 04eh, 035h, 04eh, 04eh, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 04eh, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 035h, 035h, 04eh, 04eh, 035h, 035h, 035h, 035h
            db 035h, 04eh, 04eh, 035h, 04eh, 035h, 035h, 035h, 04eh, 035h, 04eh, 035h, 04eh, 035h, 035h, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h, 04eh, 04eh, 04eh, 035h, 035h, 04eh
            db 035h, 04eh, 035h, 035h, 04eh, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 035h, 04eh, 035h, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 035h, 035h, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh
            db 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh

BG19_SPRITE db 32, 40
            db 03h, 03h, 03h, 03h, 03h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 035h, 035h, 03h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 03h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 03h, 03h, 035h, 035h, 03h, 035h, 035h, 03h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 03h, 035h, 035h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 04eh, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 04eh, 035h, 035h, 04eh, 04eh, 035h, 035h, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h
            db 04eh, 04eh, 035h, 035h, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 035h, 035h, 04eh, 04eh, 035h, 035h, 035h, 035h, 04eh, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h
            db 035h, 035h, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 035h, 04eh, 035h, 04eh, 04eh, 035h, 04eh, 04eh, 035h, 035h, 035h, 035h, 04eh, 04eh, 035h, 035h, 04eh, 035h, 04eh, 035h, 04eh, 04eh, 04eh, 04eh
            db 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 035h, 04eh, 04eh, 035h, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 035h, 04eh, 035h, 035h, 035h, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 035h, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 035h, 04eh, 035h, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 035h, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 035h, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh

BG2_SPRITE db 32, 40
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 015h, 015h, 015h, 015h, 015h, 015h, 015h, 08h, 08h, 08h, 08h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 015h, 015h, 015h, 08h, 08h, 08h, 08h, 015h, 015h, 015h, 015h, 08h, 08h, 03h, 03h, 08h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 015h, 015h, 015h, 08h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 015h, 015h, 015h, 08h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 015h, 015h, 015h, 08h, 03h, 03h, 08h, 08h, 015h, 015h, 015h, 08h, 08h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 028h, 028h, 028h, 028h, 028h, 028h
           db 015h, 015h, 015h, 08h, 03h, 08h, 08h, 08h, 08h, 08h, 08h, 08h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 08h, 028h, 028h, 028h, 028h, 028h, 028h
           db 015h, 015h, 015h, 015h, 015h, 015h, 015h, 08h, 08h, 08h, 08h, 08h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h
           db 015h, 015h, 015h, 08h, 03h, 08h, 08h, 08h, 015h, 015h, 015h, 08h, 08h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 08h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h
           db 015h, 015h, 015h, 08h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 08h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h
           db 015h, 015h, 015h, 08h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 08h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h
           db 015h, 015h, 015h, 08h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 08h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h
           db 015h, 015h, 015h, 08h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 08h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h
           db 015h, 015h, 015h, 08h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 035h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 08h, 08h, 015h, 028h, 028h, 028h, 028h, 028h, 028h
           db 015h, 015h, 015h, 08h, 03h, 03h, 035h, 08h, 015h, 015h, 015h, 015h, 015h, 08h, 035h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 028h, 028h, 028h, 028h, 028h, 028h
           db 015h, 015h, 015h, 08h, 03h, 08h, 08h, 08h, 015h, 015h, 015h, 015h, 08h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 035h, 03h, 03h, 08h, 08h, 015h, 028h, 028h, 028h, 028h
           db 08h, 08h, 08h, 08h, 08h, 015h, 015h, 08h, 08h, 08h, 08h, 08h, 03h, 035h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 08h, 08h, 028h, 028h, 028h, 028h
           db 035h, 03h, 03h, 035h, 035h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 035h, 035h, 03h, 035h, 03h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 035h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 035h, 035h, 035h, 03h, 035h, 03h, 035h, 035h, 03h, 03h, 035h, 035h, 03h, 03h, 035h, 035h, 035h, 03h, 035h, 03h, 03h, 03h, 035h, 035h, 03h, 03h, 03h, 03h, 03h

BG20_SPRITE db 32, 40
            db 035h, 035h, 035h, 035h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 03h, 035h, 035h, 035h, 035h, 03h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 035h, 03h, 03h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h
            db 04eh, 035h, 035h, 035h, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 04eh, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 04eh, 04eh, 035h, 035h
            db 04eh, 035h, 035h, 035h, 04eh, 035h, 04eh, 035h, 04eh, 04eh, 035h, 035h, 035h, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 04eh, 035h, 04eh, 035h, 035h, 035h
            db 035h, 035h, 04eh, 035h, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 04eh, 04eh, 035h, 035h, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 035h, 035h, 035h, 035h, 04eh, 035h, 035h, 04eh, 04eh, 04eh, 035h, 035h, 04eh, 04eh, 04eh
            db 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 035h, 035h, 035h, 04eh, 04eh, 035h, 035h, 035h, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh
            db 035h, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 035h, 035h, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh
            db 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh

BG21_SPRITE db 32, 40
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04dh, 04eh, 04eh, 04eh, 04eh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04eh, 04dh, 04dh, 04dh, 04eh, 04eh, 04eh, 04eh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04eh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh

BG22_SPRITE db 32, 40
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04dh, 04dh, 04eh, 04eh, 04dh, 04dh, 04dh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04dh, 04eh, 04eh, 04eh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04eh, 04eh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04eh, 04eh
            db 04dh, 04dh, 04eh, 04eh, 04eh, 04dh, 04dh, 04dh, 04dh, 04eh, 04eh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04eh, 04dh, 04eh, 04eh, 04eh, 04dh, 04dh, 04dh
            db 04eh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04eh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04eh, 04dh, 04eh, 04eh, 04dh, 04dh, 04dh, 04dh, 04eh, 04eh, 04dh, 04eh, 04dh, 04dh, 04eh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh

BG23_SPRITE db 32, 40
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04dh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04dh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04dh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04dh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04dh, 04eh, 04eh, 04eh
            db 04dh, 04dh, 04dh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04dh, 04eh, 04dh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04eh, 04eh, 04eh, 04dh
            db 04dh, 04eh, 04dh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04dh, 04dh, 04dh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04dh, 04dh, 04dh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04dh, 04eh, 04dh, 04eh, 04eh, 04dh, 04eh, 04dh, 04eh, 04eh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04eh, 04eh, 04dh, 04dh, 04dh, 04eh, 04eh, 04eh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04eh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04eh, 04dh, 04dh, 04eh, 04eh, 04eh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04eh, 04eh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04eh, 04eh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh

BG24_SPRITE db 32, 40
            db 04eh, 04eh, 04eh, 035h, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh
            db 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04dh
            db 04dh, 04dh, 04eh, 04dh, 04dh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04dh, 04dh, 04dh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04dh, 04eh, 04dh, 04dh
            db 04dh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04dh, 04eh, 04dh, 04dh, 04eh, 04eh, 04eh, 04eh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04dh, 04dh, 04eh, 04eh, 04dh, 04eh, 04eh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04eh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04eh, 04eh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh

BG25_SPRITE db 32, 40
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04dh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04dh, 04eh, 04dh, 04eh
            db 04dh, 04dh, 04dh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04dh, 04dh, 04eh, 04eh, 04dh, 04eh, 04dh, 04dh, 04eh, 04dh
            db 04dh, 04dh, 04eh, 04dh, 04eh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04eh, 04dh, 04dh, 04dh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh
            db 04eh, 04eh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04eh, 04eh, 04dh, 04dh, 04eh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04dh, 0d5h
            db 04eh, 04dh, 04eh, 04eh, 04dh, 04dh, 04eh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04eh, 04dh, 04eh, 04eh, 04eh, 04dh, 04eh, 04dh, 04dh, 04dh, 04eh, 04eh, 04eh, 0d5h, 0d5h, 0d5h
            db 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04eh, 04dh, 04eh, 04eh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h

BG26_SPRITE db 32, 40
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04eh, 04dh, 04dh, 04eh, 04eh, 04eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04eh, 04eh, 04dh, 04eh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04eh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h

BG27_SPRITE db 32, 40
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04eh, 04eh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h

BG28_SPRITE db 32, 40
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 0d5h, 0d5h, 0d5h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04dh, 04eh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04dh, 04eh, 04eh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04eh, 04eh, 04eh, 04dh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04dh, 04dh, 04eh, 04eh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04eh, 04dh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04dh, 04dh, 04eh, 04eh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04dh, 04dh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04dh, 04dh, 04eh, 04dh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04eh, 04eh, 04eh, 04dh, 04eh, 04dh, 04dh, 04eh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04eh, 04eh, 04eh, 04eh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh

BG29_SPRITE db 32, 40
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 035h, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04dh, 04dh, 04dh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh
            db 04dh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04dh, 04dh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04eh, 04eh
            db 04eh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04eh, 04dh, 04eh, 04dh, 04eh, 04eh, 04dh, 04eh, 04eh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04eh, 04eh, 04eh, 04eh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04eh
            db 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04eh, 04dh, 04dh, 04dh, 04eh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh

BG3_SPRITE db 32, 40
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 028h, 028h, 03h, 03h, 03h, 03h, 03h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h, 08h, 08h, 08h, 08h, 08h, 08h, 03h
           db 028h, 028h, 08h, 03h, 03h, 03h, 08h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 08h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 08h, 08h, 08h, 015h, 015h, 015h, 08h
           db 0fh, 0fh, 028h, 08h, 03h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 0fh, 0fh, 028h, 028h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 08h
           db 0fh, 0fh, 028h, 08h, 08h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 0fh, 0fh, 028h, 028h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h
           db 028h, 028h, 028h, 015h, 08h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 08h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h
           db 028h, 028h, 028h, 015h, 08h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 08h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h
           db 028h, 028h, 028h, 015h, 08h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 08h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h
           db 028h, 028h, 028h, 08h, 08h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 08h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h
           db 028h, 028h, 015h, 08h, 08h, 08h, 015h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h
           db 028h, 028h, 08h, 08h, 03h, 08h, 015h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 08h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h
           db 015h, 08h, 08h, 03h, 035h, 035h, 08h, 08h, 015h, 028h, 028h, 028h, 028h, 015h, 08h, 08h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h
           db 08h, 08h, 03h, 035h, 03h, 035h, 035h, 08h, 08h, 028h, 028h, 028h, 028h, 08h, 08h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 015h, 08h, 08h, 015h, 015h, 015h, 015h, 015h
           db 03h, 035h, 03h, 03h, 035h, 035h, 035h, 035h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 03h, 03h, 03h, 03h, 03h, 035h, 035h, 035h, 035h, 035h, 03h, 03h
           db 03h, 035h, 03h, 03h, 03h, 035h, 035h, 035h, 035h, 03h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 035h, 03h, 03h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 03h, 03h, 03h

BG30_SPRITE db 32, 40
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04dh, 04eh, 04eh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04dh, 04dh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04dh
            db 04eh, 04eh, 04eh, 04dh, 04eh, 04dh, 04dh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh
            db 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04dh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04dh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04dh
            db 04dh, 04eh, 04eh, 04dh, 04dh, 04eh, 04dh, 04eh, 04eh, 04dh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04dh, 04eh, 04eh, 04dh, 04dh, 04eh, 04dh, 04eh, 04eh, 04eh, 04eh, 04eh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04eh, 04eh, 04eh, 04eh, 04dh, 04dh, 04eh, 04eh, 04dh, 04dh, 04dh, 04eh, 04eh, 04dh, 04eh, 04eh, 04dh, 04dh, 04dh, 04dh, 04eh, 04eh, 04eh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh
            db 04eh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04eh, 04dh, 04dh, 04dh, 04eh, 04eh, 04dh, 04dh, 04dh, 04dh, 04eh, 04eh, 04dh, 04dh, 04dh, 04dh, 04eh, 04eh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04eh, 04dh
            db 04eh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04eh, 04eh, 04dh, 04dh, 04dh, 04eh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh
            db 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04eh

BG31_SPRITE db 32, 40
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h

BG32_SPRITE db 32, 40
            db 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04eh, 04dh, 04eh, 04eh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h

BG33_SPRITE db 32, 40
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04eh, 04dh, 04eh, 04eh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04dh, 04dh, 04dh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h

BG34_SPRITE db 32, 40
            db 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04eh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 0d5h, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 01eh, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 01eh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 01eh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 01eh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 01eh, 01eh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 01eh, 01eh, 01eh, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 0d5h

BG35_SPRITE db 32, 40
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 04dh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh
            db 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh
            db 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 01eh
            db 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 01eh, 01eh, 0d5h
            db 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 01eh, 01eh, 0d5h
            db 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h
            db 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h
            db 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h
            db 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 01eh, 01eh, 0d5h
            db 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 01eh
            db 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 01eh, 01eh, 01eh, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 01eh, 01eh, 01eh

BG36_SPRITE db 32, 40
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 0d5h, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 0d5h
            db 0d5h, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 0d5h, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 0d5h
            db 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 0d5h, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 0d5h
            db 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 0d5h
            db 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh

BG37_SPRITE db 32, 40
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 01eh, 01eh, 01eh, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h
            db 01eh, 01eh, 01eh, 01eh, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 01eh, 01eh, 01eh, 01eh, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 0d5h, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 01eh, 01eh, 01eh, 01eh, 0d5h, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 01eh, 01eh, 01eh, 01eh, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 01eh, 01eh, 01eh, 01eh, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 01eh, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h

BG38_SPRITE db 32, 40
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04dh, 04dh, 04dh, 04dh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04dh, 04dh, 04dh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04dh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h

BG39_SPRITE db 32, 40
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 0d5h, 0d5h, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04dh, 04dh, 04dh, 04dh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h

BG4_SPRITE db 32, 40
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 015h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 08h, 08h, 08h, 015h, 015h, 015h, 015h, 015h, 08h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 08h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 08h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h
           db 03h, 03h, 03h, 03h, 08h, 08h, 08h, 08h, 08h, 08h, 03h, 08h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 08h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h
           db 03h, 03h, 03h, 08h, 08h, 015h, 08h, 08h, 08h, 08h, 08h, 08h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 08h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h
           db 03h, 03h, 03h, 08h, 015h, 015h, 08h, 03h, 03h, 03h, 08h, 08h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h
           db 08h, 03h, 03h, 08h, 015h, 015h, 015h, 08h, 08h, 03h, 03h, 08h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h
           db 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 08h, 03h, 08h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h
           db 08h, 03h, 03h, 08h, 08h, 015h, 015h, 015h, 015h, 015h, 08h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h
           db 08h, 03h, 03h, 03h, 08h, 08h, 015h, 015h, 015h, 015h, 015h, 08h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h
           db 08h, 03h, 03h, 08h, 03h, 03h, 08h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h
           db 08h, 03h, 03h, 08h, 08h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h
           db 08h, 03h, 03h, 08h, 08h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h
           db 08h, 03h, 03h, 08h, 015h, 08h, 08h, 08h, 08h, 08h, 015h, 08h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 08h, 015h, 015h, 015h, 015h, 015h, 08h
           db 015h, 08h, 035h, 08h, 08h, 08h, 08h, 08h, 08h, 08h, 08h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 015h
           db 03h, 035h, 035h, 035h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 03h, 03h, 03h, 035h, 03h, 03h, 03h, 03h, 03h, 035h, 03h, 03h, 03h, 03h, 035h, 035h, 03h, 03h
           db 03h, 03h, 03h, 035h, 035h, 03h, 035h, 035h, 03h, 03h, 03h, 035h, 035h, 03h, 035h, 03h, 03h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 03h, 035h, 03h, 035h, 03h, 03h, 03h, 03h

BG40_SPRITE db 32, 40
            db 04eh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04eh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 0d5h, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh, 04dh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 04dh, 04dh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h

BG41_SPRITE db 32, 40
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 075h, 075h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 0d5h, 0d5h, 0d5h, 0d5h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 0d5h, 0d5h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 0d5h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h

BG42_SPRITE db 32, 40
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h

BG43_SPRITE db 32, 40
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 0d5h, 0d5h, 0d5h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h

BG44_SPRITE db 32, 40
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 075h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 075h, 075h, 075h, 075h, 075h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h

BG45_SPRITE db 32, 40
            db 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h

BG46_SPRITE db 32, 40
            db 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 0d5h, 0d5h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h

BG47_SPRITE db 32, 40
            db 01eh, 01eh, 01eh, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 0d5h, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 01eh, 01eh, 01eh, 01eh, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h

BG48_SPRITE db 32, 40
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 075h, 075h, 075h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 0d5h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h

BG49_SPRITE db 32, 40
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h

BG5_SPRITE db 32, 40
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 015h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 08h, 08h, 08h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 08h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 08h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 08h, 08h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 08h, 015h, 08h, 03h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 08h, 08h, 08h, 015h, 015h, 015h, 015h
           db 03h, 03h, 03h, 03h, 03h, 08h, 08h, 08h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 08h, 03h, 08h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 08h
           db 03h, 03h, 03h, 03h, 03h, 08h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 0fh, 0fh, 028h, 028h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h
           db 03h, 03h, 03h, 03h, 03h, 08h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 0fh, 0fh, 028h, 028h, 03h, 03h, 08h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h
           db 03h, 03h, 03h, 03h, 03h, 08h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 08h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 08h, 08h, 015h, 015h, 015h
           db 03h, 03h, 03h, 03h, 03h, 08h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 08h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 08h, 08h, 08h, 015h, 015h, 015h
           db 03h, 03h, 03h, 03h, 03h, 08h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 08h, 08h, 08h, 08h, 015h, 015h, 015h
           db 03h, 03h, 03h, 03h, 03h, 08h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h
           db 03h, 03h, 03h, 03h, 03h, 08h, 08h, 015h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 015h, 08h, 03h, 03h, 03h, 08h, 08h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h
           db 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 08h, 08h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 08h, 03h, 03h, 035h, 08h, 015h, 015h
           db 08h, 08h, 035h, 03h, 03h, 03h, 03h, 08h, 08h, 015h, 028h, 028h, 028h, 028h, 015h, 08h, 08h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 08h, 03h, 03h, 03h, 035h, 08h, 015h
           db 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 08h, 08h, 028h, 028h, 028h, 028h, 08h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 08h, 08h, 08h, 035h, 03h, 03h, 03h, 08h, 015h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 03h, 035h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 035h, 035h, 035h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 035h, 03h, 03h, 035h, 035h, 03h, 035h, 03h, 03h, 03h, 035h, 035h, 03h, 03h, 03h, 03h, 03h, 035h, 035h, 035h, 03h, 03h, 03h, 03h, 03h, 03h

BG50_SPRITE db 32, 40
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h, 0d5h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h
            db 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h, 075h

BG6_SPRITE db 32, 40
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 015h, 08h, 08h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 08h, 08h, 08h, 08h, 08h, 08h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h, 08h, 08h, 08h, 08h, 08h, 03h
           db 08h, 03h, 03h, 08h, 08h, 08h, 03h, 03h, 08h, 08h, 015h, 08h, 08h, 08h, 015h, 015h, 08h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 08h, 08h, 015h, 015h, 08h, 08h
           db 08h, 03h, 03h, 08h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 08h, 015h, 015h, 015h, 015h, 08h
           db 08h, 03h, 03h, 08h, 03h, 03h, 08h, 08h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 08h, 08h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 08h, 015h, 015h, 015h, 015h, 08h
           db 08h, 03h, 08h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 08h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 08h, 08h, 015h, 08h, 08h, 03h
           db 08h, 08h, 08h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 08h, 03h, 03h
           db 015h, 08h, 08h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 03h
           db 015h, 08h, 08h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 03h
           db 015h, 08h, 03h, 03h, 03h, 03h, 08h, 08h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 08h, 08h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 03h
           db 015h, 08h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 03h
           db 08h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 08h, 08h, 08h, 08h, 08h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 08h, 03h, 03h, 03h, 03h, 03h
           db 08h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 08h, 08h, 08h, 08h, 08h, 08h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h
           db 03h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 03h, 03h, 035h, 035h, 03h, 035h, 03h, 03h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 035h, 03h, 035h, 03h, 03h, 035h, 035h, 03h, 03h, 035h, 035h, 035h, 03h, 035h, 035h, 03h, 035h, 03h, 035h, 03h, 03h, 035h, 03h, 03h, 03h, 03h

BG7_SPRITE db 32, 40
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 08h, 08h, 08h, 08h, 08h, 08h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 08h, 08h, 08h, 015h, 015h, 015h, 015h, 015h, 08h, 08h, 08h, 08h, 08h, 015h, 015h, 08h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 08h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 08h, 08h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 08h, 015h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 08h, 015h, 015h, 015h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h, 08h, 08h, 015h, 015h, 015h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h, 08h, 015h, 015h, 015h, 015h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 015h, 08h, 08h, 015h, 015h, 015h, 015h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 015h, 08h, 08h, 015h, 015h, 015h, 015h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 08h, 015h, 015h, 015h, 015h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 08h, 08h, 015h, 015h, 015h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 08h, 035h, 03h, 03h, 08h, 015h, 015h, 015h
           db 03h, 03h, 03h, 03h, 03h, 03h, 08h, 08h, 08h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 08h, 08h, 08h, 015h, 015h, 015h, 08h, 08h, 035h, 035h, 03h, 03h, 03h, 08h, 015h, 015h
           db 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 08h, 08h, 08h, 08h, 08h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 035h, 08h, 08h
           db 03h, 03h, 03h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 03h, 03h, 035h, 03h, 03h, 03h, 03h, 035h, 03h, 03h, 03h
           db 03h, 03h, 03h, 035h, 03h, 035h, 03h, 03h, 03h, 03h, 035h, 03h, 03h, 035h, 03h, 03h, 03h, 035h, 035h, 03h, 03h, 03h, 03h, 03h, 035h, 035h, 035h, 035h, 035h, 03h, 03h, 03h

BG8_SPRITE db 32, 40
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 08h, 08h, 08h, 08h, 08h, 08h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 08h, 015h, 015h, 08h, 08h, 08h, 015h, 015h, 08h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 08h, 08h, 08h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 08h, 08h, 08h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
           db 08h, 08h, 08h, 08h, 08h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 08h, 08h, 08h, 08h, 08h, 08h, 08h, 03h, 03h, 08h, 015h, 015h
           db 08h, 08h, 08h, 015h, 015h, 08h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 08h, 08h, 015h, 08h, 08h, 08h, 015h, 015h, 08h, 03h, 03h, 08h, 015h
           db 08h, 03h, 03h, 08h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 08h, 03h, 08h, 015h
           db 08h, 03h, 03h, 08h, 015h, 015h, 08h, 08h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 08h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 08h, 08h, 08h, 015h
           db 08h, 03h, 03h, 08h, 015h, 015h, 015h, 08h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 08h, 08h, 015h
           db 015h, 015h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 08h, 08h, 015h
           db 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h
           db 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 08h, 015h
           db 08h, 03h, 03h, 03h, 03h, 03h, 08h, 08h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 08h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 08h, 08h, 08h, 015h
           db 08h, 03h, 03h, 03h, 03h, 03h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 03h, 03h, 08h, 03h, 08h, 015h
           db 015h, 08h, 08h, 08h, 08h, 08h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 08h, 03h, 035h, 035h, 08h, 015h, 015h, 015h, 08h, 08h, 08h, 08h, 08h, 08h, 03h, 08h, 015h
           db 08h, 08h, 08h, 08h, 08h, 08h, 035h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 015h, 015h, 08h, 035h, 035h, 03h, 08h, 08h, 08h, 08h, 08h, 08h, 08h, 08h, 035h, 08h, 015h, 015h
           db 035h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 035h, 035h, 03h, 03h, 03h, 03h, 035h, 03h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 03h, 03h
           db 03h, 035h, 035h, 03h, 03h, 035h, 03h, 035h, 035h, 035h, 03h, 03h, 035h, 03h, 035h, 035h, 035h, 035h, 035h, 03h, 03h, 03h, 03h, 035h, 035h, 03h, 03h, 03h, 035h, 035h, 03h, 03h

BG9_SPRITE db 32, 40
               db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
               db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
               db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
               db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
               db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
               db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
               db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
               db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
               db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
               db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
               db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
               db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
               db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
               db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
               db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
               db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
               db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
               db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
               db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
               db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
               db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
               db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
               db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
               db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
               db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
               db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h
               db 015h, 015h, 015h, 08h, 08h, 08h, 08h, 08h, 08h, 08h, 03h, 03h, 03h, 03h, 03h, 08h, 08h, 08h, 08h, 08h, 08h, 03h, 08h, 08h, 03h, 03h, 03h, 03h, 08h, 08h, 08h, 08h
               db 015h, 015h, 015h, 08h, 08h, 08h, 08h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 08h, 08h, 015h, 08h, 08h, 08h, 08h, 08h, 08h, 08h, 03h, 03h, 03h, 08h, 08h, 015h, 08h, 08h
               db 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 08h, 015h, 015h, 08h, 03h, 03h, 03h, 08h, 08h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 08h, 03h
               db 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 08h, 08h, 03h, 03h, 08h, 08h, 03h, 08h, 08h, 015h, 015h, 015h, 08h, 03h
               db 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 08h, 03h, 08h, 08h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h
               db 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 08h, 015h, 015h, 015h, 015h, 015h, 08h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 015h, 015h
               db 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 03h, 08h, 08h, 015h, 015h, 015h, 015h, 015h, 08h, 08h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h
               db 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 03h, 03h, 08h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h
               db 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 08h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 08h, 03h, 08h, 08h, 015h, 015h, 015h, 08h, 03h
               db 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 08h, 03h, 03h, 03h, 03h, 08h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 08h, 03h
               db 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 015h, 015h, 015h, 08h, 03h, 03h, 08h, 015h, 08h, 08h, 08h, 08h, 08h, 015h, 08h, 08h, 03h, 03h, 03h, 08h, 015h, 015h, 015h, 08h
               db 015h, 015h, 015h, 015h, 08h, 08h, 015h, 015h, 015h, 015h, 015h, 015h, 08h, 03h, 08h, 08h, 08h, 08h, 08h, 08h, 08h, 08h, 08h, 03h, 03h, 03h, 03h, 03h, 08h, 08h, 08h, 08h
               db 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 03h, 03h, 03h, 03h, 03h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 035h, 03h, 035h, 03h
               db 035h, 035h, 03h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 035h, 035h, 035h, 03h, 035h, 035h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 03h, 035h, 035h, 035h, 035h, 03h, 03h

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
	; push ds     FIXME: Might need to push this actually as we will be using a different Data segment in main code

	
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
	add bx, 2 ; 2 bytes after beginning of sprite offset is pixel data
	mov si, bx ; Point SI to beginning of sprite pixel byte data


	; At this point we have SI pointing to the beginning of the sprite pixel data
	; 		and the sprite's dimensions in CX : CH has width, CL has height
	;		We now calculate where in VGA memory to draw the sprite using DH and DL 


	; Calculating X pixel to draw at 
	mov ax, dx ; Copy DX into AX, All of DX is needed for calculations
	mov bx, cx ; Copy CX into BX, CL is needed to bit shift 

	mov cl, 3 ; we want to mul 8, which is shl 3. Mul by 8 to get the pixel location we ened
	mov dl, dh ; Since shl could possibly overflow (we would lose bits), lets move our X chunk value to the lower half of DX
	xor dh, dh ; 0 out the top part (effectively a 'movzx' was done)
	shl dx, cl ; shift left by cl = 3

	; xor di, di ; Clear DI first, it could be poisoned by a previous ShowSprite call
	mov di, dx ; Point DI to where we need to start

	mov dx, ax ; restore DH and DL from AX to now calculate Y pixel to draw at
	mov cx, bx ; restore CX from BX as it contains our sprite dimensions


	
	; Calculating Y pixel to draw at 
	mov ax, cx ; Copy CX into AX as CL is needed to bit shift, we still need CX later to count pixels drawn

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
	
	mov cx, ax ; Restore CX from AX



	; At this point DI points to where we need to draw the sprite in VGA memory, 
	;		and SI is pointing to the beginning of the sprite pixel data. 
	;		CX is storing the dimensions of the sprite, all that is left to do is draw the sprite



	; Use CX for counting pixels drawn in chunk: CL for height and CH for width
   xor bx, bx
   mov bh, ch ; Store CH (Width of sprite) in BH to remember it 
	next_line:
		mov dx, di ; Remember where we started by copying in DX 
		mov ch, bh ; Recover CH 
	continue_line:
		mov al, ds:[si] ; Gotta move this value because we do not want to poison the actual sprite pixel byte value when XORing
		; XOR what we have the screen currently: es:[di], and what we want to draw 
		xor al, es:[di]
		mov es:[di], al ; Write the result of the XOR to VGA memory

		inc si ; Scan forward on sprite pixels
		inc di ; Go forward in VGA memory 
		dec ch ; We wrote one pixel, so we have CH-1 more left on the line

		jnz continue_line ; If CH != 0, continue drawing the line

		; If we get to this part it means that CH = 0, meaning that we drew all pixels on one line
		; 		and we need to go to the next line

		; How does this part work?, we remembered where we started earlier by copying DI into DX
		; Now since we got to go to the next line, we restore that value (DI), and add 320 to it to easily 
		; 		get to the next line
		mov di, dx
		add di, 320 

		dec cl ; Finished one whole line
		jnz next_line
	
	; CL = 0 means that we wrote all pixels : we are done. 

	; Restore registers that were modified here to their original state before this function was called 
	; push ds     FIXME: remember to pop this if we end up needing to push DS
	pop si
	pop di
	pop bx
	pop ax

	ret
ShowSprite ENDP
