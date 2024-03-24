.data
alive_bloons BLOON 50 DUP(<>)
; Bloon queues for rounds 
r1_queue_length dw 10
r1_queue BLOON <RED_BLOON, 0, 1, 0>, <RED_BLOON, 0, 1, 1>, <RED_BLOON, 0, 1, 2>


queue_registry dw OFFSET r1_queue
length_registry dw OFFSET r1_queue_length

.code
; Every frame check if we need to spawn a balloon 
; Expected register params:
;  CX : the current frame number
;  BX : the round number 
spawn_bloon PROC far
   push ds 
   push ax
   push dx

   mov ax, @data
   mov ds, ax

   mov dx, bx ; Copy over data
   ; Find the round queue that corresponds to the current round 
   shl bx, 1 
   add bx, OFFSET queue_registry
   mov bx, ds:[bx]       
   ; Now BX contains the location in memory of the beginning of the round array
   mov ax, ds:[bx - 2]


   pop dx
   pop ax
   pop ds
spawn_bloon ENDP
