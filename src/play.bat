@echo off

..\..\target\exe\st.exe


IF errorlevel 1 goto exited
IF errorlevel 0 goto playgame

:playgame
..\..\target\exe\game.exe
IF errorlevel 1 goto gameover        
IF errorlevel 0 goto exited
goto done

:gameover
..\..\target\exe\go.exe
goto done

:exited
echo Exited.
goto done


:done