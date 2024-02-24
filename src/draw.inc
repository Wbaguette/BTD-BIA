enter_video_mode proc
      mov ah, 00h
      mov al, 13h
      int 10h ; 640x350 16-bit color mode