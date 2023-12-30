%{
#include <stdio.h>
#include <string.h>
#include <typeinfo>
#include <iostream>
using namespace std;

char* removeUnderline(const char* str);

%}
%option noyywrap
%option never-interactive


%x COMMENT
%x STRINGD
%x STRINGS
%x STRINGB
%x TEMPLATE
%x COMMENTONE

DIGIT [0-9]

/* Описание правил */
%%
%{ 
    char str[1000];
    char bufferString[1000];
%} /* Объявление локальных переменных */

abstract {fprintf(yyout, "Found KW_ABSTRACT: %s\n", yytext);} 
any {fprintf(yyout, "Found TYPE_ANY: %s\n", yytext);} 
as {fprintf(yyout, "Found KW_AS: %s\n", yytext);} 
boolean {fprintf(yyout, "Found TYPE_BOOLEAN: %s\n", yytext);} 
break {fprintf(yyout, "Found KW_BREAK: %s\n", yytext);} 
case {fprintf(yyout, "Found KW_CASE: %s\n", yytext);} 
catch {fprintf(yyout, "Found KW_CATCH: %s\n", yytext);} 
class {fprintf(yyout, "Found KW_CLASS: %s\n", yytext);} 
continue {fprintf(yyout, "Found KW_CONTINUE: %s\n", yytext);} 
const {fprintf(yyout, "Found KW_CONST: %s\n", yytext);} 
constructor {fprintf(yyout, "Found KW_CONSTRUCTOR: %s\n", yytext);} 
debugger {fprintf(yyout, "Found KW_DEBUGGER: %s\n", yytext);} 
declare {fprintf(yyout, "Found KW_DECLARE: %s\n", yytext);} 
default {fprintf(yyout, "Found KW_DEFAULT: %s\n", yytext);} 
delete {fprintf(yyout, "Found KW_DELETE: %s\n", yytext);} 
do {fprintf(yyout, "Found KW_DO: %s\n", yytext);} 
else {fprintf(yyout, "Found KW_ELSE: %s\n", yytext);} 
enum {fprintf(yyout, "Found KW_ENUM: %s\n", yytext);} 
export {fprintf(yyout, "Found KW_EXPORT: %s\n", yytext);} 
extends {fprintf(yyout, "Found KW_EXTENDS: %s\n", yytext);} 
false {fprintf(yyout, "Found KW_FALSE: %s\n", yytext);} 
finally {fprintf(yyout, "Found KW_FINALLY: %s\n", yytext);} 
for {fprintf(yyout, "Found KW_FOR: %s\n", yytext);} 
from {fprintf(yyout, "Found KW_FROM: %s\n", yytext);} 
function {fprintf(yyout, "Found KW_FUNCTION: %s\n", yytext);} 
get {fprintf(yyout, "Found KW_GET: %s\n", yytext);} 
if {fprintf(yyout, "Found KW_IF: %s\n", yytext);} 
implements {fprintf(yyout, "Found KW_IMPLEMENTS: %s\n", yytext);} 
import {fprintf(yyout, "Found KW_IMPORT: %s\n", yytext);} 
in {fprintf(yyout, "Found KW_IN: %s\n", yytext);} 
infer {fprintf(yyout, "Found KW_INFER: %s\n", yytext);} 
instanceof {fprintf(yyout, "Found KW_INSTANCEOF: %s\n", yytext);} 
interface {fprintf(yyout, "Found KW_INTARFACE: %s\n", yytext);} 
is {fprintf(yyout, "Found KW_IS: %s\n", yytext);} 
keyof {fprintf(yyout, "Found KW_KEYOF: %s\n", yytext);} 
let {fprintf(yyout, "Found KW_LET: %s\n", yytext);} 
module {fprintf(yyout, "Found KW_MODULE: %s\n", yytext);} 
namespace {fprintf(yyout, "Found KW_NAMESPACE: %s\n", yytext);} 
never {fprintf(yyout, "Found TYPE_NEVER: %s\n", yytext);} 
new {fprintf(yyout, "Found KW_NEW: %s\n", yytext);} 
null {fprintf(yyout, "Found KW_NULL: %s\n", yytext);} 
number {fprintf(yyout, "Found TYPE_NUMBER: %s\n", yytext);} 
object {fprintf(yyout, "Found TYPE_OBJECT: %s\n", yytext);} 
of {fprintf(yyout, "Found KW_OF: %s\n", yytext);} 
package {fprintf(yyout, "Found KW_PACKAGE: %s\n", yytext);} 
private {fprintf(yyout, "Found KW_PRIVATE: %s\n", yytext);} 
protected {fprintf(yyout, "Found KW_PROTECTED: %s\n", yytext);} 
public {fprintf(yyout, "Found KW_PUBLIC: %s\n", yytext);} 
readonly {fprintf(yyout, "Found KW_READONLY: %s\n", yytext);} 
require {fprintf(yyout, "Found KW_REQUIRE: %s\n", yytext);} 
return {fprintf(yyout, "Found KW_RETURN: %s\n", yytext);} 
set {fprintf(yyout, "Found KW_SET: %s\n", yytext);} 
static {fprintf(yyout, "Found KW_STATIC: %s\n", yytext);} 
string {fprintf(yyout, "Found TYPE_STRING: %s\n", yytext);} 
super {fprintf(yyout, "Found KW_SUPER: %s\n", yytext);} 
switch {fprintf(yyout, "Found KW_SWITCH: %s\n", yytext);}
symbol {fprintf(yyout, "Found TYPE_SYMBOL: %s\n", yytext);}
this {fprintf(yyout, "Found KW_THIS: %s\n", yytext);}
throw {fprintf(yyout, "Found KW_THROW: %s\n", yytext);}
true {fprintf(yyout, "Found KW_TRUE: %s\n", yytext);}
try {fprintf(yyout, "Found KW_TRY: %s\n", yytext);}
type {fprintf(yyout, "Found KW_TYPE: %s\n", yytext);}
typeof {fprintf(yyout, "Found KW_TYPEOF: %s\n", yytext);}
unique {fprintf(yyout, "Found KW_UNIQUE: %s\n", yytext);} 
unknown {fprintf(yyout, "Found TYPE_UNKNOWN: %s\n", yytext);} 
var {fprintf(yyout, "Found KW_VAR: %s\n", yytext);}
while {fprintf(yyout, "Found KW_WHILE: %s\n", yytext);}
undefined {fprintf(yyout, "Found KW_UNDEFINED: %s\n", yytext);}

