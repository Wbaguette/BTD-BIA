.model small
.stack 200h

include macros.inc

.data
   VRAM equ 0A000h
   SHIFT equ 1
.code
main PROC
   setup
   mov ax, VRAM 
   mov es, ax

   mov dx, 10
   shl ax, SHIFT
   ; maybe u tried shifting 8 bits?
   shl bx, SHIFT
   ror ax, SHIFT



   


   
   
   exit
main ENDP

end main
