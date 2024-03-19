.model small
.stack 200h ; 512 bytes (book recommended it ¯\_(ツ)_/¯)
; DOCS - https://stanislavs.org/helppc/idx_interrupt.html 

include shapes.inc
include const.inc
include cursor.inc
include stage.inc
include macros.inc
include bloon.inc

.data 
    red1 BLOON <RED_BLOON, 0>
.code
main PROC
    setup ;set video mode 

    call InitStage ; onetime background initialization
    call DrawCursor ; onetime cursor intitialization

    gameloop:
        xor bx, bx
        mov bl, red1.pathIndex
        lea dx, [PATH+bx]
        mov cx, red1.level
        call ShowSprite
    
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
        xor bh, bh
        mov bl, red1.pathIndex
        lea dx, [PATH+bx]
        mov cx, red1.level
        ; call ShowSprite ; delete current bloon

        add red1.pathIndex, 2 ; move bloon
        ; mov ax, @data
        ; mov ds, ax
        ; mov bx, OFFSET red1

        ; call Step ; move bloon to  next position
        jmp gameloop
        ; jmp awaitkey

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
