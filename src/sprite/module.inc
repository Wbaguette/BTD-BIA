; The include file for sprite drawing implementation
; Author: Jean-Pierre Derbes

.data?
; FORMAT : First two bytes are WIDTH, HEIGHT of the Sprite, respectively 

; Directions: Once you have ran the LUA script in Aseprite and have the .txt file, 
;		copy and paste its contents here. Then, add a new entry to the sprite registry.
;		To do this, add OFFSET {SPRITE_NAME} after the previous value in the registry.
;		Then, make an EQU that maps to the index of the entry you just added 
;		The EQU variable name is what should be passed into CX when calling ShowSprite externally.
SPRITE_REGISTRY dw 0000h, 0000h, 0000h, 0000h, 0000h, 0000h, 0000h, 0000h, 0000h, 0000h
                dw 0000h, 0000h, 0000h, 0000h, 0000h, 0000h, 0000h, 0000h, 0000h, 0000h
                dw 0000h, 0000h, 0000h, 0000h, 0000h, 0000h, 0000h, 0000h, 0000h, 0000h
                dw 0000h, 0000h, 0000h, 0000h, 0000h, 0000h, 0000h, 0000h, 0000h, 0000h
                dw 0000h, 0000h, 0000h, 0000h, 0000h, 0000h, 0000h, 0000h, 0000h, 0000h

	; BLOONS
	dw OFFSET BLOON_RED_SPRITE, OFFSET BLOON_BLUE_SPRITE, OFFSET BLOON_GREEN_SPRITE, OFFSET BLOON_YELLOW_SPRITE, OFFSET BLOON_PINK_SPRITE, OFFSET BLOON_RED_SPRITE 
	dw OFFSET BLOON_RED_SPRITE, OFFSET BLOON_RED_SPRITE, OFFSET BLOON_RED_SPRITE, OFFSET BLOON_RED_SPRITE, OFFSET BLOON_RED_SPRITE, OFFSET BLOON_RED_SPRITE
	dw OFFSET BLOON_RED_SPRITE, OFFSET BLOON_RED_SPRITE, OFFSET BLOON_RED_SPRITE, OFFSET BLOON_RED_SPRITE, OFFSET BLOON_RED_SPRITE, OFFSET BLOON_RED_SPRITE
	dw OFFSET BLOON_RED_SPRITE, OFFSET BLOON_RED_SPRITE
	; MONKEYS
	dw OFFSET MONKEY_DART_1_SPRITE, OFFSET MONKEY_DART_1_SPRITE, OFFSET MONKEY_DART_1_SPRITE, OFFSET MONKEY_DART_1_SPRITE, OFFSET MONKEY_DART_1_SPRITE, OFFSET MONKEY_DART_1_SPRITE 
	dw OFFSET MONKEY_DART_1_SPRITE, OFFSET MONKEY_DART_1_SPRITE, OFFSET MONKEY_DART_1_SPRITE, OFFSET MONKEY_DART_1_SPRITE, OFFSET MONKEY_DART_1_SPRITE, OFFSET MONKEY_DART_1_SPRITE
	dw OFFSET MONKEY_DART_1_SPRITE, OFFSET MONKEY_DART_1_SPRITE, OFFSET MONKEY_DART_1_SPRITE, OFFSET MONKEY_DART_1_SPRITE, OFFSET MONKEY_DART_1_SPRITE, OFFSET MONKEY_DART_1_SPRITE
	dw OFFSET MONKEY_DART_1_SPRITE, OFFSET MONKEY_DART_1_SPRITE
	; UX
	dw OFFSET CURSOR_SPRITE, OFFSET CURSOR_INVALID_SPRITE, OFFSET RANGE_SPRITE, HEART_SPRITE, 0000h, 0000h, 0000h, 0000h, 0000h, 0000h
	dw OFFSET INST0_SPRITE, OFFSET INST1_SPRITE, OFFSET INST2_SPRITE, OFFSET INST3_SPRITE, OFFSET INST4_SPRITE, OFFSET INST5_SPRITE
   ; STAGE
   dw OFFSET WATER0_SPRITE, OFFSET WATER1_SPRITE, OFFSET WATER2_SPRITE, OFFSET WATER3_SPRITE, OFFSET WATER4_SPRITE
   dw OFFSET DEEP_SPRITE, OFFSET DEEP_SMALL_SPRITE
; Bloons
BLOON_RED EQU 50
BLOON_BLUE EQU 51
BLOON_GREEN EQU 52
BLOON_YELLOW EQU 53
BLOON_PINK EQU 54
BLOON_MAX EQU 69

; Monkeys
MONKEY_DART_1 EQU 70
MONKEY_END EQU 89

; UX
CURSOR EQU 90
CURSOR_INVALID EQU 91
RANGE EQU 92
HEART EQU 93

HUD_INST_0 EQU 100
HUD_INST_1 EQU 101
HUD_INST_2 EQU 102
HUD_INST_3 EQU 103
HUD_INST_4 EQU 104
HUD_INST_5 EQU 105
STAGE_WATER_0 EQU 106
STAGE_WATER_1 EQU 107
STAGE_WATER_2 EQU 108
STAGE_WATER_3 EQU 109
STAGE_WATER_4 EQU 110
STAGE_DEEP_WATER EQU 111
STAGE_DEEP_WATER_SMALL EQU 112

HEART_SPRITE db 7, 7
            db 00h, 0fh, 0fh, 00h, 0fh, 0fh, 00h
            db 0fh, 0fh, 0fh, 0fh, 0fh, 0fh, 0fh
            db 0fh, 0fh, 0fh, 0fh, 0fh, 0ch, 0fh
            db 0fh, 0fh, 0fh, 0fh, 0fh, 0fh, 0fh
            db 00h, 0fh, 0fh, 0fh, 0fh, 0fh, 00h
            db 00h, 00h, 0fh, 0fh, 0fh, 00h, 00h
            db 00h, 00h, 00h, 0fh, 00h, 00h, 00h

; Old 8x8 heart sprite, these looked weird         
; HEART_SPRITE db 8, 8
;              db 00h, 0fh, 0fh, 00h, 00h, 0fh, 0fh, 00h
;              db 0fh, 0fh, 0fh, 0fh, 0fh, 0fh, 0fh, 0fh
;              db 0fh, 0fh, 0fh, 0fh, 0fh, 0ch, 0fh, 0fh
;              db 0fh, 0fh, 0fh, 0fh, 0fh, 0fh, 0ch, 0fh
;              db 0fh, 0fh, 0fh, 0fh, 0fh, 0fh, 0fh, 0fh
;              db 00h, 0fh, 0fh, 0fh, 0fh, 0fh, 0fh, 00h
;              db 00h, 00h, 0fh, 0fh, 0fh, 0fh, 00h, 00h
;              db 00h, 00h, 00h, 0fh, 0fh, 00h, 00h, 00h

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
             db 00h, 00h, 020h, 020h, 020h, 020h, 00h, 00h
             db 00h, 020h, 020h, 020h, 020h, 0fh, 020h, 00h
             db 00h, 020h, 020h, 020h, 020h, 020h, 020h, 00h
             db 00h, 020h, 020h, 020h, 020h, 020h, 020h, 00h
             db 00h, 00h, 020h, 020h, 020h, 020h, 00h, 00h
             db 00h, 00h, 00h, 020h, 020h, 00h, 00h, 00h
             db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h

BLOON_BLUE_SPRITE db 8, 8
             db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h
             db 00h, 00h, 028h, 028h, 028h, 028h, 00h, 00h
             db 00h, 028h, 028h, 028h, 028h, 0fh, 028h, 00h
             db 00h, 028h, 028h, 028h, 028h, 028h, 028h, 00h
             db 00h, 028h, 028h, 028h, 028h, 028h, 028h, 00h
             db 00h, 00h, 028h, 028h, 028h, 028h, 00h, 00h
             db 00h, 00h, 00h, 028h, 028h, 00h, 00h, 00h
             db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h

BLOON_GREEN_SPRITE db 8, 8
                   db 00h, 00h, 0ah, 0ah, 0ah, 0ah, 00h, 00h
                   db 00h, 0ah, 0ah, 0ah, 0ah, 0ah, 0ah, 00h
                   db 00h, 0ah, 0ah, 0ah, 0ah, 07h, 0ah, 00h
                   db 00h, 0ah, 0ah, 0ah, 0ah, 0ah, 0ah, 00h
                   db 00h, 0ah, 0ah, 0ah, 0ah, 0ah, 0ah, 00h
                   db 00h, 00h, 0ah, 0ah, 0ah, 0ah, 00h, 00h
                   db 00h, 00h, 0ah, 0ah, 0ah, 0ah, 00h, 00h
                   db 00h, 00h, 00h, 0ah, 0ah, 00h, 00h, 00h

BLOON_YELLOW_SPRITE db 8, 8
                    db 00h, 00h, 024h, 024h, 024h, 024h, 00h, 00h
                    db 00h, 024h, 024h, 024h, 024h, 024h, 024h, 00h
                    db 00h, 024h, 024h, 024h, 024h, 07h, 024h, 00h
                    db 00h, 024h, 024h, 024h, 024h, 024h, 024h, 00h
                    db 00h, 024h, 024h, 024h, 024h, 024h, 024h, 00h
                    db 00h, 00h, 024h, 024h, 024h, 024h, 00h, 00h
                    db 00h, 00h, 024h, 024h, 024h, 024h, 00h, 00h
                    db 00h, 00h, 00h, 024h, 024h, 00h, 00h, 00h
BLOON_PINK_SPRITE db 8, 8
                  db 00h, 00h, 036h, 036h, 036h, 036h, 00h, 00h
                  db 00h, 036h, 036h, 036h, 036h, 036h, 036h, 00h
                  db 00h, 036h, 036h, 036h, 036h, 07h, 036h, 00h
                  db 00h, 036h, 036h, 036h, 036h, 036h, 036h, 00h
                  db 00h, 036h, 036h, 036h, 036h, 036h, 036h, 00h
                  db 00h, 00h, 036h, 036h, 036h, 036h, 00h, 00h
                  db 00h, 00h, 036h, 036h, 036h, 036h, 00h, 00h
                  db 00h, 00h, 00h, 036h, 036h, 00h, 00h, 00h
MONKEY_DART_1_SPRITE db 8, 8
              db 00h, 00h, 00h, 00h, 00h, 0bbh, 00h, 00h
              db 00h, 00h, 00h, 0bbh, 0bbh, 00h, 00h, 00h
              db 00h, 00h, 0bbh, 0bbh, 0bbh, 0bbh, 00h, 00h
              db 0bbh, 0bbh, 0bbh, 0bbh, 0bbh, 0bbh, 0bbh, 0bbh
              db 04h, 0bbh, 0bbh, 0bbh, 0bbh, 0bbh, 0bbh, 04h
              db 00h, 04h, 012h, 04h, 04h, 012h, 04h, 00h
              db 00h, 00h, 04h, 04h, 04h, 04h, 00h, 00h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h