"?" {fprintf(yyout, "Found OPERATOR_OPT_PARAM: %s\n", yytext);}
"%" {fprintf(yyout, "Found OPERATOR_MOD: %s\n", yytext);}
"%=" {fprintf(yyout, "Found OPERATOR_MOD_ASSIGNMENT: %s\n", yytext);}
"+" {fprintf(yyout, "Found OPERATOR_PLUS: %s\n", yytext);}
"+=" {fprintf(yyout, "Found OPERATOR_PLUS_ASSIGNMENT: %s\n", yytext);}
"++" {fprintf(yyout, "Found OPERATOR_INCREMENT: %s\n", yytext);}
"-" {fprintf(yyout, "Found OPERATOR_MINUS: %s\n", yytext);}
"-=" {fprintf(yyout, "Found OPERATOR_MINUS_ASSIGNMENT: %s\n", yytext);}
"--" {fprintf(yyout, "Found OPERATOR_DICREMENT: %s\n", yytext);}
"*" {fprintf(yyout, "Found OPERATOR_MUL: %s\n", yytext);}
"*=" {fprintf(yyout, "Found OPERATOR_MUL_ASSIGNMENT: %s\n", yytext);}
"=" {fprintf(yyout, "Found OPERATOR_ASSIGNMENT: %s\n", yytext);}
"==" {fprintf(yyout, "Found OPERATOR_EQUAL: %s\n", yytext);}
"===" {fprintf(yyout, "Found OPERATOR_EQUAL_BY_TYPE_AND_VALUE: %s\n", yytext);}
"!" {fprintf(yyout, "Found OPERATOR_BIT_NOT: %s\n", yytext);}
"!=" {fprintf(yyout, "Found OPERATOR_NOT_EQUAL: %s\n", yytext);}
"!==" {fprintf(yyout, "Found OPERATOR_NOT_EQUAL_BY_TYPE_AND_VALUE: %s\n", yytext);}
">" {fprintf(yyout, "Found OPERATOR_MORE: %s\n", yytext);}
">=" {fprintf(yyout, "Found OPERATOR_MORE_OR_EQUAL: %s\n", yytext);}
"<" {fprintf(yyout, "Found OPERATOR_LESS: %s\n", yytext);}
"<=" {fprintf(yyout, "Found OPERATOR_LESS_OR_EQUA: %s\n", yytext);}
"/" {fprintf(yyout, "Found OPERATOR_DIV: %s\n", yytext);}
"/=" {fprintf(yyout, "Found OPERATOR_DIV_ASSIGNMENT: %s\n", yytext);}
"^" {fprintf(yyout, "Found OPERATOR_BIT_XOR: %s\n", yytext);}
"~" {fprintf(yyout, "Унарный оператор побитового НЕ: %s\n", yytext);}
"&" {fprintf(yyout, "Found OPERATOR_BIT_AND: %s\n", yytext);}
"&&" {fprintf(yyout, "AND: %s\n", yytext);}
"|" {fprintf(yyout, "Found OPERATOR_BIT_OR: %s\n", yytext);}
"||" {fprintf(yyout, "OR: %s\n", yytext);}
"[" {fprintf(yyout, "Found LEFT_SQUARE_BRACKET: %s\n", yytext);}
"]" {fprintf(yyout, "Found RIGHT_SQUARE_BRACKET: %s\n", yytext);}
"(" {fprintf(yyout, "Found LEFT_ROUND_BRACKET: %s\n", yytext);}
")" {fprintf(yyout, "Found RIGHT_ROUND_BRACKET: %s\n", yytext);}
"{" {fprintf(yyout, "Found LEFT_FIGURE_BRACKET: %s\n", yytext);}
"}" {fprintf(yyout, "Found RIGHT_FIGURE_BRACKET: %s\n", yytext);}
":" {fprintf(yyout, "Found COLON: %s\n", yytext);}
";" {fprintf(yyout, "Found SEMICOLON: %s\n", yytext);}
"n" {fprintf(yyout, "Found OPERATOR_ENTER: \\n\n", yytext);}

