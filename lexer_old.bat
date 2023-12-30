REM This command generates the file main.cpp
win_flex -omain.cpp lexer_old.l

REM This command generates the executable file main.exe
g++ -omain main.cpp

REM This command processes the file test.ts with the lexer, and produces the output file output.txt
main test.ts

pause
