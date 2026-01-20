It is a simple c++ logger that save on an .txt file the last time (hour and day) and acess on your pc was made . It must be setted as a startup programm i suggest using the cmd trouhg this command
reg add HKCU\Software\Microsoft\Windows\CurrentVersion\Run /v NomeApp /t REG_SZ /d "PATH" /f   
Change PATH with the directory of the .exe
