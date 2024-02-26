.code
print_hw proc far
      mov ds, ax
      mov ah, 09h
      int 21h
      ret
print_hw endp