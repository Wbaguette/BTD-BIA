.data
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
   push cx

   mov ax, @data
   mov ds, ax

   ; Find the round queue that corresponds to the current round 
   shl bx, 1 
   add bx, OFFSET queue_registry
   mov bx, ds:[bx]       
   ; Now BX contains the location in memory of the beginning of the round array
   mov ax, ds:[bx - 2]
   ; Now AX contains length of the round array


   ; Iterate through the round array and check if we need to spawn a bloon, exit iteration once we have found one
   ; CX : current frame number
   ; BX : offset of the start of the bloon array 
   ; AX : length of array
   iter:
      cmp ax, 0 
      je iter_done
      ; We need to extract the timeout value from each bloon
      add bx, 4 ; The timeouts are located 4 bytes into the struct
      mov dx, ds:[bx] ; Get the value there
      cmp dx, cx
      je need_to_spawn


      add bx, 2 ; "Read the word", add two so that the next + 4 aligns properly into the next bloon struct
      dec ax 
      jmp iter
   
   need_to_spawn:
      ; If we jump here it means that we need to spawn a bloon in this frame at path position 1
      mov dx, PATH
      mov cx, ds:[bx - 4]
      call ShowSprite

   iter_done:
      pop cx 
      pop dx
      pop ax
      pop ds
      ret
spawn_bloon ENDP
