%option noyywrap
%option never-interactive

%{
/* Объявление глобальных переменных */
#include <stdio.h>
#include <typeinfo>
#include <iostream> 
using namespace std;
%}

%x COMMENT
%x STRING

decimal [-]?[0-9]+
bin [-]?0[bB][01]+
octal [-]?0[oO][0-7]+
hex [-]?0[xX][0-9a-fA-F]+
float [-]?([0-9]*\.)?[0-9]+([eE][-+]?[0-9]+)?+

/* Описание правил */
%%

%{ 
    char str[1000];
    char comment[1000];
%} /* Объявление локальных переменных */

\" {
    BEGIN(STRING);
    str[0] = 0; // зануляем переменную
}
<STRING>[^\\\"\n]+ {strcat(str, yytext);}
<STRING>\\n {strcat(str, "\n");}
<STRING>\\\\ {strcat(str, "\\");}
<STRING>\\\" {strcat(str, "\"");}
<STRING>\\x[0-9A-F]{2} {
    char* end, num[2];
    num[0] = (char)strtol(yytext+2, &end, 16);
    num[1] = 0;
    }
<STRING>\" {
    fprintf(yyout, "Found string: %s\n", str);
    BEGIN(INITIAL);
    }
<STRING>\n {printf("ERROR! Line break inside literal");}
<STRING><<EOF>> {printf("ERROR! No end comma");}


"/*" {
    BEGIN(COMMENT); 
    comment[0] = 0; // зануляем переменную
    }
<COMMENT>[^*]+ {strcat(comment, yytext);}
<COMMENT>"*"+[^*/] {strcat(comment, yytext);}
<COMMENT>"*"+"/" { 
    fprintf(yyout, "Found comment: %s\n", comment);
    BEGIN(INITIAL); 
    }


{decimal} { /* Число десятичное */
        fprintf(yyout, "Число: %s\n", yytext);
        }

{bin} { /* Число двоичное */
        fprintf(yyout, "Число: %s\n", yytext);
        }

{octal} { /* Число восьмеричное */
        fprintf(yyout, "Число: %s\n", yytext);
        }

{float} { /* Число с плавающей запятой */
        fprintf(yyout, "Число: %s\n", yytext);
        }

{hex} { /* Число шестнадцатеричное */
        fprintf(yyout, "Число: %s\n", yytext);
        }

.|\n {}

%%

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    FILE *input_file = fopen(argv[1], "r");
    if (!input_file) {
        fprintf(stderr, "Error: could not open file '%s'\n", argv[1]);
        return 1;
    }
    
	// Открываем выходной файл для записи
	FILE* output_file = fopen("output.txt", "w");
	if (!output_file) {
		fprintf(stderr, "Error: could not create output file\n");
		fclose(input_file);
		return 1;
	}

    yyin = input_file;
    yyout = output_file;
    yylex();        

	// Закрываем файлы
	fclose(input_file);
	fclose(output_file);
    return 0;
}
