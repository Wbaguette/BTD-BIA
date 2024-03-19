.model small
.stack 200h ; 512 bytes (book recommended it ¯\_(ツ)_/¯)
; DOCS - https://stanislavs.org/helppc/idx_interrupt.html 

include shapes.inc
include const.inc
include cursor.inc
include stage.inc
include macros.inc

.code
main PROC
    setup ;set video mode 

    call InitStage
    call DrawCursor
    
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
        jmp awaitkey ; space was not pressed
    
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
