# YOU NEED DOSBOX TO RUN THIS 🎈

### DOSBOX Prereqs: <br>
1. 8086 masm.exe and link.exe in 8086 folder <br>
2. In DOSBOX conf file do something like this under the autoexec portion: <br>
  ``` 
      [autoexec]
      # Lines in this section will be run at startup.
      # You can put your MOUNT lines here.
      MOUNT C "AbsolutePath/To/Where/The/Project/Is"
      C:
      set PATH=%PATH%;C:\8086\
      cd src
   ```
   <br>
Compile in DOSBOX with builda.bat <br>
Run with play.bat
