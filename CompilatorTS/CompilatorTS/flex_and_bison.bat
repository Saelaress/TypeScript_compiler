REM This command generates the file lexer.yy.c
win_flex lexer.l

REM This command generates the files parser.tab.c and parser.tab.h
win_bison -d parser.y

pause
