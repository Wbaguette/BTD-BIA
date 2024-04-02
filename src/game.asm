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
include util.inc
include round.inc
include hud.inc

.data?
    frame_counter dw ?
    round_number dw ?
    lives dw ?

.code
main PROC
    setup ; Set video mode, move VRAM to ES, point DS to .data

    mov frame_counter, 0 
    mov round_number, -1 ; first round not started yet
    mov lives, 3  ; Change to some higher number later 

    call InitStage ; onetime background initialization
    call DrawCursor ; onetime cursor intitialization
    call DrawMonkeyBar ; onetime hud init
    call DrawLives ; update live counter

    start_round:
    jmp awaitkey

    gameloop:        
        call draw_bloons  ; Clear bloons 
        
        mov cx, frame_counter
        call PopBloons

        mov cx, frame_counter
        call move_alive_bloons ; returns amount of damage to do to player in cx 
        sub lives, cx

        cmp lives, 0 
        jg continueGame           ; fall through if the player is dead
        exit_err ; Exit game on loss, good enough for now

        continueGame:
        mov cx, frame_counter
        mov bx, round_number
        call spawn_bloon

        call draw_bloons    ; Draw where they should be 

        ; Is the round over??? Here's some debug printing! (incompatible wiith frame counter)
        ; xor ax, ax
        ; xor dx, dx
        call IsRoundOver
        cmp dl, 1
        je awaitkey ; round over
        ; add dl, '0'
        ; mov ah, 2
        ; int 21h

        ; cmp dl, 0 ; Is the round over?
        ; jne awaitkey ; The round is over
        inc frame_counter ; new frame and start again! the game  goes on
        call Sleep
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
        cmp al, '1'       ; Press 1 when you want to place down a monkey!
        je placeMky       
        cmp al, 'c'       ; Press C when you want to start the game
        je startRound
        jmp awaitkey ; space was not pressed
        
    startRound:
        inc round_number
        mov frame_counter, 0
        jmp gameloop

    placeMky:
        call GetPos
        mov ax, dx
        call PlaceMonkey
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
        exit           ; Normal exit, just exits 
main ENDP
END main 
