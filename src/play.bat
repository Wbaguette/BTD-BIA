@echo off

..\..\target\exe\st.exe

IF errorlevel 1 goto exited

IF errorlevel 0 ..\..\target\exe\game.exe

:exited
echo Exited.