INST0_SPRITE db 32, 40
             db 0b8h, 0bbh, 073h, 0d3h, 070h, 070h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 0eh
             db 0bbh, 073h, 073h, 070h, 070h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h
             db 073h, 070h, 070h, 04h, 04h, 04h, 04h, 04h, 04h, 01dh, 01dh, 01dh, 04h, 04h, 04h, 04h, 04h, 01dh, 01dh, 01dh, 04h, 04h, 04h, 01dh, 01dh, 01dh, 01dh, 01dh, 04h, 04h, 04h, 04h
             db 073h, 073h, 070h, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 01dh, 01dh, 04h, 04h, 04h, 04h, 04h, 01dh, 01dh, 04h, 04h, 04h, 01dh, 04h, 04h, 04h, 04h, 04h, 01dh, 04h, 04h, 04h
             db 0b8h, 0b8h, 0d3h, 070h, 070h, 08bh, 04h, 04h, 04h, 04h, 01dh, 01dh, 04h, 04h, 04h, 04h, 04h, 01dh, 01dh, 04h, 04h, 01dh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 01dh, 04h, 04h
             db 0bbh, 0bbh, 0bbh, 0d3h, 073h, 070h, 073h, 04h, 04h, 04h, 01dh, 04h, 01dh, 04h, 04h, 04h, 01dh, 04h, 01dh, 04h, 04h, 01dh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 01dh, 04h, 04h
             db 073h, 0bbh, 0bbh, 0bbh, 073h, 0d3h, 073h, 073h, 070h, 070h, 01dh, 04h, 01dh, 04h, 04h, 04h, 01dh, 04h, 01dh, 04h, 04h, 01dh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 01dh, 073h, 070h
             db 070h, 073h, 0bbh, 0bbh, 073h, 0bbh, 0bbh, 0bbh, 0bbh, 073h, 01dh, 0d3h, 01dh, 073h, 070h, 01dh, 070h, 070h, 01dh, 070h, 070h, 01dh, 070h, 070h, 0d3h, 070h, 073h, 0d3h, 073h, 01dh, 0bbh, 0b8h
             db 071h, 08bh, 070h, 073h, 0bbh, 0bbh, 0bbh, 073h, 0bbh, 0bbh, 01dh, 0bbh, 0b8h, 01dh, 0bbh, 01dh, 0bbh, 0bbh, 01dh, 0bbh, 0b8h, 01dh, 073h, 073h, 0bbh, 0bbh, 0b8h, 0bbh, 0bbh, 01dh, 0bbh, 0b8h
             db 070h, 070h, 070h, 070h, 08bh, 070h, 0d3h, 0bbh, 0bbh, 0bbh, 01dh, 0bbh, 0bbh, 01dh, 0bbh, 01dh, 0b8h, 0bbh, 01dh, 0bbh, 0bbh, 01dh, 0bbh, 0bbh, 073h, 0d3h, 073h, 070h, 08bh, 01dh, 08bh, 073h
             db 073h, 0d3h, 0bbh, 070h, 070h, 04h, 070h, 08bh, 08bh, 070h, 01dh, 073h, 073h, 01dh, 01dh, 0d3h, 0d3h, 070h, 01dh, 070h, 070h, 073h, 01dh, 070h, 08bh, 04h, 08bh, 070h, 01dh, 073h, 073h, 073h
             db 0d3h, 0d3h, 070h, 0d3h, 0bbh, 073h, 070h, 070h, 070h, 01dh, 01dh, 01dh, 08bh, 08bh, 01dh, 04h, 08bh, 01dh, 01dh, 01dh, 070h, 070h, 070h, 01dh, 01dh, 01dh, 01dh, 01dh, 0d3h, 08bh, 070h, 0d3h
             db 070h, 070h, 070h, 0d3h, 0d3h, 0d3h, 0d3h, 0bbh, 0b8h, 073h, 073h, 073h, 073h, 0d3h, 073h, 0b8h, 0b8h, 0b8h, 0bbh, 0bbh, 0b8h, 073h, 073h, 0d3h, 073h, 070h, 070h, 070h, 0d3h, 070h, 04h, 08bh
             db 070h, 070h, 070h, 070h, 073h, 070h, 073h, 073h, 070h, 0d3h, 0d3h, 073h, 0d3h, 0b8h, 070h, 070h, 070h, 070h, 08bh, 08bh, 070h, 0d3h, 070h, 070h, 0d3h, 04h, 08bh, 08bh, 04h, 04h, 04h, 04h
             db 070h, 08bh, 08bh, 071h, 070h, 073h, 073h, 070h, 070h, 070h, 070h, 070h, 070h, 070h, 073h, 0d3h, 070h, 070h, 070h, 073h, 070h, 070h, 08bh, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h
             db 04h, 08bh, 04h, 08bh, 04h, 04h, 08bh, 08bh, 08bh, 08bh, 070h, 070h, 070h, 0d3h, 0d3h, 070h, 073h, 070h, 070h, 08bh, 08bh, 08bh, 04h, 08bh, 04h, 08bh, 04h, 04h, 04h, 04h, 04h, 04h
             db 08bh, 04h, 04h, 08bh, 08bh, 04h, 08bh, 08bh, 08bh, 08bh, 08bh, 08bh, 08bh, 08bh, 08bh, 08bh, 070h, 08bh, 071h, 08bh, 04h, 04h, 04h, 08bh, 04h, 04h, 04h, 028h, 04h, 04h, 04h, 04h
             db 04h, 08bh, 070h, 070h, 08bh, 08bh, 08bh, 08bh, 04h, 08bh, 04h, 08bh, 08bh, 04h, 04h, 08bh, 070h, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h
             db 04h, 04h, 070h, 08bh, 08bh, 08bh, 08bh, 08bh, 08bh, 08bh, 08bh, 070h, 08bh, 08bh, 04h, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh
             db 04h, 04h, 04h, 04h, 08bh, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 04h, 04h
             db 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 070h, 08bh, 04h, 04h, 08bh, 08bh
             db 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 028h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 08bh, 04h, 08bh, 08bh, 04h, 08bh, 04h, 04h
             db 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 04h, 070h, 070h, 04h, 08bh, 04h, 08bh, 070h, 070h, 04h, 04h, 08bh
             db 08bh, 08bh, 08bh, 08bh, 08bh, 04h, 04h, 04h, 08bh, 08bh, 070h, 08bh, 08bh, 04h, 08bh, 04h, 04h, 04h, 070h, 08bh, 04h, 08bh, 04h, 04h, 08bh, 070h, 04h, 04h, 04h, 070h, 070h, 070h
             db 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 070h, 070h, 070h, 070h, 08bh, 070h, 070h, 070h, 070h, 08bh, 070h, 08bh, 04h, 04h, 04h, 08bh, 04h, 04h, 08bh, 070h, 073h, 070h, 073h, 070h
             db 0d3h, 0d3h, 070h, 073h, 070h, 070h, 070h, 073h, 073h, 073h, 070h, 070h, 070h, 070h, 070h, 073h, 073h, 073h, 073h, 073h, 070h, 070h, 070h, 070h, 070h, 070h, 073h, 073h, 070h, 070h, 073h, 073h
             db 073h, 073h, 073h, 070h, 073h, 073h, 070h, 070h, 070h, 070h, 070h, 070h, 070h, 073h, 073h, 073h, 073h, 073h, 070h, 073h, 070h, 070h, 073h, 073h, 073h, 073h, 070h, 070h, 08bh, 08bh, 08bh, 08bh
             db 070h, 073h, 073h, 073h, 0d3h, 070h, 070h, 070h, 070h, 070h, 070h, 070h, 070h, 070h, 073h, 070h, 070h, 070h, 070h, 070h, 070h, 070h, 071h, 070h, 070h, 070h, 070h, 08bh, 08bh, 070h, 04h, 08bh
             db 070h, 08bh, 01dh, 01dh, 01dh, 08bh, 08bh, 01dh, 01dh, 01dh, 08bh, 070h, 01dh, 01dh, 01dh, 01dh, 01dh, 01dh, 01dh, 08bh, 08bh, 01dh, 01dh, 01dh, 01dh, 04h, 04h, 04h, 01dh, 01dh, 01dh, 070h
             db 04h, 08bh, 08bh, 01dh, 01dh, 08bh, 08bh, 04h, 01dh, 070h, 070h, 070h, 070h, 01dh, 04h, 04h, 08bh, 08bh, 01dh, 04h, 08bh, 08bh, 04h, 01dh, 070h, 070h, 08bh, 08bh, 01dh, 070h, 070h, 01dh
             db 070h, 08bh, 04h, 01dh, 04h, 01dh, 08bh, 08bh, 01dh, 04h, 04h, 04h, 08bh, 01dh, 04h, 04h, 01dh, 070h, 08bh, 01dh, 08bh, 070h, 070h, 08bh, 01dh, 08bh, 04h, 01dh, 04h, 04h, 08bh, 01dh
             db 070h, 070h, 070h, 01dh, 070h, 01dh, 070h, 08bh, 01dh, 08bh, 070h, 070h, 08bh, 01dh, 070h, 070h, 01dh, 070h, 08bh, 04h, 04h, 04h, 04h, 04h, 01dh, 08bh, 070h, 01dh, 070h, 070h, 070h, 073h
             db 04h, 04h, 04h, 01dh, 08bh, 01dh, 08bh, 04h, 01dh, 04h, 04h, 08bh, 04h, 01dh, 01dh, 01dh, 01dh, 070h, 08bh, 070h, 0d3h, 073h, 0d3h, 0bbh, 0b8h, 01dh, 01dh, 0b8h, 0d3h, 0b8h, 0b8h, 0bbh
             db 073h, 073h, 073h, 01dh, 0d3h, 070h, 01dh, 073h, 01dh, 073h, 073h, 073h, 0b8h, 01dh, 0d3h, 0b8h, 01dh, 073h, 073h, 073h, 073h, 0b8h, 0bbh, 0d3h, 0d3h, 01dh, 01dh, 070h, 08bh, 04h, 04h, 04h
             db 073h, 0d3h, 0b8h, 01dh, 0b8h, 0b8h, 01dh, 0bbh, 01dh, 0b8h, 0b8h, 0b8h, 0d3h, 01dh, 0d3h, 073h, 01dh, 070h, 08bh, 04h, 04h, 04h, 04h, 04h, 01dh, 04h, 04h, 01dh, 04h, 04h, 04h, 04h
             db 070h, 08bh, 04h, 01dh, 04h, 04h, 04h, 01dh, 01dh, 04h, 04h, 04h, 028h, 01dh, 04h, 04h, 028h, 04h, 04h, 01dh, 04h, 04h, 04h, 01dh, 028h, 028h, 028h, 01dh, 028h, 028h, 028h, 028h
             db 04h, 04h, 04h, 01dh, 04h, 04h, 04h, 01dh, 01dh, 04h, 04h, 04h, 04h, 01dh, 028h, 028h, 028h, 028h, 01dh, 028h, 042h, 028h, 028h, 01dh, 028h, 028h, 028h, 028h, 01dh, 028h, 028h, 04h
             db 04h, 028h, 01dh, 01dh, 01dh, 028h, 028h, 028h, 01dh, 028h, 04h, 04h, 01dh, 01dh, 01dh, 01dh, 01dh, 01dh, 01dh, 028h, 028h, 01dh, 01dh, 01dh, 04h, 04h, 04h, 01dh, 01dh, 01dh, 01dh, 04h
             db 04h, 04h, 028h, 028h, 04h, 04h, 04h, 028h, 028h, 028h, 028h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h
             db 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 028h, 04h, 028h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h
