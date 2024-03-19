; Exit the process successfully, and return to text mode
exit macro
   xor ax, ax 
   mov ax, 3    
   int 10h

   xor ax, ax 
   mov ah, 4ch 
   int 21h 
endm

; Sets up 320x200 256color mode
; Also moves the VGA address into ES 
setup macro 
   mov ah, 00h
   mov al, 13h 
   int 10h      

   mov ax, VRAM
   mov es, ax
endm