\" { // строка с двойными кавычками
    BEGIN(STRINGD);
    str[0] = 0; // зануляем переменную
    }
<STRINGD,STRINGS,STRINGB>\\[xX][^0-9a-fA-F] {printf("ERROR! Invalid hexadecimal escape sequence. \n");}
<STRINGD,STRINGS,STRINGB>\\[xX][0-9a-fA-F]{1,2} {
    char* end;
    long int num = strtol(yytext+2, &end, 16);
    char asciiChar = static_cast<char>(num);
    strncat(str, &asciiChar, 1);
    }
<STRINGD,STRINGS>\\[0-7]{1,2} {
    char* end;
    long int num = strtol(yytext+1, &end, 8);
    char asciiChar = static_cast<char>(num);
    strncat(str, &asciiChar, 1);
    }
<STRINGD,STRINGS>[^\\\"\'\n]+ {strcat(str, yytext);}
<STRINGD,STRINGS,STRINGB>\\n {strcat(str, "\n");}
<STRINGD,STRINGS,STRINGB>\\t {strcat(str, "\t");}
<STRINGD,STRINGS,STRINGB>\\\\ {strcat(str, "\\");}
<STRINGD,STRINGS,STRINGB>\\\" {strcat(str, "\"");}
<STRINGD,STRINGS,STRINGB>\\\' {strcat(str, "\'");}
<STRINGD>\" {
    fprintf(yyout, "Строка: %s\n", str);
    BEGIN(INITIAL);
    }
<STRINGD,STRINGS>\n {
    printf("ERROR! Line break inside literal.\n");
    exit(1);
    }
<STRINGD,STRINGS,STRINGB><<EOF>> {
    printf("ERROR! Unterminated string literal. \n");
    exit(1);
    }


\' { // строка с одинарными кавычками
    BEGIN(STRINGS);
    str[0] = 0; // зануляем переменную
    }
<STRINGS>\' {
    fprintf(yyout, "Строка: %s\n", str);
    BEGIN(INITIAL);
    }


