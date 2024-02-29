; Exit the process successfully
exit macro
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

   mov ax, 0A000h
   mov es, ax
endm
