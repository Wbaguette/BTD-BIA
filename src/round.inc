; The include file for bloon mechanics implementation
; Author: Jean-Pierre Derbes

.data
curr_round dw 0

bloon_struc_size db 6
queue_head dw 0 ; Index of the top of the queue
alive_bloons_head dw 0 ; Index of the top of the alive bloons list 



alive_bloons BLOON 50 DUP(<>)



; Bloon queues for rounds 
r1_queue_length dw 3
r1_queue BLOON <RED_BLOON, 0, 1, 0>, <RED_BLOON, 0, 1, 1>, <RED_BLOON, 0, 1, 2>


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
      add queue_head, di ; Add to the queue head

      ; FIXME: Potentially need to check if there is a bloon already here? 
      ; mov dx, PATH 
      ; mov cx, ds:[bx] 
      ; call ShowSprite


      ; Now that the newly spawned in bloon has been drawn, we need to know its alive by adding it to the 
      ;  alive_bloons array
      ; The way we know where to write to in this pre-allocated buffer is by using a "head", 
      ;  this keeps track of the index in the array where an available position is to write


      mov ax, alive_bloons_head
      xor dh, dh
      mov dl, bloon_struc_size
      mul dl
      ; Now AX contains the number of bytes from the beginning of the array where we can start writing to
      mov di, ax ; Place yourself at where you actually need to start looking in alive bloons 
      xor ch, ch
      mov cl, bloon_struc_size ; 6 bytes to copy
      sub bx, 4 ; Sub 4 bytes to align back to beginning of struct boundary
      mov si, bx ; SI contains start of bloon data we need to copy
      add di, OFFSET alive_bloons ; DI now contains where we need to start copying to
      xor ax, ax
      copy_bytes:         ;  [04 00] [00] [01] [00 00]
         mov al, ds:[si]
         mov ds:[di], al
         inc si 
         inc di
      loop copy_bytes

      inc alive_bloons_head ; We wrote one bloon, so now our head needs to point to one index later 
      
      ; Now that the bloon has been added as alive, we need to draw it to the screen 
      mov dx, PATH
      mov cx, [di - 6]
      call ShowSprite
      

   iter_done:
      pop si
      pop di
      pop dx
      pop ax
      pop ds
      ret
spawn_bloon ENDP




; Checks the alive array, for every alive bloon, checks their speed and if they need to move
move_bloon PROC



   ret
move_bloon ENDP   