INST1_SPRITE db 32, 40
             db 04h, 04h, 04h, 04h, 04h, 04h, 04h, 070h, 073h, 0d3h, 0bbh, 0b8h, 0bbh, 0b8h, 073h, 070h, 070h, 070h, 0bbh, 0d3h, 070h, 070h, 071h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh
             db 04h, 04h, 04h, 04h, 04h, 04h, 070h, 070h, 073h, 073h, 0b8h, 0b8h, 0bbh, 073h, 08bh, 08bh, 070h, 0bbh, 0b8h, 070h, 070h, 08bh, 08bh, 04h, 04h, 04h, 04h, 04h, 08bh, 08bh, 070h, 04h
             db 04h, 01dh, 01dh, 01dh, 04h, 070h, 01dh, 01dh, 01dh, 0bbh, 0b8h, 01dh, 01dh, 01dh, 070h, 070h, 01dh, 01dh, 01dh, 01dh, 04h, 01dh, 01dh, 01dh, 01dh, 01dh, 01dh, 01dh, 08bh, 01dh, 01dh, 01dh
             db 04h, 04h, 01dh, 01dh, 08bh, 070h, 073h, 01dh, 073h, 073h, 0bbh, 073h, 01dh, 04h, 070h, 0b8h, 0d3h, 01dh, 070h, 08bh, 04h, 04h, 01dh, 04h, 04h, 04h, 08bh, 01dh, 08bh, 04h, 01dh, 070h
             db 04h, 04h, 01dh, 08bh, 01dh, 073h, 073h, 01dh, 0bbh, 0bbh, 0bbh, 070h, 01dh, 070h, 070h, 073h, 01dh, 073h, 08bh, 04h, 028h, 04h, 01dh, 04h, 04h, 01dh, 08bh, 08bh, 01dh, 04h, 04h, 01dh
             db 04h, 04h, 01dh, 0d3h, 01dh, 073h, 0b8h, 01dh, 0bbh, 0b8h, 070h, 08bh, 01dh, 0b8h, 0b8h, 01dh, 070h, 04h, 04h, 04h, 04h, 04h, 01dh, 08bh, 04h, 01dh, 070h, 04h, 04h, 08bh, 08bh, 01dh
             db 073h, 0b8h, 01dh, 0bbh, 01dh, 0bbh, 0bbh, 01dh, 070h, 070h, 073h, 073h, 01dh, 070h, 01dh, 070h, 04h, 028h, 04h, 04h, 04h, 08bh, 01dh, 01dh, 01dh, 01dh, 08bh, 070h, 070h, 073h, 070h, 073h
             db 0bbh, 0b8h, 01dh, 0bbh, 0d3h, 01dh, 070h, 01dh, 070h, 0b8h, 073h, 070h, 01dh, 01dh, 04h, 01dh, 04h, 04h, 04h, 070h, 08bh, 04h, 01dh, 04h, 04h, 01dh, 0b8h, 070h, 073h, 073h, 073h, 070h
             db 073h, 08bh, 01dh, 04h, 070h, 01dh, 0bbh, 01dh, 070h, 070h, 04h, 04h, 01dh, 04h, 04h, 04h, 01dh, 08bh, 08bh, 04h, 04h, 04h, 01dh, 070h, 070h, 01dh, 073h, 0d3h, 070h, 070h, 08bh, 08bh
             db 070h, 0bbh, 01dh, 070h, 070h, 070h, 01dh, 01dh, 04h, 04h, 04h, 04h, 01dh, 04h, 08bh, 08bh, 08bh, 01dh, 04h, 071h, 070h, 070h, 01dh, 070h, 0d3h, 070h, 070h, 070h, 01dh, 08bh, 04h, 070h
             db 070h, 070h, 01dh, 08bh, 04h, 04h, 01dh, 01dh, 04h, 04h, 04h, 04h, 01dh, 08bh, 08bh, 04h, 08bh, 01dh, 070h, 070h, 0d3h, 070h, 01dh, 070h, 08bh, 08bh, 070h, 01dh, 071h, 070h, 08bh, 04h
             db 070h, 01dh, 01dh, 01dh, 04h, 04h, 04h, 01dh, 04h, 04h, 04h, 01dh, 01dh, 01dh, 04h, 04h, 01dh, 01dh, 01dh, 01dh, 070h, 01dh, 01dh, 01dh, 01dh, 01dh, 01dh, 01dh, 070h, 070h, 08bh, 070h
             db 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 070h, 08bh, 08bh, 08bh, 070h, 04h, 04h, 08bh, 070h, 070h, 070h, 073h, 070h, 0b8h, 0d3h, 0d3h, 070h, 070h, 070h, 08bh, 08bh, 071h, 08bh, 070h
             db 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 08bh, 071h, 08bh, 070h, 04h, 04h, 04h, 08bh, 0d3h, 070h, 073h, 0b8h, 0d3h, 0b8h, 0d3h, 073h, 070h, 070h, 08bh, 08bh, 08bh, 070h, 08bh, 08bh
             db 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 08bh, 08bh, 070h, 08bh, 08bh, 04h, 04h, 08bh, 08bh, 073h, 073h, 073h, 070h, 070h, 073h, 0b8h, 070h, 073h, 070h, 070h, 08bh, 070h, 070h, 08bh, 08bh
             db 04h, 04h, 04h, 04h, 04h, 071h, 08bh, 08bh, 08bh, 08bh, 08bh, 070h, 04h, 04h, 08bh, 08bh, 073h, 070h, 073h, 0d3h, 0d3h, 070h, 0b8h, 0b8h, 073h, 070h, 070h, 08bh, 08bh, 08bh, 08bh, 070h
             db 04h, 04h, 04h, 04h, 070h, 08bh, 08bh, 04h, 04h, 070h, 070h, 08bh, 04h, 04h, 08bh, 08bh, 070h, 070h, 070h, 073h, 073h, 070h, 073h, 0d3h, 070h, 070h, 08bh, 070h, 08bh, 070h, 04h, 08bh
             db 04h, 04h, 070h, 04h, 08bh, 04h, 04h, 04h, 08bh, 070h, 04h, 04h, 04h, 08bh, 070h, 073h, 0d3h, 0d3h, 073h, 070h, 0d3h, 073h, 070h, 070h, 08bh, 08bh, 070h, 08bh, 08bh, 04h, 070h, 070h
             db 04h, 08bh, 04h, 08bh, 08bh, 08bh, 070h, 04h, 04h, 08bh, 070h, 08bh, 070h, 073h, 0d3h, 0d3h, 070h, 073h, 0d3h, 0d3h, 070h, 08bh, 08bh, 08bh, 08bh, 070h, 08bh, 04h, 04h, 08bh, 04h, 04h
             db 08bh, 070h, 070h, 08bh, 08bh, 04h, 08bh, 08bh, 073h, 070h, 070h, 073h, 073h, 070h, 073h, 0d3h, 070h, 070h, 08bh, 08bh, 071h, 070h, 04h, 04h, 04h, 04h, 08bh, 070h, 073h, 070h, 070h, 070h
             db 070h, 04h, 04h, 04h, 08bh, 070h, 073h, 070h, 073h, 070h, 0d3h, 0b8h, 070h, 070h, 08bh, 08bh, 08bh, 08bh, 070h, 04h, 04h, 04h, 073h, 070h, 08bh, 070h, 08bh, 08bh, 070h, 070h, 070h, 08bh
             db 04h, 08bh, 070h, 073h, 070h, 073h, 073h, 073h, 0d3h, 070h, 070h, 08bh, 070h, 070h, 070h, 070h, 04h, 04h, 04h, 04h, 08bh, 070h, 08bh, 08bh, 070h, 070h, 070h, 070h, 04h, 08bh, 08bh, 070h
             db 070h, 070h, 070h, 073h, 070h, 0b8h, 070h, 070h, 070h, 08bh, 08bh, 08bh, 08bh, 070h, 04h, 08bh, 04h, 04h, 08bh, 070h, 08bh, 08bh, 08bh, 08bh, 08bh, 08bh, 070h, 070h, 08bh, 08bh, 08bh, 08bh
             db 070h, 070h, 070h, 0b8h, 0d3h, 073h, 08bh, 08bh, 070h, 08bh, 08bh, 070h, 04h, 070h, 04h, 04h, 04h, 070h, 070h, 08bh, 070h, 070h, 08bh, 070h, 070h, 070h, 070h, 08bh, 04h, 08bh, 08bh, 070h
             db 073h, 070h, 073h, 073h, 073h, 070h, 08bh, 08bh, 08bh, 08bh, 08bh, 04h, 04h, 04h, 08bh, 070h, 04h, 08bh, 08bh, 070h, 08bh, 08bh, 070h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h
             db 070h, 070h, 070h, 070h, 070h, 070h, 08bh, 070h, 04h, 070h, 08bh, 08bh, 070h, 08bh, 08bh, 070h, 070h, 070h, 08bh, 070h, 08bh, 04h, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h
             db 08bh, 08bh, 070h, 04h, 04h, 04h, 04h, 070h, 070h, 08bh, 08bh, 08bh, 08bh, 070h, 070h, 08bh, 08bh, 08bh, 04h, 04h, 04h, 04h, 08bh, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 08bh
             db 04h, 04h, 08bh, 070h, 070h, 070h, 070h, 070h, 08bh, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 070h, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h
             db 01dh, 01dh, 01dh, 01dh, 01dh, 01dh, 01dh, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 070h, 070h, 070h, 08bh, 01dh, 01dh, 01dh, 01dh, 070h, 01dh, 070h, 073h, 01dh, 01dh, 01dh, 01dh, 01dh
             db 01dh, 04h, 04h, 01dh, 04h, 04h, 01dh, 01dh, 070h, 070h, 070h, 070h, 073h, 0b8h, 0bbh, 0b8h, 0d2h, 0d3h, 01dh, 0b8h, 0bbh, 0bbh, 0b8h, 01dh, 01dh, 073h, 0b8h, 0b8h, 01dh, 073h, 073h, 073h
             db 04h, 070h, 08bh, 01dh, 070h, 070h, 0b8h, 01dh, 0bbh, 0bbh, 073h, 0b8h, 0d3h, 0b8h, 0b8h, 0d2h, 0bbh, 0b8h, 01dh, 0bbh, 0d2h, 0bbh, 0bbh, 0bbh, 01dh, 073h, 073h, 0b8h, 01dh, 0d3h, 0d3h, 073h
             db 0b8h, 0bbh, 0b8h, 01dh, 0b8h, 073h, 073h, 0b8h, 0b8h, 0b8h, 01dh, 0d3h, 0d3h, 0d3h, 0b8h, 0d3h, 070h, 070h, 01dh, 070h, 070h, 070h, 070h, 070h, 0d3h, 0d3h, 0b8h, 0d3h, 01dh, 0d3h, 0d3h, 0d3h
             db 0b8h, 0d3h, 0d3h, 01dh, 0b8h, 0d3h, 070h, 08bh, 04h, 04h, 01dh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 01dh, 01dh, 01dh, 04h, 04h, 04h, 04h, 04h, 04h, 01dh, 04h, 070h, 070h
             db 04h, 04h, 04h, 01dh, 028h, 04h, 04h, 04h, 04h, 04h, 04h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 04h, 028h, 01dh, 01dh, 028h, 04h, 04h, 04h, 01dh, 01dh, 01dh, 01dh
             db 028h, 028h, 028h, 01dh, 04h, 04h, 028h, 042h, 028h, 028h, 028h, 028h, 028h, 028h, 0eh, 04h, 028h, 028h, 028h, 04h, 028h, 028h, 028h, 028h, 01dh, 028h, 028h, 028h, 01dh, 028h, 04h, 04h
             db 028h, 028h, 028h, 01dh, 028h, 04h, 028h, 028h, 028h, 04h, 04h, 04h, 04h, 028h, 028h, 028h, 028h, 028h, 01dh, 028h, 028h, 028h, 04h, 04h, 01dh, 04h, 04h, 028h, 01dh, 028h, 028h, 028h
             db 04h, 028h, 028h, 01dh, 028h, 028h, 04h, 04h, 028h, 028h, 01dh, 028h, 04h, 028h, 028h, 028h, 028h, 04h, 01dh, 01dh, 028h, 028h, 04h, 04h, 01dh, 028h, 028h, 028h, 01dh, 04h, 04h, 04h
             db 04h, 04h, 01dh, 01dh, 01dh, 04h, 04h, 04h, 04h, 04h, 01dh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 01dh, 04h, 01dh, 01dh, 01dh, 01dh, 04h, 04h, 04h, 01dh, 01dh, 01dh, 04h, 04h
             db 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h
             db 04h, 04h, 08bh, 08bh, 08bh, 070h, 073h, 070h, 070h, 08bh, 08bh, 08bh, 08bh, 08bh, 08bh, 08bh, 08bh, 070h, 070h, 070h, 070h, 070h, 070h, 08bh, 08bh, 08bh, 08bh, 04h, 04h, 08bh, 04h, 04h