\` { // шаблонная строка
    BEGIN(STRINGB);
    str[0] = 0; // зануляем переменную
    }
<STRINGB>\n {strcat(str, "\n");}
<STRINGB>\$\{ {
    strcat(str, "${");
    BEGIN(TEMPLATE);
    }
<STRINGB>\$\{\s*\} {
    printf("ERROR! Unexpected '}'. \n");
    exit(1);
    }
<STRINGB>[\${]+ {strcat(str, yytext);}
<STRINGB>\\[0-7]{2} {
    printf("ERROR! Octal escape sequences are not allowed in template strings. \n");
    exit(1);
    }
<STRINGB>[^\\\`\n] {strcat(str, yytext);}
<STRINGB>\\` {strcat(str, "`");}
<STRINGB>\` {
    fprintf(yyout, "Шаблонная строка: %s\n", str);
    BEGIN(INITIAL);
    }

<TEMPLATE>\} {
    printf("WARNING! Template is not supported. \n");
    strcat(str, yytext);
    BEGIN(STRINGB);
    }
<TEMPLATE>[^\}]* {
    strcat(str, yytext);
}
<TEMPLATE><<EOF>> {
    printf("ERROR! Missing } in template expression. \n");
    exit(1);
    }

\/\/ {BEGIN(COMMENTONE);}
<COMMENTONE>[^\n]* {}
<COMMENTONE>\n {BEGIN(INITIAL);}
<COMMENTONE><<EOF>> {BEGIN(INITIAL);}


"/*" {BEGIN(COMMENT);}
<COMMENT>[^*]+ {}
<COMMENT>"*"+[^*/] {}
<COMMENT>"*"+"/" {BEGIN(INITIAL);}
<COMMENT><<EOF>> {
    printf("ERROR! No closing comment at the end. \n");
    exit(1);
    }


{DIGIT}(\_?{DIGIT})* { /*Десятичное число правильное*/
    bufferString[0] = 0;
    strcat(bufferString, yytext);
    int buffLen = strlen(bufferString);
    if (bufferString[0] == '0' && buffLen > 1)
    {
        printf("ERROR: illegal using of zero in INT in line %s.\n", yytext);
		exit(1);
    }
    else
    {
        char* buffer = removeUnderline(bufferString);
        int res = atoi(buffer);
        fprintf(yyout, "INT: %d\n", res);
    }
}

{DIGIT}(\_*{DIGIT})*\_+ {
    printf("ERROR: illegal underscore in INT in line %s.\n", yytext);
	exit(1);
}

0(x|X)[0-9a-fA-F](_?[0-9a-fA-F]+)* { /* Число шестнадцатеричное правильное */
    bufferString[0] = 0;
    strcat(bufferString, yytext);
    char* buffer = removeUnderline(bufferString);
    char* end, numStr[20];
    long int res = strtol(buffer+2, &end, 16);
    snprintf(numStr, sizeof(numStr), "%ld", res);
    fprintf(yyout, "INT: %s\n", numStr);
}

((0\_*(x|X){2,}|(0\_*(x|X)))\_*[0-9a-fA-F](\_*[0-9a-fA-F]+)*\_*)|(0\_*(x|X){2,})\_* {
    printf("ERROR: hex syntax error %s.\n", yytext);
	exit(1);
}

0(o|O)[0-7](_?[0-7]+)* { /* Число восьмеричное правильное */
    bufferString[0] = 0;
    strcat(bufferString, yytext);
    char* buffer = removeUnderline(bufferString);
    char* end, numStr[20];
    long int res = strtol(buffer+2, &end, 8);
    snprintf(numStr, sizeof(numStr), "%ld", res);
    fprintf(yyout, "INT: %s\n", numStr);
}

((0\_*(o|O){2,}|(0\_*(o|O)))\_*[0-7](\_*[0-7]+)*\_*)|(0\_*(o|O){2,})\_* {
    printf("ERROR: octal syntax error %s.\n", yytext);
	exit(1);
}

0(b|B)[01](_?[01]+)* { /* Число двоичное правильное */
    bufferString[0] = 0;
    strcat(bufferString, yytext);
    char* buffer = removeUnderline(bufferString);
    char* end, numStr[20];
    long int res = strtol(buffer+2, &end, 2);
    snprintf(numStr, sizeof(numStr), "%ld", res);
    fprintf(yyout, "INT: %s\n", numStr);
}

((0\_*(b|B){2,}|(0\_*(b|B)))\_*[01](\_*[01]+)*\_*)|(0\_*(b|B){2,})\_* {
    printf("ERROR: octal syntax error %s.\n", yytext);
	exit(1);
}

(([0-9](\_?[0-9])*)?\.[0-9](\_?[0-9])*|([0-9](\_?[0-9])*)?[0-9](\_?[0-9])*\.?)((e|E)(\+|\-)?[0-9](\_?[0-9])*)? {
    /* Число с плавающей запятой правильное */
    bufferString[0] = 0;
    strcat(bufferString, yytext);
    char* buffer = removeUnderline(bufferString);
    char numStr[20];
    float res = strtof(buffer, NULL);
    snprintf(numStr, sizeof(numStr), "%f", res);
    fprintf(yyout, "FLOAT: %s\n", numStr);
}

(([0-9](\_*[0-9])*)?\_*\.\_*[0-9](\_*[0-9])*|([0-9](\_*[0-9])*)?[0-9](\_*[0-9])*\_*\.?\_*)((e|E)*\_*((\+|\-)?[0-9](\_*[0-9])*)?)? {
    printf("ERROR: float syntax error %s.\n", yytext);
	exit(1);
}

[_A-Za-z]+[_0-9A-Za-z]* {fprintf(yyout, "Found ID: %s\n", yytext);}

.|\n {/*все остальные символы пропускаем*/}

%%

char* removeUnderline(const char* str) {
    int len = strlen(str);
    char* result = (char*)malloc(len + 1);
    int result_index = 0;

    for (int i = 0; i < len; i++) {
        if (str[i] != '_') {
            result[result_index] = str[i];
            result_index++;
        }
    }

    result[result_index] = '\0';
    return result;
}

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

    // printf("The parsing process has started.\n");
	// yyparse();
    // printf("The parsing process is completed.\n");
    // tree_print();
    // getch();

	// Закрываем файлы
	fclose(input_file);
	fclose(output_file);
    return 0;
}
