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
%x STRINGD
%x STRINGS
%x STRINGB
%x TEMPLATE

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
    bool tempSC = false;
%} /* Объявление локальных переменных */

\" { // строка с двойными кавычками
    BEGIN(STRINGD);
    str[0] = 0; // зануляем переменную
    }
<STRINGD>[^\\\"\'\n\t]+ {strcat(str, yytext);}
<STRINGD>\\n {strcat(str, "\n");}
<STRINGD>\\t {strcat(str, "\t");}
<STRINGD>\\\\ {strcat(str, "\\");}
<STRINGD>\\\" {strcat(str, "\"");}
<STRINGD>\\\' {strcat(str, "\'");}
<STRINGD>\" {
    fprintf(yyout, "Строка: %s\n", str);
    if(tempSC) {
        tempSC = false;
        BEGIN(TEMPLATE);
        }
    else BEGIN(INITIAL);
    }
<STRINGD>\n {
    printf("ERROR! Line break inside literal.");
    exit(1);
    }
<STRINGD><<EOF>> {
    printf("ERROR! Unterminated string literal.");
    exit(1);
    }


\' { // строка с одинарными кавычками
    BEGIN(STRINGS);
    str[0] = 0; // зануляем переменную
    }
<STRINGS>[^\\\'\"\n\t]+ {strcat(str, yytext);}
<STRINGS>\\n {strcat(str, "\n");}
<STRINGS>\\t {strcat(str, "\t");}
<STRINGS>\\\\ {strcat(str, "\\");}
<STRINGS>\\\' {strcat(str, "\'");}
<STRINGS>\\\" {strcat(str, "\"");}
<STRINGS>\' {
    fprintf(yyout, "Строка: %s\n", str);
    if(tempSC) {
        tempSC = false;
        BEGIN(TEMPLATE);
        }
    else BEGIN(INITIAL);
    }
<STRINGS>\n {
    printf("ERROR! Line break inside literal.");
    exit(1);
    }
<STRINGS><<EOF>> {
    printf("ERROR! Unterminated string literal.");
    exit(1);
    }


\` { // шаблонная строка
    BEGIN(STRINGB);
    str[0] = 0; // зануляем переменную
    }
<STRINGB>[^\\\`\n\t(?!\$\{)]+ {strcat(str, yytext);}
<STRINGB>\$\{ {BEGIN(TEMPLATE);}
<STRINGB>\$\{\s*\} {
    printf("ERROR! Unexpected '}'.");
    exit(1);
    }
<STRINGB>\\n {strcat(str, "\n");}
<STRINGB>\\t {strcat(str, "\t");}
<STRINGB>\\\\ {strcat(str, "\\");}
<STRINGB>\\\` {strcat(str, "\`");}
<STRINGB>\\\' {strcat(str, "\'");}
<STRINGB>\\\" {strcat(str, "\"");}
<STRINGB>\` {
    fprintf(yyout, "Шаблонная строка: %s\n", str);
    BEGIN(INITIAL);
    }
<STRINGB><<EOF>> {
    printf("ERROR! Unterminated string literal.");
    exit(1);
    }

<TEMPLATE>{hex} {
    char* end, numStr[20];
    long int num = strtol(yytext+2, &end, 16);
    snprintf(numStr, sizeof(numStr), "%ld", num);
    strcat(str, numStr);
    }
<TEMPLATE>{octal} {
    char* end, numStr[20];
    long int num = strtol(yytext+2, &end, 8);
    snprintf(numStr, sizeof(numStr), "%ld", num);
    strcat(str, numStr);
    }
<TEMPLATE>{bin} {
    char* end, numStr[20];
    long int num = strtol(yytext+2, &end, 2);
    snprintf(numStr, sizeof(numStr), "%ld", num);
    strcat(str, numStr);
    }
<TEMPLATE>{decimal} {
    strcat(str, yytext);
    }
<TEMPLATE>{float} {
    char numStr[20];
    float num = strtof(yytext, NULL);
    snprintf(numStr, sizeof(numStr), "%f", num);
    strcat(str, numStr);
    }
<TEMPLATE>\" { // строка с двойными кавычками
    tempSC = true;
    BEGIN(STRINGD);
    }
<TEMPLATE>\' { // строка с одинарными кавычками
    tempSC = true;
    BEGIN(STRINGS);
    }
<TEMPLATE>\s*\} {BEGIN(STRINGB);}
<TEMPLATE>[\`\\n] {
    printf("ERROR! Unterminated string literal.");
    exit(1);
    }


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
<COMMENT><<EOF>> {
    printf("ERROR! No closing comment at the end.");
    exit(1);
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
