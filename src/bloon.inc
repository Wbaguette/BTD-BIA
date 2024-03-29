BLOON struc
    level dw 1 ; sprite corresponds to level, this is the sprite key
    pathIndex db 0 ; an index corresponding to which element in the PATH this bloon is at
    speed db 10 ; Number of frames (gameloops) it takes to move 1 chunk

    timeout dw 0; Number of frames since the beginning of round this bloon should spawn
          
    state db 1  ; 0 = alive, 1 = dead, 2 = completed
    
    movedThisTick db 0 ; 0 = no, 1 = yes       Did the bloon move this tick, this is important for sprite drawing
BLOON ends