INST2_SPRITE db 32, 40
             db 04h, 04h, 08bh, 070h, 070h, 04h, 04h, 04h, 070h, 04h, 04h, 08bh, 08bh, 08bh, 08bh, 04h, 08bh, 08bh, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h
             db 08bh, 08bh, 070h, 08bh, 08bh, 070h, 08bh, 08bh, 08bh, 08bh, 08bh, 070h, 08bh, 04h, 04h, 070h, 070h, 08bh, 08bh, 070h, 04h, 04h, 08bh, 04h, 04h, 04h, 08bh, 04h, 04h, 04h, 04h, 04h
             db 070h, 04h, 070h, 01dh, 01dh, 01dh, 08bh, 04h, 04h, 04h, 04h, 04h, 08bh, 08bh, 070h, 070h, 08bh, 08bh, 04h, 08bh, 01dh, 04h, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h
             db 08bh, 04h, 04h, 04h, 01dh, 08bh, 070h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 01dh, 01dh, 01dh, 04h, 08bh, 08bh, 04h, 08bh, 04h, 04h, 04h, 04h, 04h, 04h
             db 04h, 08bh, 08bh, 01dh, 070h, 070h, 070h, 0d3h, 0d3h, 0d3h, 0d3h, 073h, 070h, 070h, 070h, 08bh, 070h, 04h, 04h, 04h, 01dh, 070h, 08bh, 08bh, 08bh, 070h, 08bh, 070h, 04h, 04h, 04h, 04h
             db 073h, 073h, 0d3h, 01dh, 070h, 073h, 070h, 073h, 070h, 01dh, 073h, 0d3h, 0d3h, 0d3h, 070h, 0d3h, 070h, 073h, 070h, 08bh, 01dh, 04h, 04h, 04h, 070h, 08bh, 08bh, 08bh, 04h, 08bh, 04h, 04h
             db 01dh, 073h, 01dh, 073h, 0d3h, 073h, 073h, 073h, 070h, 01dh, 073h, 0b8h, 0b8h, 0b8h, 073h, 070h, 0d3h, 0d3h, 070h, 073h, 01dh, 08bh, 070h, 04h, 04h, 04h, 070h, 08bh, 08bh, 08bh, 070h, 04h
             db 070h, 01dh, 08bh, 08bh, 08bh, 08bh, 08bh, 070h, 070h, 070h, 08bh, 070h, 070h, 070h, 070h, 070h, 073h, 073h, 070h, 070h, 01dh, 0d3h, 0d3h, 070h, 08bh, 04h, 04h, 08bh, 070h, 070h, 070h, 04h
             db 08bh, 01dh, 08bh, 04h, 08bh, 08bh, 08bh, 08bh, 070h, 08bh, 04h, 08bh, 08bh, 08bh, 08bh, 070h, 08bh, 070h, 073h, 073h, 01dh, 073h, 070h, 070h, 070h, 070h, 08bh, 04h, 04h, 04h, 070h, 04h
             db 08bh, 01dh, 04h, 04h, 04h, 04h, 08bh, 070h, 04h, 04h, 070h, 070h, 08bh, 070h, 070h, 08bh, 08bh, 070h, 070h, 070h, 01dh, 0d3h, 073h, 070h, 0d3h, 0d3h, 070h, 073h, 08bh, 08bh, 04h, 070h
             db 04h, 01dh, 04h, 04h, 08bh, 08bh, 08bh, 08bh, 08bh, 01dh, 04h, 04h, 04h, 08bh, 070h, 070h, 070h, 070h, 070h, 070h, 01dh, 070h, 073h, 073h, 070h, 070h, 073h, 070h, 070h, 08bh, 04h, 04h
             db 01dh, 01dh, 01dh, 08bh, 08bh, 08bh, 070h, 04h, 04h, 01dh, 04h, 04h, 04h, 04h, 08bh, 070h, 08bh, 08bh, 01dh, 01dh, 01dh, 01dh, 01dh, 073h, 070h, 0d3h, 073h, 073h, 08bh, 04h, 08bh, 070h
             db 070h, 04h, 08bh, 08bh, 08bh, 04h, 04h, 070h, 070h, 08bh, 08bh, 04h, 08bh, 070h, 08bh, 070h, 08bh, 08bh, 08bh, 08bh, 08bh, 073h, 0d3h, 070h, 073h, 073h, 073h, 08bh, 04h, 04h, 04h, 070h
             db 08bh, 08bh, 08bh, 070h, 070h, 070h, 070h, 070h, 070h, 070h, 08bh, 08bh, 08bh, 070h, 070h, 08bh, 070h, 070h, 070h, 070h, 0b8h, 070h, 073h, 070h, 070h, 070h, 04h, 04h, 08bh, 04h, 08bh, 04h
             db 08bh, 08bh, 08bh, 08bh, 070h, 08bh, 08bh, 08bh, 08bh, 08bh, 070h, 070h, 08bh, 070h, 070h, 073h, 073h, 070h, 073h, 073h, 070h, 070h, 073h, 08bh, 04h, 04h, 04h, 070h, 08bh, 04h, 04h, 04h
             db 08bh, 08bh, 08bh, 070h, 070h, 070h, 070h, 070h, 070h, 070h, 08bh, 070h, 073h, 0d3h, 0bbh, 070h, 073h, 070h, 070h, 070h, 070h, 04h, 04h, 04h, 04h, 070h, 08bh, 071h, 08bh, 04h, 070h, 04h
             db 070h, 08bh, 08bh, 08bh, 08bh, 08bh, 08bh, 08bh, 070h, 070h, 08bh, 070h, 070h, 0b8h, 0b8h, 073h, 073h, 070h, 070h, 0d3h, 08bh, 04h, 04h, 04h, 070h, 08bh, 08bh, 04h, 04h, 08bh, 04h, 04h
             db 070h, 070h, 070h, 070h, 070h, 070h, 070h, 070h, 070h, 070h, 08bh, 08bh, 070h, 073h, 0b8h, 073h, 073h, 070h, 073h, 070h, 070h, 04h, 04h, 08bh, 08bh, 08bh, 08bh, 071h, 08bh, 070h, 08bh, 08bh
             db 04h, 04h, 04h, 08bh, 08bh, 04h, 070h, 08bh, 08bh, 08bh, 070h, 08bh, 08bh, 070h, 073h, 073h, 073h, 070h, 070h, 073h, 070h, 04h, 04h, 08bh, 08bh, 070h, 04h, 070h, 08bh, 08bh, 04h, 04h
             db 070h, 070h, 08bh, 08bh, 08bh, 08bh, 08bh, 071h, 04h, 070h, 070h, 070h, 070h, 08bh, 08bh, 070h, 070h, 073h, 070h, 073h, 070h, 070h, 08bh, 04h, 04h, 04h, 070h, 070h, 08bh, 08bh, 08bh, 08bh
             db 070h, 070h, 08bh, 070h, 070h, 070h, 08bh, 04h, 04h, 08bh, 04h, 08bh, 070h, 08bh, 070h, 070h, 070h, 08bh, 070h, 070h, 0d3h, 073h, 073h, 073h, 070h, 073h, 08bh, 04h, 04h, 04h, 070h, 08bh
             db 070h, 08bh, 08bh, 08bh, 070h, 070h, 08bh, 08bh, 08bh, 070h, 08bh, 04h, 04h, 08bh, 04h, 070h, 08bh, 08bh, 08bh, 070h, 070h, 070h, 073h, 0d3h, 0bbh, 070h, 073h, 073h, 073h, 070h, 04h, 04h
             db 08bh, 08bh, 070h, 070h, 08bh, 08bh, 08bh, 08bh, 08bh, 08bh, 070h, 070h, 04h, 04h, 04h, 08bh, 08bh, 070h, 08bh, 08bh, 08bh, 070h, 070h, 070h, 073h, 073h, 0b8h, 073h, 0d3h, 070h, 070h, 073h
             db 08bh, 04h, 04h, 04h, 08bh, 08bh, 08bh, 070h, 070h, 08bh, 070h, 08bh, 08bh, 070h, 08bh, 071h, 04h, 04h, 04h, 070h, 08bh, 070h, 08bh, 070h, 08bh, 08bh, 070h, 070h, 0d3h, 0d3h, 070h, 073h
             db 04h, 04h, 04h, 04h, 04h, 08bh, 04h, 04h, 04h, 08bh, 08bh, 08bh, 070h, 070h, 08bh, 070h, 08bh, 04h, 04h, 08bh, 08bh, 08bh, 070h, 08bh, 08bh, 08bh, 070h, 08bh, 070h, 08bh, 070h, 073h
             db 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 08bh, 04h, 070h, 070h, 070h, 08bh, 08bh, 08bh, 08bh, 08bh, 070h, 070h, 04h, 04h, 04h, 04h, 08bh, 04h, 08bh, 070h, 08bh, 08bh, 08bh, 08bh
             db 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 070h, 070h, 08bh, 070h, 070h, 070h, 070h, 08bh, 070h, 08bh, 08bh, 08bh, 070h, 070h, 070h, 08bh, 04h, 04h, 04h, 04h, 08bh, 070h
             db 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 070h, 070h, 070h, 070h, 070h, 070h, 08bh, 070h, 070h, 08bh, 08bh, 08bh, 070h, 070h, 04h, 04h, 04h, 08bh
             db 01dh, 01dh, 08bh, 04h, 04h, 08bh, 01dh, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 01dh, 01dh, 01dh, 01dh, 01dh, 08bh, 01dh, 08bh, 01dh, 01dh, 01dh, 01dh, 01dh, 01dh, 01dh, 08bh, 04h
             db 070h, 070h, 01dh, 070h, 070h, 01dh, 070h, 01dh, 08bh, 070h, 070h, 04h, 04h, 04h, 01dh, 04h, 08bh, 08bh, 08bh, 04h, 01dh, 01dh, 04h, 08bh, 01dh, 070h, 08bh, 070h, 08bh, 01dh, 070h, 070h
             db 073h, 0b8h, 01dh, 0bbh, 0b8h, 01dh, 0bbh, 01dh, 0b8h, 073h, 073h, 073h, 070h, 01dh, 070h, 070h, 070h, 070h, 070h, 08bh, 04h, 01dh, 04h, 04h, 01dh, 04h, 04h, 01dh, 08bh, 070h, 01dh, 070h
             db 0d3h, 0bbh, 01dh, 0bbh, 0bbh, 01dh, 073h, 01dh, 073h, 0b8h, 0b8h, 0b8h, 0bbh, 01dh, 0b8h, 0b8h, 073h, 0d3h, 073h, 070h, 070h, 08bh, 070h, 08bh, 01dh, 04h, 04h, 01dh, 04h, 04h, 04h, 08bh
             db 073h, 0b8h, 01dh, 073h, 01dh, 073h, 073h, 073h, 01dh, 073h, 0d3h, 073h, 0b8h, 01dh, 0b8h, 0bbh, 0b8h, 0bbh, 0b8h, 0bbh, 073h, 073h, 073h, 073h, 01dh, 01dh, 01dh, 01dh, 070h, 04h, 08bh, 08bh
             db 01dh, 01dh, 04h, 04h, 01dh, 01dh, 01dh, 01dh, 01dh, 04h, 04h, 04h, 04h, 01dh, 070h, 070h, 073h, 0b8h, 0d3h, 0b8h, 0d3h, 0b8h, 0b8h, 0b8h, 01dh, 0d3h, 0b8h, 01dh, 0bbh, 0b8h, 073h, 073h
             db 028h, 028h, 028h, 028h, 01dh, 028h, 028h, 028h, 01dh, 04h, 04h, 04h, 04h, 01dh, 028h, 028h, 04h, 04h, 04h, 04h, 04h, 04h, 071h, 070h, 01dh, 0d3h, 0d3h, 01dh, 0b8h, 0d3h, 0bbh, 0b8h
             db 028h, 028h, 028h, 01dh, 04h, 028h, 028h, 028h, 028h, 01dh, 028h, 028h, 028h, 01dh, 028h, 028h, 028h, 028h, 04h, 04h, 04h, 01dh, 04h, 028h, 01dh, 028h, 04h, 04h, 04h, 04h, 01dh, 04h
             db 028h, 028h, 028h, 01dh, 028h, 04h, 04h, 04h, 04h, 01dh, 028h, 028h, 028h, 04h, 01dh, 028h, 04h, 028h, 028h, 028h, 01dh, 028h, 028h, 028h, 01dh, 028h, 028h, 04h, 04h, 01dh, 04h, 04h
             db 04h, 04h, 01dh, 01dh, 01dh, 028h, 04h, 04h, 01dh, 01dh, 01dh, 028h, 028h, 04h, 04h, 01dh, 01dh, 01dh, 01dh, 01dh, 028h, 04h, 04h, 01dh, 01dh, 01dh, 01dh, 01dh, 01dh, 01dh, 028h, 028h
             db 04h, 04h, 04h, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 028h, 028h, 028h, 028h, 028h, 04h, 04h, 04h, 028h, 028h
             db 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h
