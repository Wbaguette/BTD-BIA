; Exit the process successfully
exit macro
   xor ax, ax 
   mov ah, 4ch 
   int 21h 
endm

; 320x200 256color mode
setup macro 
   mov ah, 00h
   mov al, 13h 
   int 10h 

   mov ax, 0A000h
   mov es, ax
endm
