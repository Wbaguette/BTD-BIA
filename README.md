# YOU NEED DOSBOX TO RUN THIS 🎈
https://www.dosbox.com/

### Instructions: 
1. You need to download the compiler and linker. Place masm.exe and link.exe in 8086 folder. Mediafire link: https://www.mediafire.com/file/mm7cjztce9efj4w/8086.zip (works on our machines). DOSBOX works on Unix based and Windows machines. 

2. Setup the DOSBOX conf file. In DOSBOX conf file do something like this under the autoexec portion: 
   ```
   [autoexec]
   # Lines in this section will be run at startup.
   # You can put your MOUNT lines here.
   MOUNT C "AbsolutePath/To/Where/The/Project/Is"
   C:
   set PATH=%PATH%;C:\8086\
   cd src
   ```
Now when you open up DOSBOX, it should place you in the src/ directory of the project. 

3. To compile the whole game, use ```builda.bat```, go grab some food 'cause this will take a bit. <br>
4. Run the whole game using ```play.bat```. 