INST3_SPRITE db 32, 40
             db 04h, 04h, 04h, 04h, 04h, 08bh, 08bh, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 070h, 070h, 070h, 070h, 070h, 070h, 08bh, 08bh, 070h, 08bh, 070h, 070h, 04h, 04h, 04h, 04h
             db 070h, 070h, 070h, 08bh, 08bh, 070h, 070h, 08bh, 04h, 04h, 04h, 08bh, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 070h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h
             db 04h, 04h, 04h, 04h, 08bh, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 070h, 04h, 08bh, 08bh, 08bh, 08bh, 08bh, 08bh, 08bh, 08bh, 070h, 070h, 070h
             db 04h, 04h, 04h, 08bh, 070h, 08bh, 08bh, 08bh, 04h, 08bh, 04h, 08bh, 070h, 070h, 04h, 070h, 070h, 070h, 070h, 070h, 070h, 070h, 073h, 073h, 073h, 070h, 070h, 070h, 0d3h, 073h, 070h, 073h
             db 08bh, 04h, 070h, 08bh, 070h, 070h, 070h, 070h, 073h, 070h, 070h, 073h, 0d3h, 0b8h, 070h, 073h, 073h, 070h, 08bh, 070h, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 04h, 04h
             db 073h, 0d3h, 0d3h, 0d3h, 070h, 070h, 08bh, 04h, 08bh, 071h, 08bh, 04h, 04h, 04h, 08bh, 04h, 08bh, 08bh, 070h, 070h, 08bh, 070h, 073h, 0b8h, 073h, 0b8h, 0d3h, 0d3h, 073h, 073h, 0d3h, 0d3h
             db 04h, 08bh, 04h, 08bh, 08bh, 08bh, 070h, 08bh, 070h, 073h, 0d3h, 073h, 073h, 073h, 073h, 0d3h, 0b8h, 073h, 073h, 073h, 070h, 073h, 070h, 070h, 070h, 070h, 070h, 08bh, 070h, 070h, 070h, 070h
             db 073h, 073h, 073h, 073h, 073h, 070h, 070h, 070h, 070h, 073h, 073h, 070h, 070h, 070h, 0d3h, 073h, 0d3h, 0d3h, 073h, 070h, 070h, 070h, 073h, 073h, 073h, 073h, 073h, 070h, 070h, 073h, 073h, 073h
             db 070h, 073h, 070h, 073h, 073h, 070h, 070h, 073h, 073h, 0bbh, 0bbh, 073h, 073h, 0bbh, 0bbh, 0bbh, 0d2h, 0bbh, 0bbh, 0bbh, 0bbh, 0bbh, 0b8h, 0bbh, 0b8h, 0d3h, 0d2h, 0b8h, 0d3h, 0b8h, 0d3h, 0b8h
             db 073h, 0bbh, 0bbh, 0bbh, 073h, 073h, 073h, 073h, 073h, 0bbh, 073h, 073h, 070h, 073h, 0b8h, 0d3h, 070h, 070h, 073h, 070h, 070h, 0d3h, 073h, 073h, 073h, 0d3h, 0d3h, 0d3h, 0d3h, 0b8h, 0d3h, 0d3h
             db 073h, 070h, 070h, 070h, 070h, 073h, 0d3h, 073h, 0bbh, 073h, 0b8h, 0d3h, 070h, 070h, 08bh, 04h, 04h, 04h, 04h, 04h, 08bh, 04h, 04h, 04h, 08bh, 08bh, 04h, 04h, 04h, 04h, 04h, 04h
             db 04h, 04h, 04h, 04h, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h
             db 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 028h, 028h, 04h, 028h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h
             db 04h, 04h, 08bh, 070h, 04h, 04h, 04h, 08bh, 08bh, 08bh, 070h, 070h, 070h, 070h, 08bh, 070h, 070h, 070h, 08bh, 08bh, 070h, 070h, 070h, 073h, 073h, 073h, 070h, 070h, 073h, 073h, 070h, 0d3h
             db 073h, 0d3h, 073h, 073h, 070h, 08bh, 08bh, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 08bh, 08bh, 070h, 070h, 08bh, 08bh, 08bh, 070h, 08bh, 08bh, 08bh, 08bh, 08bh, 08bh, 070h
             db 08bh, 08bh, 08bh, 04h, 04h, 04h, 08bh, 070h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 04h, 04h, 04h, 08bh, 04h, 04h, 04h, 04h
             db 04h, 04h, 08bh, 04h, 04h, 08bh, 070h, 08bh, 070h, 070h, 08bh, 08bh, 08bh, 08bh, 01dh, 01dh, 01dh, 01dh, 01dh, 070h, 070h, 070h, 01dh, 01dh, 01dh, 073h, 070h, 070h, 01dh, 01dh, 01dh, 070h
             db 073h, 070h, 08bh, 073h, 070h, 070h, 070h, 04h, 08bh, 070h, 070h, 070h, 070h, 01dh, 073h, 0d3h, 0d3h, 073h, 070h, 01dh, 070h, 0d3h, 073h, 01dh, 070h, 073h, 070h, 070h, 070h, 01dh, 070h, 070h
             db 070h, 073h, 070h, 073h, 073h, 070h, 070h, 070h, 04h, 04h, 04h, 070h, 01dh, 070h, 071h, 08bh, 08bh, 070h, 08bh, 08bh, 01dh, 08bh, 04h, 01dh, 08bh, 04h, 04h, 04h, 04h, 01dh, 071h, 070h
             db 04h, 04h, 070h, 08bh, 04h, 04h, 08bh, 04h, 08bh, 04h, 04h, 070h, 01dh, 04h, 04h, 08bh, 070h, 070h, 070h, 070h, 01dh, 08bh, 08bh, 01dh, 04h, 04h, 08bh, 070h, 04h, 01dh, 070h, 070h
             db 08bh, 04h, 070h, 08bh, 08bh, 04h, 08bh, 070h, 08bh, 04h, 04h, 08bh, 01dh, 08bh, 08bh, 070h, 070h, 08bh, 070h, 070h, 01dh, 070h, 08bh, 01dh, 08bh, 04h, 08bh, 04h, 08bh, 01dh, 08bh, 04h
             db 071h, 070h, 073h, 08bh, 08bh, 08bh, 04h, 070h, 070h, 08bh, 04h, 04h, 01dh, 04h, 04h, 04h, 08bh, 04h, 04h, 04h, 01dh, 08bh, 04h, 01dh, 04h, 04h, 04h, 04h, 04h, 01dh, 04h, 04h
             db 08bh, 08bh, 08bh, 070h, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 01dh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 01dh, 04h, 04h, 01dh, 04h, 04h, 04h, 04h, 04h, 01dh, 04h, 04h
             db 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 01dh, 04h, 070h, 070h, 073h, 073h, 073h, 0b8h, 01dh, 0bbh, 0bbh, 01dh, 0d2h, 0bbh, 0bbh, 0bbh, 0bbh, 01dh, 0bbh, 0bbh
             db 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 073h, 073h, 0b8h, 0b8h, 073h, 01dh, 0bbh, 0d3h, 073h, 070h, 08bh, 01dh, 04h, 070h, 070h, 01dh, 070h, 073h, 0bbh, 0b8h, 073h, 01dh, 0d3h, 0d3h
             db 04h, 04h, 04h, 04h, 070h, 073h, 0bbh, 0bbh, 0bbh, 0d3h, 08bh, 08bh, 070h, 070h, 01dh, 01dh, 01dh, 01dh, 01dh, 070h, 071h, 04h, 04h, 04h, 01dh, 01dh, 01dh, 01dh, 01dh, 04h, 04h, 04h
             db 070h, 073h, 0bbh, 0b8h, 0bbh, 070h, 08bh, 070h, 08bh, 0bbh, 0d3h, 0d3h, 08bh, 04h, 04h, 04h, 01dh, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 070h, 08bh, 08bh, 08bh, 04h, 070h, 04h, 070h
             db 073h, 08bh, 08bh, 070h, 0d3h, 08bh, 073h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 070h, 04h, 04h, 01dh, 01dh, 01dh, 04h, 04h, 04h, 070h, 04h, 08bh, 073h, 073h, 073h, 070h, 0d3h, 0d3h
             db 070h, 073h, 08bh, 04h, 04h, 04h, 04h, 04h, 08bh, 04h, 04h, 08bh, 08bh, 08bh, 04h, 04h, 073h, 070h, 070h, 070h, 0b8h, 0b8h, 073h, 073h, 070h, 08bh, 08bh, 08bh, 070h, 070h, 070h, 070h
             db 04h, 04h, 04h, 070h, 08bh, 04h, 08bh, 04h, 08bh, 070h, 070h, 073h, 070h, 073h, 070h, 070h, 070h, 08bh, 070h, 04h, 08bh, 04h, 08bh, 070h, 070h, 070h, 070h, 070h, 08bh, 08bh, 08bh, 070h
             db 08bh, 04h, 04h, 08bh, 0d3h, 0d3h, 073h, 070h, 08bh, 070h, 070h, 04h, 04h, 070h, 070h, 070h, 04h, 04h, 04h, 08bh, 04h, 070h, 070h, 073h, 073h, 0bbh, 0bbh, 0bbh, 0b8h, 0b8h, 0b8h, 0d2h
             db 0d3h, 073h, 070h, 08bh, 070h, 04h, 04h, 070h, 08bh, 08bh, 04h, 04h, 04h, 070h, 073h, 073h, 0d3h, 0d3h, 0b8h, 0d3h, 073h, 070h, 04h, 04h, 04h, 028h, 028h, 04h, 04h, 04h, 04h, 04h
             db 070h, 070h, 070h, 08bh, 04h, 04h, 08bh, 070h, 0d3h, 0b8h, 0d3h, 0b8h, 073h, 08bh, 04h, 04h, 04h, 028h, 042h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 04h, 04h, 04h, 04h, 04h
             db 08bh, 070h, 0d3h, 0b8h, 0b8h, 073h, 073h, 04h, 04h, 04h, 04h, 028h, 028h, 028h, 028h, 04h, 04h, 028h, 028h, 04h, 028h, 04h, 028h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h
             db 0b8h, 070h, 04h, 04h, 04h, 028h, 028h, 028h, 028h, 04h, 028h, 028h, 028h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h
             db 028h, 04h, 04h, 04h, 028h, 04h, 028h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 070h, 070h, 070h, 08bh, 08bh, 08bh, 08bh, 08bh, 08bh, 070h, 070h, 070h
             db 028h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 070h, 08bh, 070h, 04h, 04h, 04h, 04h, 04h, 08bh, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h
             db 04h, 04h, 04h, 04h, 070h, 08bh, 08bh, 08bh, 04h, 04h, 08bh, 08bh, 04h, 04h, 08bh, 04h, 04h, 04h, 04h, 08bh, 070h, 070h, 070h, 070h, 08bh, 08bh, 08bh, 08bh, 070h, 08bh, 070h, 070h
             db 08bh, 08bh, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 08bh, 08bh, 08bh, 08bh, 070h, 08bh, 070h, 070h, 070h, 070h, 073h, 073h, 073h, 070h, 073h, 073h, 073h, 070h, 070h, 070h, 070h
             db 04h, 04h, 04h, 04h, 04h, 08bh, 08bh, 070h, 04h, 08bh, 070h, 070h, 073h, 070h, 073h, 073h, 070h, 073h, 070h, 08bh, 04h, 08bh, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h
