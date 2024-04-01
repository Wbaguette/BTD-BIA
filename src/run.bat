@REM Deprecated, use play.bat

masm game.asm ..\..\target\out\game.obj;
link ..\..\target\out\game.obj, ..\..\target\exe\game.exe;
..\..\target\exe\game.exe