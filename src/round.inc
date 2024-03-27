; The include file for bloon mechanics implementation
; Author: Jean-Pierre Derbes

.data
curr_round dw 0

bloon_struc_size db 7
queue_head dw 0 ; Index of the top of the queue
alive_bloons_head dw 0 ; Index of the top of the alive bloons list 



alive_bloons BLOON 50 DUP(<>)



; Bloon queues for rounds 
r1_queue_length dw 3
r1_queue BLOON <RED_BLOON, 0, 1, 0, 1>, <RED_BLOON, 0, 1, 1, 1>, <RED_BLOON, 0, 1, 2, 1>



queue_registry dw OFFSET r1_queue

.code
; Every frame check if we need to spawn a balloon 
; Expected register params:
;  CX : the current frame number
;  BX : the round number 
spawn_bloon PROC far
   push ds 
   push ax
   push dx
   push di
   push si

   mov ax, @data
   mov ds, ax

   ; First check if its the same round
   cmp bx, curr_round
   je same_round
   mov curr_round, bx ; If they are not equal then set the curr_round number to be BX
   mov queue_head, 0  ; Reset the queue head
   mov alive_bloons_head, 0 ; Reset the queue head



   same_round:
   ; Find the round queue that corresponds to the current round 
   shl bx, 1 
   add bx, OFFSET queue_registry
   mov bx, ds:[bx]       
   ; Now BX contains the location in memory of the beginning of the round array
   mov ax, ds:[bx - 2]
   ; Now AX contains length of the round array
   
   ; Bloon queue head is an index in the round queue that we need to start looking at 
   
   push ax

   mov ax, queue_head
   xor dh, dh
   mov dl, bloon_struc_size
   mul dl

   add bx, ax   ; Place yourself at where you actually need to start looking 
   
   pop ax


   ; Iterate through the round array and check if we need to spawn a bloon, exit iteration once we have found one
   ; CX : current frame number
   ; BX : offset of the start of the bloon array 
   ; AX : length of array
   mov di, ax ; store ax in di, idk where else to put it
   sub ax, queue_head ; Number of iterations to do, we don't have to rescan the whole array if we have already spawned stuff in
   iter:
      cmp ax, 0 
      je iter_done
      ; We need to extract the timeout value from each bloon
      add bx, 4 ; The timeouts are located 4 bytes into the struct
      mov dx, ds:[bx] ; Get the timeout value 
      cmp dx, cx ; Is this timeout value equal to the frame number? 
      je need_to_spawn ; If same value then we need to spawn this bloon in this frame


      add bx, 2 ; Scan the "word", add 2 so that the next + 4 aligns properly into the next bloon struct
      dec ax 
      jmp iter
   
   ; If we jump here it means that we need to spawn a bloon in this frame at path position 1
   need_to_spawn:
      sub di, ax ; (Length of the array) - (index of match) = Index to start at for next frame iteration
      inc di ; Add one or else you're off by one
      mov queue_head, di ; Add to the queue head           if those dont work then try 'add'        

      ; FIXME: Potentially need to check if there is a bloon already here? 
  

      

      ; We need to mark this bloon as alive by changing its state and by copying it into the 
      ;  alive_bloons array
      ; The way we know where to write to in this pre-allocated buffer is by using a "head", 
      ;  this keeps track of the index in the array where an available position is to write
      ; Also need to move its pathIndex to the start of the path 

      mov ax, alive_bloons_head
      xor dh, dh
      mov dl, bloon_struc_size
      mul dl
      ; Now AX contains the number of bytes from the beginning of the array where we can start writing to
      mov di, ax ; Place yourself at where you actually need to start looking in alive bloons 
      xor ch, ch
      mov cl, bloon_struc_size ; 7 bytes to copy
      sub bx, 4 ; Sub 4 bytes to align back to beginning of struct boundary
      mov si, bx ; SI contains start of bloon data we need to copy

      ; Before copying we must update the struct fields : pathIndex and state 
      inc ds:[si + BLOON.pathIndex]   ; + 1 path index 
      dec ds:[si + BLOON.state]       ; Bloons start off in a "dead state" which is 1, "alive" state is 0. so dec 1 works


      ; Time to copy some bytes over ! 
      add di, OFFSET alive_bloons ; DI now contains where we need to start copying to
      xor ax, ax          
      copy_bytes:         ;  [04 00] [00] [01] [00 00] [01]   <RED_BLOON, 0, 1, 0, 1>
         mov al, ds:[si]
         mov ds:[di], al
         inc si 
         inc di
      loop copy_bytes

      inc alive_bloons_head ; We wrote one bloon, so now our head needs to point to one index later 
      


  
      


   iter_done:
      pop si
      pop di
      pop dx
      pop ax
      pop ds
      ret
spawn_bloon ENDP


; This will draw all alive bloons 
; Highest level bloon should be drawn on a tile if theres more than one bloon 
; Check if a bloon is alive or dead 
draw_bloons PROC
   

draw_bloons ENDP



; Checks the alive array, for every alive bloon, checks their speed and if they need to move
; Use   FrameNumber / BloonSpeed , if remainder = 0, it needs to move, except for frame 0
;  Checks if exits map; remove from alive and then 

; Expected register params:
;  CX : the current frame number
move_alive_bloons PROC
   push ax
   push bx
   push dx

   cmp cx, 0 ; If frame 0 then don't bother
   je done

   ; Iterate through alive bloons
   mov ax, alive_bloons_head ; alive_bloons_head tells us how many bloons are alive
   mov bx, OFFSET alive_bloons ; point BX to the beginning of the alive_bloons array 
   iter_alive:
      cmp cx, 0
      je done

      xor dh, dh
      mov dl, ds:[bx + BLOON.speed]     ; dl now has the bloon speed
      
      push ax 
      mov ax, cx 
      div dx          ;  AX: Quotient,    DX: Remainder 
      cmp dx, 0       ; If remainder = 0, then the bloon needs to move
      pop ax     
      jne dont_move ; Fall through if remainder = 0, so you have to move this bloon
      cmp ds:[bx + BLOON.pathIndex], PATH_LENGTH - 1 ; is bloon on the last tile in path?
      jne foo ; Fall through if we are on the last tile 
      ; Update the players life 
      ; Make the sprite's state "completed"
      ; Remove from alive queue (TODO:  when drawing bloons from alive queue only draw ones that have state alive)
      foo: 
      inc ds:[bx + BLOON.pathIndex]




      


      dont_move:
      add bx, bloon_struc_size ; Align ourselves to next bloon struct
      dec ax
      jmp iter_alive



   done:
      pop dx 
      pop bx
      pop ax
      ret
move_alive_bloons ENDP   