INST4_SPRITE db 32, 40
             db 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 08bh, 070h, 08bh, 08bh, 04h, 070h
             db 04h, 04h, 04h, 08bh, 04h, 04h, 04h, 04h, 04h, 08bh, 08bh, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h
             db 070h, 08bh, 08bh, 070h, 070h, 070h, 070h, 070h, 070h, 070h, 070h, 070h, 070h, 070h, 08bh, 070h, 070h, 070h, 08bh, 08bh, 04h, 08bh, 08bh, 08bh, 070h, 070h, 04h, 04h, 08bh, 070h, 08bh, 04h
             db 070h, 070h, 0d3h, 0d3h, 0d3h, 073h, 073h, 073h, 0d3h, 073h, 073h, 070h, 070h, 073h, 073h, 073h, 073h, 073h, 073h, 070h, 070h, 070h, 070h, 070h, 070h, 070h, 070h, 070h, 08bh, 08bh, 070h, 04h
             db 04h, 08bh, 04h, 04h, 04h, 04h, 04h, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 08bh, 08bh, 08bh, 08bh, 070h, 070h, 073h, 073h, 073h, 0b8h, 073h, 073h, 070h, 073h, 073h, 073h
             db 0b8h, 073h, 0d3h, 0d3h, 0d3h, 073h, 073h, 073h, 0b8h, 0b8h, 073h, 073h, 073h, 070h, 08bh, 08bh, 070h, 08bh, 08bh, 08bh, 04h, 04h, 04h, 04h, 04h, 08bh, 04h, 04h, 04h, 04h, 04h, 04h
             db 0d3h, 073h, 070h, 070h, 073h, 070h, 070h, 070h, 073h, 070h, 070h, 070h, 070h, 070h, 070h, 070h, 073h, 0d3h, 073h, 073h, 073h, 0d3h, 073h, 073h, 0b8h, 073h, 073h, 073h, 073h, 073h, 073h, 0b8h
             db 0b8h, 073h, 073h, 073h, 073h, 073h, 073h, 070h, 070h, 073h, 0d3h, 073h, 073h, 070h, 073h, 0d3h, 0d3h, 073h, 073h, 073h, 070h, 070h, 070h, 070h, 073h, 070h, 073h, 070h, 073h, 070h, 070h, 070h
             db 0bbh, 0b8h, 073h, 073h, 073h, 0bbh, 0bbh, 0b8h, 0bbh, 073h, 073h, 0b8h, 0b8h, 0b8h, 0b8h, 0b8h, 0bbh, 0b8h, 0bbh, 0bbh, 0bbh, 0bbh, 0bbh, 0bbh, 0d2h, 0bbh, 0bbh, 0bbh, 0bbh, 0bbh, 073h, 073h
             db 0b8h, 0d3h, 073h, 073h, 0d3h, 0d3h, 073h, 073h, 0d3h, 073h, 073h, 073h, 0d3h, 0d3h, 073h, 073h, 073h, 073h, 073h, 070h, 073h, 0d3h, 0d3h, 0b8h, 070h, 070h, 0d3h, 073h, 0d3h, 0b8h, 073h, 0bbh
             db 04h, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 08bh, 070h, 070h, 073h, 073h, 070h, 0d3h, 0d3h, 073h
             db 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 04h, 04h, 04h, 04h, 04h, 08bh, 04h, 04h, 04h
             db 04h, 08bh, 04h, 08bh, 08bh, 08bh, 08bh, 04h, 08bh, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 028h, 028h, 04h, 04h, 04h
             db 0d3h, 0d3h, 0d3h, 0d3h, 0d3h, 0d3h, 0b8h, 070h, 08bh, 08bh, 070h, 08bh, 04h, 071h, 08bh, 08bh, 070h, 073h, 073h, 070h, 070h, 073h, 070h, 070h, 070h, 070h, 08bh, 04h, 04h, 08bh, 04h, 04h
             db 08bh, 08bh, 04h, 04h, 04h, 04h, 08bh, 04h, 04h, 04h, 04h, 08bh, 04h, 08bh, 070h, 070h, 070h, 070h, 08bh, 08bh, 04h, 04h, 04h, 04h, 08bh, 08bh, 08bh, 04h, 070h, 0d3h, 073h, 0d3h
             db 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 08bh, 08bh, 070h, 04h, 04h, 04h, 070h, 08bh, 070h, 070h
             db 070h, 070h, 01dh, 01dh, 01dh, 073h, 01dh, 01dh, 01dh, 01dh, 01dh, 01dh, 01dh, 070h, 070h, 070h, 070h, 08bh, 08bh, 08bh, 08bh, 070h, 073h, 070h, 01dh, 01dh, 01dh, 01dh, 01dh, 01dh, 01dh, 04h
             db 0d3h, 073h, 073h, 01dh, 073h, 01dh, 01dh, 073h, 070h, 01dh, 070h, 070h, 01dh, 01dh, 070h, 070h, 070h, 08bh, 08bh, 08bh, 070h, 070h, 04h, 08bh, 070h, 01dh, 073h, 070h, 073h, 070h, 01dh, 08bh
             db 08bh, 08bh, 08bh, 01dh, 08bh, 01dh, 04h, 04h, 04h, 01dh, 04h, 070h, 08bh, 01dh, 08bh, 08bh, 08bh, 04h, 08bh, 070h, 070h, 070h, 070h, 073h, 070h, 01dh, 0d3h, 070h, 01dh, 070h, 070h, 01dh
             db 070h, 070h, 070h, 01dh, 070h, 070h, 070h, 070h, 070h, 01dh, 0d3h, 070h, 08bh, 08bh, 071h, 08bh, 01dh, 08bh, 08bh, 08bh, 04h, 08bh, 04h, 04h, 08bh, 01dh, 04h, 04h, 01dh, 070h, 070h, 073h
             db 04h, 08bh, 070h, 01dh, 08bh, 070h, 070h, 08bh, 070h, 01dh, 070h, 070h, 070h, 070h, 08bh, 08bh, 01dh, 070h, 04h, 08bh, 070h, 073h, 070h, 04h, 070h, 01dh, 01dh, 01dh, 01dh, 08bh, 04h, 08bh
             db 04h, 04h, 04h, 01dh, 04h, 04h, 04h, 04h, 04h, 01dh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 070h, 070h, 070h, 070h, 070h, 04h, 01dh, 08bh, 070h, 01dh, 04h, 04h, 08bh
             db 04h, 04h, 04h, 01dh, 04h, 04h, 04h, 04h, 04h, 01dh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 028h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 01dh, 070h, 070h, 01dh, 04h, 04h, 08bh
             db 0bbh, 0bbh, 0bbh, 01dh, 0bbh, 0b8h, 0b8h, 0bbh, 0d2h, 01dh, 073h, 0bbh, 073h, 073h, 073h, 070h, 070h, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 01dh, 04h, 04h, 04h, 04h, 04h, 01dh
             db 0d3h, 0b8h, 0b8h, 01dh, 073h, 0d3h, 0bbh, 073h, 070h, 01dh, 073h, 08bh, 04h, 08bh, 08bh, 070h, 01dh, 0bbh, 0bbh, 0d2h, 0bbh, 0bbh, 0d3h, 070h, 073h, 01dh, 04h, 04h, 04h, 04h, 01dh, 028h
             db 04h, 04h, 01dh, 01dh, 01dh, 04h, 04h, 04h, 01dh, 01dh, 01dh, 04h, 08bh, 071h, 070h, 070h, 01dh, 0d2h, 0bbh, 070h, 073h, 08bh, 08bh, 070h, 01dh, 01dh, 01dh, 01dh, 01dh, 01dh, 01dh, 04h
             db 08bh, 08bh, 08bh, 08bh, 04h, 08bh, 08bh, 04h, 08bh, 08bh, 04h, 04h, 04h, 04h, 04h, 08bh, 04h, 04h, 04h, 04h, 08bh, 08bh, 073h, 070h, 073h, 073h, 070h, 070h, 070h, 070h, 0b8h, 0bbh
             db 070h, 0d3h, 070h, 073h, 0d3h, 0d3h, 0d3h, 073h, 08bh, 08bh, 08bh, 04h, 04h, 04h, 070h, 04h, 08bh, 08bh, 08bh, 070h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 070h, 073h, 0d3h, 0bbh
             db 08bh, 08bh, 070h, 08bh, 08bh, 070h, 070h, 08bh, 070h, 08bh, 070h, 070h, 073h, 070h, 073h, 073h, 0d3h, 073h, 08bh, 04h, 04h, 070h, 070h, 04h, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h
             db 070h, 070h, 070h, 070h, 08bh, 070h, 070h, 08bh, 070h, 08bh, 070h, 08bh, 04h, 08bh, 08bh, 08bh, 070h, 070h, 08bh, 070h, 073h, 070h, 070h, 070h, 073h, 070h, 04h, 04h, 070h, 070h, 08bh, 08bh
             db 0bbh, 0bbh, 0b8h, 0bbh, 073h, 0bbh, 0b8h, 0d3h, 0d3h, 070h, 08bh, 04h, 04h, 04h, 04h, 04h, 08bh, 08bh, 08bh, 070h, 08bh, 08bh, 08bh, 070h, 08bh, 070h, 073h, 070h, 0d3h, 070h, 08bh, 04h
             db 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 0d3h, 0b8h, 0d3h, 0bbh, 0b8h, 073h, 0bbh, 073h, 070h, 070h, 04h, 04h, 04h, 08bh, 070h, 070h, 08bh, 04h, 070h, 08bh, 08bh, 070h, 0d3h
             db 04h, 04h, 028h, 04h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 04h, 04h, 028h, 04h, 04h, 070h, 0d3h, 0bbh, 073h, 0bbh, 0b8h, 070h, 08bh, 04h, 04h, 04h, 070h, 070h, 04h, 04h
             db 04h, 04h, 04h, 04h, 04h, 04h, 04h, 028h, 028h, 04h, 04h, 04h, 04h, 04h, 028h, 028h, 028h, 028h, 028h, 028h, 04h, 028h, 04h, 071h, 0d3h, 0d3h, 073h, 0b8h, 073h, 070h, 070h, 04h
             db 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 028h, 028h, 028h, 028h, 028h, 04h, 028h, 028h, 028h, 04h, 028h, 04h, 04h, 04h, 0b8h, 0b8h, 0bbh
             db 070h, 04h, 08bh, 08bh, 070h, 08bh, 070h, 070h, 08bh, 04h, 04h, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 028h, 04h, 028h, 028h, 04h, 028h, 04h, 04h
             db 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 070h, 08bh, 08bh, 070h, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 028h, 04h, 028h, 028h
             db 070h, 070h, 070h, 08bh, 08bh, 070h, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 04h, 04h, 04h, 08bh, 070h, 070h, 070h, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h
             db 070h, 0d3h, 073h, 070h, 070h, 073h, 073h, 070h, 070h, 070h, 070h, 070h, 08bh, 08bh, 08bh, 04h, 04h, 04h, 04h, 04h, 08bh, 04h, 04h, 04h, 070h, 08bh, 08bh, 070h, 04h, 04h, 04h, 04h
             db 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 04h, 04h, 070h, 070h, 070h, 073h, 073h, 073h, 070h, 070h, 04h, 070h, 08bh, 08bh, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h
