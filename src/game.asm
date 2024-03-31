; Main game loop of our game :)
; Authors: Jean-Pierre Derbes, Vincent Quintero


.model small
.stack 200h ; 512 bytes (book recommended it ¯\_(ツ)_/¯)
; DOCS - https://stanislavs.org/helppc/idx_interrupt.html 

include shapes.inc
include const.inc
include cursor.inc
include stage.inc
include macros.inc
include monkey.inc
include screens.inc
include util.inc
include round.inc

.data 
    ; monkeys MONKEY 10 DUP(<?>)
    frame_counter dw 0
    round_number dw 0
    lives dw 150
.code
main PROC
    ; FIXME: Maybe add this ds pointing to data segment in setup macro
    mov ax, @data
	mov ds, ax
    setup ; Set video mode, move VRAM to ES

    call ShowTitle; Title screen

    call InitStage ; onetime background initialization
    call DrawCursor ; onetime cursor intitialization

    gameloop:
        ; Frame counting code
	    ; xor dx, dx
        ; xor ax, ax
        ; mov dx, frame_counter
        ; add dl, '0'
        ; mov ah, 2
        ; int 21h
        ; xor dx, dx    
        ; mov bh, 0        
        ; mov ah, 02h     
        ; int 10h
        
        call draw_bloons  ; Clear bloons 

        mov cx, frame_counter
        call move_alive_bloons ; returns amount of damage to do to player in cx 
        sub lives, 1 

        cmp lives, 0 
        jg continueGame           ; fall through if the player is dead
        
        ; TODO: Put game over sprite
        ;call GameOverScreen ; This will also handle exiting the game 
        ; jmp ex ; Exit game on loss, good enough for now
        jmp awaitkey

        continueGame:
        mov cx, frame_counter
        mov bx, round_number
        call spawn_bloon

        call draw_bloons    ; Draw where they should be 

        ; Is the round over??? Here's some debug printing! (incompatible wiith frame counter)
        xor ax, ax
        xor dx, dx
        call IsRoundOver
        add dl, '0'
        mov ah, 2
        int 21h

        cmp dl, 0 ; Is the round over?
        jne awaitkey ; The round is over
        inc frame_counter ; new frame and start again! the game  goes on
        jmp gameloop

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
        inc frame_counter
        jmp gameloop
        
    placeBloon:
        call GetPos
        mov cl, BLOON_RED
        call ShowSprite
        jmp awaitkey

    placeDart:
        ; call GetPos
        ; mov dart.chunk, dx ; place at cursor
        ; mov bx, OFFSET dart ; pass the monkey we're creating as a param
        ; mov dart.radius, 3 ; custom range yay
        ; call DrawMonkey
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
