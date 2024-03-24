.model small
.stack 200h ; 512 bytes (book recommended it ¯\_(ツ)_/¯)
; DOCS - https://stanislavs.org/helppc/idx_interrupt.html 

include shapes.inc
include const.inc
include cursor.inc
include stage.inc
include macros.inc
include bloon.inc
include round.inc

.data 
    frame_counter dw 0     

    red1 BLOON <RED_BLOON, 0>
.code
main PROC
    ; FIXME: Maybe add this ds pointing to data segment in setup macro
    mov ax, @data
	mov ds, ax
    setup ; Set video mode, move VRAM to ES

    call InitStage ; onetime background initialization
    call DrawCursor ; onetime cursor intitialization



    gameloop:
        mov cx, frame_counter
        mov bx, 0
        call spawn_bloon
        ; xor bh, bh
        ; mov bl, red1.pathIndex
        ; mov dx, [PATH+bx]
        ; mov cx, red1.level
        ; call ShowSprite
    
    awaitkey: ; terminates program on key press
        mov ah, 10h
        int 16h
        cmp al, 32 ; space key is pressed, terminate
        je ex
        cmp al, 'd'
        je selectRight
        cmp al, 'a'
        je selectLeft
        cmp al, 'w'
        je selectUp
        cmp al, 's'
        je selectDown
        cmp al, '1'
        je placeDart
        cmp al, 'b'
        je placeBloon 
        cmp al, 'c'
        je continloon
        jmp awaitkey ; space was not pressed
    
    continloon: 
        ; xor bh, bh ; clear top of bx
        ; mov bl, red1.pathIndex ; pathIndex is the index in the path array where the bloon is 
        ; mov dx, [PATH+bx]      ; load the coordinate 
        ; mov cx, red1.level
        ; call ShowSprite ; delete current bloon

        ; add red1.pathIndex, 2 ; move bloon
        

        mov ax, ds
        mov bx, OFFSET red1
        call Step ; move bloon to  next position


        inc frame_counter
        jmp gameloop

    placeBloon:
        call GetPos
        mov cl, RED_BLOON
        call ShowSprite
        jmp awaitkey

    placeDart:
        call GetPos
        mov cl, MONKEY
        call ShowSprite
        jmp awaitkey

    selectRight:
        call MoveRight
        jmp awaitkey

    selectLeft:
        call MoveLeft
        jmp awaitkey

    selectUp:
        call MoveUp
        jmp awaitkey

    selectDown:
        call MoveDown
        jmp awaitkey

    ex: ; terminates program
        exit
main ENDP
END main 
