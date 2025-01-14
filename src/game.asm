.model small
.stack 200h ; 512 bytes for stack 
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
    mov lives, 8  ; This cannot be > 8, there is no room for more than 8 on top of screen 

    call InitStage ; onetime background initialization
    call DrawCursor ; onetime cursor intitialization
    call DrawMonkeyBar ; onetime hud init

    mov ax, lives ; Show initial lives
    call DrawLives

    start_round:
    jmp awaitkey

    gameloop:        
        call draw_bloons  ; Clear bloons 

        mov ax, lives     ; Clear lives
        call DrawLives
        
        mov cx, frame_counter
        call PopBloons

        mov cx, frame_counter
        call move_alive_bloons ; returns amount of damage to do to player in cx 
        sub lives, cx

        cmp lives, 0 
        jg continueGame           ; fall through if the player is dead
        exit_err                  ; Exit game on loss with error in order for bat file to work properly


        continueGame:
        mov cx, frame_counter
        mov bx, round_number
        call spawn_bloon

        mov ax, lives   ; Redraw lives
        call DrawLives

        call draw_bloons    ; Draw where they should be 

        call IsRoundOver
        cmp dl, 1
        je awaitkey ; round over
    
        inc frame_counter ; new frame and start again! the game  goes on
        call Sleep
        jmp gameloop

    awaitkey: ; terminates program on key press
        mov ah, 10h
        int 16h
        cmp al, 32 ; space key is pressed, start Round
        je startRound
        cmp al, 27 ; ESC, terminate
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

    ex:
        exit           ; Normal exit 
main ENDP
END main 
