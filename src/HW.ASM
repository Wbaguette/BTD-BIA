.model small
.stack 100h

include shapes.inc

.data
message db "Hello World", "$"
.code
main proc
    mov ax, seg message
    mov dx, offset message

    call print_hw
    
    mov   ax,4c00h
    int   21h
main endp
end main