INST5_SPRITE db 32, 40
             db 04h, 08bh, 070h, 070h, 08bh, 08bh, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h
             db 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 08bh, 070h, 070h, 08bh, 070h, 08bh, 070h, 070h, 08bh, 08bh, 08bh, 04h, 04h, 04h, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h
             db 04h, 04h, 04h, 04h, 04h, 04h, 028h, 04h, 04h, 04h, 08bh, 08bh, 070h, 04h, 04h, 04h, 04h, 04h, 08bh, 08bh, 070h, 070h, 08bh, 08bh, 070h, 070h, 08bh, 08bh, 070h, 070h, 08bh, 08bh
             db 08bh, 073h, 070h, 070h, 070h, 070h, 08bh, 070h, 070h, 070h, 070h, 070h, 04h, 04h, 04h, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 04h, 04h, 04h, 04h, 04h, 08bh, 070h
             db 073h, 070h, 073h, 070h, 070h, 073h, 0d3h, 073h, 070h, 070h, 070h, 070h, 08bh, 04h, 070h, 070h, 070h, 04h, 08bh, 08bh, 08bh, 04h, 08bh, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h
             db 04h, 04h, 08bh, 04h, 04h, 04h, 071h, 070h, 0d3h, 073h, 073h, 070h, 073h, 073h, 070h, 070h, 070h, 073h, 070h, 070h, 070h, 070h, 08bh, 08bh, 070h, 070h, 08bh, 04h, 04h, 08bh, 08bh, 08bh
             db 073h, 073h, 073h, 073h, 070h, 08bh, 070h, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 070h, 070h, 070h, 073h, 073h, 070h, 070h, 070h, 073h, 073h, 073h, 073h, 073h
             db 070h, 073h, 073h, 070h, 073h, 070h, 073h, 073h, 0d3h, 073h, 073h, 0d3h, 0b8h, 0b8h, 073h, 08bh, 08bh, 08bh, 08bh, 08bh, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 04h, 04h
             db 070h, 070h, 073h, 073h, 070h, 073h, 073h, 073h, 073h, 070h, 070h, 070h, 0d3h, 0d3h, 070h, 070h, 070h, 073h, 0d3h, 0d3h, 0b8h, 0d3h, 073h, 073h, 073h, 070h, 0d3h, 0d3h, 0d3h, 0d3h, 0d3h, 073h
             db 0b8h, 0b8h, 0bbh, 0bbh, 073h, 0bbh, 073h, 0bbh, 073h, 073h, 0bbh, 073h, 073h, 0d3h, 0d3h, 073h, 070h, 070h, 073h, 073h, 070h, 070h, 073h, 073h, 073h, 073h, 073h, 073h, 073h, 070h, 070h, 073h
             db 073h, 070h, 073h, 070h, 073h, 073h, 070h, 0d3h, 073h, 073h, 070h, 073h, 0d2h, 0b8h, 0bbh, 0bbh, 0bbh, 0bbh, 0bbh, 0bbh, 0bbh, 073h, 073h, 0b8h, 0b8h, 0bbh, 0bbh, 0bbh, 0bbh, 0bbh, 0bbh, 073h
             db 04h, 04h, 04h, 04h, 08bh, 070h, 070h, 0d3h, 073h, 0b8h, 0d3h, 0d3h, 073h, 070h, 073h, 070h, 073h, 073h, 070h, 0b8h, 0b8h, 0bbh, 0bbh, 0b8h, 0bbh, 0bbh, 0bbh, 0b8h, 073h, 073h, 070h, 070h
             db 04h, 04h, 08bh, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 073h, 070h, 073h, 073h, 073h, 073h, 073h, 0d3h, 073h, 073h, 073h, 073h, 070h, 070h, 08bh
             db 04h, 04h, 04h, 04h, 04h, 04h, 04h, 028h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 04h, 04h, 08bh, 04h, 04h, 04h, 04h, 04h
             db 070h, 070h, 070h, 08bh, 04h, 04h, 04h, 04h, 04h, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 028h, 04h, 04h, 04h, 028h, 028h, 028h, 028h, 04h, 04h, 04h, 028h, 04h, 04h
             db 04h, 08bh, 04h, 04h, 04h, 04h, 070h, 070h, 070h, 073h, 08bh, 08bh, 08bh, 070h, 070h, 08bh, 08bh, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 070h, 070h, 08bh, 070h, 070h, 070h
             db 04h, 04h, 08bh, 01dh, 01dh, 01dh, 01dh, 070h, 01dh, 071h, 04h, 04h, 04h, 01dh, 01dh, 01dh, 01dh, 01dh, 071h, 01dh, 08bh, 070h, 070h, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h
             db 070h, 08bh, 01dh, 04h, 04h, 04h, 04h, 01dh, 01dh, 04h, 08bh, 08bh, 01dh, 04h, 04h, 04h, 04h, 04h, 01dh, 01dh, 08bh, 08bh, 08bh, 08bh, 04h, 04h, 04h, 04h, 04h, 08bh, 08bh, 08bh
             db 070h, 073h, 01dh, 08bh, 070h, 070h, 08bh, 070h, 01dh, 08bh, 08bh, 01dh, 04h, 04h, 04h, 08bh, 08bh, 08bh, 04h, 01dh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 04h, 04h
             db 073h, 070h, 01dh, 0d3h, 073h, 073h, 070h, 070h, 08bh, 08bh, 070h, 01dh, 070h, 070h, 070h, 08bh, 070h, 070h, 073h, 073h, 070h, 070h, 070h, 070h, 08bh, 070h, 070h, 070h, 070h, 070h, 070h, 073h
             db 070h, 04h, 04h, 01dh, 01dh, 01dh, 073h, 0d3h, 070h, 073h, 0d3h, 01dh, 073h, 070h, 070h, 08bh, 08bh, 08bh, 070h, 070h, 070h, 070h, 070h, 070h, 070h, 070h, 070h, 070h, 070h, 070h, 070h, 04h
             db 08bh, 070h, 071h, 08bh, 04h, 04h, 01dh, 01dh, 04h, 08bh, 070h, 01dh, 070h, 073h, 073h, 073h, 070h, 070h, 073h, 073h, 0d3h, 070h, 073h, 070h, 070h, 070h, 070h, 0d3h, 0d3h, 0d3h, 0b8h, 073h
             db 070h, 070h, 073h, 08bh, 08bh, 08bh, 08bh, 04h, 01dh, 071h, 08bh, 01dh, 08bh, 08bh, 04h, 04h, 04h, 04h, 08bh, 070h, 070h, 070h, 070h, 070h, 070h, 070h, 073h, 070h, 070h, 08bh, 070h, 070h
             db 04h, 08bh, 01dh, 04h, 08bh, 08bh, 08bh, 070h, 01dh, 08bh, 070h, 01dh, 08bh, 08bh, 04h, 04h, 070h, 08bh, 04h, 01dh, 04h, 04h, 04h, 04h, 08bh, 08bh, 070h, 04h, 04h, 04h, 04h, 08bh
             db 04h, 04h, 01dh, 01dh, 04h, 04h, 070h, 070h, 01dh, 08bh, 04h, 04h, 01dh, 070h, 070h, 070h, 08bh, 04h, 01dh, 08bh, 08bh, 08bh, 04h, 04h, 08bh, 08bh, 070h, 08bh, 04h, 04h, 08bh, 070h
             db 04h, 04h, 01dh, 04h, 01dh, 01dh, 01dh, 01dh, 04h, 04h, 04h, 04h, 08bh, 01dh, 01dh, 01dh, 01dh, 01dh, 08bh, 08bh, 04h, 04h, 08bh, 08bh, 08bh, 08bh, 08bh, 070h, 04h, 04h, 04h, 08bh
             db 0bbh, 0b8h, 0d3h, 073h, 070h, 04h, 04h, 04h, 04h, 04h, 04h, 028h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 08bh, 08bh, 08bh, 08bh, 08bh, 071h, 070h, 08bh, 04h, 04h
             db 070h, 070h, 08bh, 070h, 073h, 0bbh, 0bbh, 0bbh, 073h, 070h, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 028h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h
             db 070h, 08bh, 070h, 08bh, 073h, 073h, 070h, 04h, 08bh, 073h, 0bbh, 0bbh, 0bbh, 0bbh, 073h, 073h, 070h, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h
             db 04h, 04h, 04h, 04h, 04h, 04h, 04h, 070h, 070h, 073h, 0d2h, 070h, 08bh, 070h, 070h, 0d3h, 073h, 0bbh, 0bbh, 0bbh, 0bbh, 0bbh, 0b8h, 0bbh, 0bbh, 073h, 0bbh, 073h, 073h, 0b8h, 0bbh, 073h
             db 04h, 070h, 04h, 08bh, 070h, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 070h, 073h, 070h, 0d3h, 073h, 070h, 070h, 070h, 08bh, 04h, 08bh, 070h, 08bh, 08bh, 070h, 070h, 070h, 04h, 08bh, 073h
             db 08ah, 0d3h, 0d3h, 08bh, 04h, 04h, 070h, 04h, 08bh, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 08bh, 08bh, 070h, 073h, 070h, 070h, 073h, 073h, 073h, 070h, 070h, 08ah, 073h, 070h
             db 070h, 08bh, 08bh, 070h, 073h, 070h, 073h, 073h, 070h, 08bh, 04h, 04h, 08bh, 08bh, 070h, 08bh, 08bh, 070h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h
             db 04h, 070h, 070h, 070h, 04h, 08bh, 070h, 08bh, 08bh, 070h, 070h, 0b8h, 073h, 073h, 073h, 0d3h, 070h, 08bh, 04h, 08bh, 04h, 070h, 070h, 08bh, 08bh, 08bh, 08bh, 08bh, 070h, 08bh, 070h, 08bh
             db 0b8h, 073h, 070h, 08bh, 04h, 04h, 04h, 08bh, 08bh, 070h, 04h, 04h, 04h, 08bh, 08bh, 08bh, 070h, 073h, 070h, 0d3h, 073h, 070h, 073h, 073h, 073h, 0b8h, 0d3h, 073h, 070h, 070h, 073h, 070h
             db 04h, 070h, 0d3h, 073h, 073h, 0bbh, 0b8h, 070h, 070h, 08bh, 08bh, 04h, 04h, 070h, 070h, 08bh, 08bh, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 070h, 070h, 070h, 08bh, 04h, 08bh, 04h
             db 028h, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 0b8h, 0d3h, 073h, 0b8h, 0d3h, 0b8h, 073h, 073h, 073h, 070h, 070h, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 08bh, 04h, 08bh, 04h, 04h, 070h
             db 028h, 04h, 028h, 04h, 028h, 028h, 028h, 028h, 028h, 028h, 04h, 04h, 04h, 04h, 04h, 04h, 070h, 073h, 0d3h, 073h, 0d3h, 073h, 0b8h, 0b8h, 0bbh, 0bbh, 0bbh, 073h, 0d3h, 073h, 0b8h, 070h
             db 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 028h, 04h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 028h, 04h, 04h, 04h, 04h, 028h, 028h, 028h, 028h, 028h, 028h, 028h
             db 08bh, 08bh, 08bh, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 04h, 028h, 028h, 028h, 028h, 028h, 028h, 04h, 028h, 028h, 028h, 04h, 04h, 04h, 04h
