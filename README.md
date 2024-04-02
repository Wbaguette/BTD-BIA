# YOU NEED DOSBOX TO RUN THIS 🎈

### DOSBOX Prereqs: 
1. 8086 masm.exe and link.exe in 8086 folder. Mediafire link: https://www.mediafire.com/file/mm7cjztce9efj4w/8086.zip (works on our machines) 


2. In DOSBOX conf file do something like this under the autoexec portion: 
   ```
   [autoexec]
   # Lines in this section will be run at startup.
   # You can put your MOUNT lines here.
   MOUNT C "AbsolutePath/To/Where/The/Project/Is"
   C:
   set PATH=%PATH%;C:\8086\
   cd src
   ```


Compile in DOSBOX with builda.bat (This may take a minute) <br>
Run with play.bat
