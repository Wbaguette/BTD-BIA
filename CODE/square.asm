.model small
.stack

.code
    main proc
      mov ax,13h        
      int 10h             
      mov ax,0A000h        
      mov es,ax             
      mov ax,32010          
      mov di,ax             
      mov dl,4             
      int 10h
    main endp
end main