WATER0_SPRITE db 32, 32
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 00h, 00h, 00h, 0dh, 0dh, 0dh, 01h, 01h, 0dh, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 00h, 00h, 00h, 01dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 00h, 01dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 00h, 01dh, 01dh, 0dh, 0dh, 01h, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 00h, 01dh, 01dh, 01dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 01h, 0dh, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 0dh, 0dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 01h, 01h, 0dh, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 00h, 01dh, 0dh, 0dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 0dh, 0dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 0dh, 0dh, 01h, 0dh, 01h, 0dh, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 0dh, 0dh, 0dh, 01h, 0dh, 01h, 0dh, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 0dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h

WATER1_SPRITE db 32, 32
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 0dh, 0dh, 0dh, 0dh, 0dh, 0dh, 0dh, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 00h, 01dh, 01dh, 0dh, 0dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 00h, 0dh, 0dh, 0dh, 0dh, 0dh, 0dh, 0dh, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 00h, 01dh, 0dh, 0dh, 0dh, 01h, 01h, 0dh, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 00h, 01dh, 00h, 01dh, 0dh, 0dh, 0dh, 0dh, 0dh, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 00h, 00h, 0dh, 0dh, 0dh, 0dh, 0dh, 0dh, 0dh, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 00h, 00h, 01dh, 0dh, 0dh, 0dh, 0dh, 0dh, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 0dh, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 0dh, 01h, 0dh
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 00h, 0dh, 0dh, 0dh, 0dh, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 00h, 01dh, 01dh, 0dh, 0dh, 0dh, 0dh
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 00h, 01dh, 0dh, 0dh, 0dh, 0dh
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 01dh, 0dh, 0dh, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 00h, 01dh, 0dh, 0dh
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 00h, 0dh, 0dh
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 00h, 01dh, 0dh
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 00h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h

WATER2_SPRITE db 32, 32
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 0dh, 0dh, 01h, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 0dh, 0dh, 0dh, 01h, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01dh, 0dh, 0dh, 0dh, 01h, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 01dh, 01dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01dh, 01dh, 01dh, 01dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01dh, 01dh, 01dh, 01dh, 01dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01dh, 01dh, 01dh, 00h, 01dh, 01dh, 01h, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01dh, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 01dh, 01dh, 00h, 01dh, 01dh, 01dh, 01dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 01dh, 01dh, 01dh, 01dh, 01dh, 01dh, 01dh, 01h, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 01dh, 01dh, 01h, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 01dh, 01dh, 01dh, 00h, 00h, 00h, 01dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 00h, 01dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 01dh, 00h, 01dh, 00h, 00h, 01dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 00h, 00h, 01dh, 01dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h

WATER3_SPRITE db 32, 32
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 00h, 01dh, 01dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 00h, 01dh, 0dh, 0dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 0dh, 0dh, 01h, 01h, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 0dh, 0dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 00h, 01dh, 0dh, 0dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 0dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 00h, 00h, 01dh, 01dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 01h, 01h, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 0dh, 0dh, 01h, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 01h, 01h, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 0dh, 0dh, 01h, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 0dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 00h, 00h, 00h, 00h, 0dh, 0dh, 0dh, 0dh, 01h, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 0dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 01dh, 01dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 01h, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 01dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 01dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 0dh, 01h, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 01h, 01h, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 01h, 01h, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 01dh, 01dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h

WATER4_SPRITE db 32, 24
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 00h, 01dh, 01dh, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 00h, 01dh, 01dh, 01dh, 01dh, 01dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 00h, 00h, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 0dh, 01h, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 01dh, 00h, 00h, 00h, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 01dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 00h, 01dh, 01dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01h, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 0dh, 0dh, 01h, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 01dh, 00h, 00h, 00h, 0dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 0dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 00h, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 0dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 01h, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 0dh, 01h, 01h, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 0dh, 0dh, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 00h, 00h, 00h, 00h, 00h, 00h, 00h, 01dh, 01dh, 01dh, 0dh, 0dh, 01h, 0dh, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
DEEP_SPRITE db 32, 32
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
              db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
DEEP_SMALL_SPRITE db 32, 24
            db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
            db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
            db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
            db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
            db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
            db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
            db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
            db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
            db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
            db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
            db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
            db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
            db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
            db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
            db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
            db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
            db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
            db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
            db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
            db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
            db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
            db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
            db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h
            db 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h, 01h

.code
; XORs the sprite bitmap with whatever was there before, meaning that we can easily restore the background, by XORing again
; Careful: Showing the sprite (calling this function) to the same position twice will REMOVE it
; Register Params Expected:
; 	DH : X Chunk to draw at
; 	DL : Y Chunk to draw at 
;  CX : Sprite key to draw
ShowSprite PROC far
	; Non-Parameter registers used that need to be saved as they are used here: AX, BX, DI, SI
	push ax 
	push bx
	push di
	push si
	push ds   

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
	pop ds
	pop si
	pop di
	pop bx
	pop ax

	ret
ShowSprite ENDP
