%{
#include <stdio.h>
#include <string.h>

#include "stringBuffer.h"
#include "parser.tab.h"
#include "parsing_tree.h"
#include "print_functions.h"
#include "modifier_head.h"
#include "iohandler.h"
extern int yyparse();
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

%{
 /*! Удалить символ из строки по его индексу в ней.
    * \param[in] str исходная строка.
    * \param[in] index индекс удаляемого символа.
    * \return 0, если удалено успешно, 1 - если нет.
    */
    int removeCharFromStringByIndex(char * str, int index);

    /*! Удалить из строки нижние подчеркивания.
    * \param[in] str исходная строка.
    */
    void removeUnderline(char* str);

    /*! Опциональный вывод лексем в зависимости от значения флага.
    * \param[in] str выводимая строка.
    * \param[in] token выводимый токен.
    */
    void printHandler(char* str, char * token);

    int hasClosingBrace = 0;

    int hasPlus = 0;

    int hasOpenBracket = 0;

    int hasCloseBracket = 0;

    int needsTokens = 0;

    char tempIdent[1024];

    // struct ModifierHead head = {0,0,0,0,0,0,0};

    int line = 1;

    int multilineBegin;
%}

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
"+" {
    printHandler((char*)"OPERATOR_PLUS", yytext);
    return '+';
}
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
"," {
    printHandler((char*)"COMMA", yytext);
    return ',';
}

\" { // строка с двойными кавычками
    BEGIN(STRINGD);
    str[0] = 0; // зануляем переменную
    }
<STRINGD,STRINGS,STRINGB>\\[xX][^0-9a-fA-F] {printf("ERROR! Invalid hexadecimal escape sequence. \n");}
<STRINGD,STRINGS,STRINGB>\\[xX][0-9a-fA-F]{1,2} {
    char* end;
    long int num = strtol(yytext+2, &end, 16);
    char asciiChar = (char)num;
    strncat(str, &asciiChar, 1);
    }
<STRINGD,STRINGS>\\[0-7]{1,2} {
    char* end;
    long int num = strtol(yytext+1, &end, 8);
    char asciiChar = (char)num;
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
        printf("ERROR: illegal using of zero in INT in line %d.\n", line);
        exit(1);
    }
    else
    {
        removeUnderline(bufferString);
        char* buffer = bufferString;
        int res = atoi(buffer);
        if(needsTokens) printf("(%d) - DECIMAL_INT\n", res);
        yylval.intLit = res;
        return INT_LITERAL;
    }
}

{DIGIT}(\_*{DIGIT})*\_+ {
    printf("ERROR: illegal underscore in INT in line %s.\n", yytext);
    exit(1);
}

0(x|X)[0-9a-fA-F](_?[0-9a-fA-F]+)* { /* Число шестнадцатеричное правильное */
    bufferString[0] = 0;
    strcat(bufferString, yytext);
    removeUnderline(bufferString);
    char* buffer = bufferString;
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
    removeUnderline(bufferString);
    char* buffer = bufferString;
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
    removeUnderline(bufferString);
    char* buffer = bufferString;
    char* end, numStr[20];
    long int res = strtol(buffer+2, &end, 2);
    snprintf(numStr, sizeof(numStr), "%ld", res);
    fprintf(yyout, "INT: %s\n", numStr);
}

((0\_*(b|B){2,}|(0\_*(b|B)))\_*[01](\_*[01]+)*\_*)|(0\_*(b|B){2,})\_* {
    printf("ERROR: octal syntax error %s.\n", yytext);
	exit(1);
}

(({DIGIT}(\_*{DIGIT})*)?\.)?{DIGIT}(\_*{DIGIT})*((e|E)(\+|\-)?{DIGIT}(\_*{DIGIT})*)? {
    /* Число с плавающей запятой правильное */
    bufferString[0] = 0;
    strcat(bufferString, yytext);
    removeUnderline(bufferString);
    int resLen = strlen(bufferString);
    float result = strtof(bufferString, NULL);
    if(needsTokens) printf("(%.*f) - FLOAT\n", resLen, result);
    yylval.floatLit = result;
    return FLOAT_LITERAL;
}

({DIGIT}(\_*{DIGIT})*\_+)\.{DIGIT}(\_*{DIGIT})*((e|E)(\+|\-)?{DIGIT}(\_*{DIGIT})*)? {
    printf("ERROR: float syntax error %s.\n", yytext);
    exit(1);
}

({DIGIT}(\_*{DIGIT})*)?\.{DIGIT}(\_*{DIGIT})*\_+((e|E)(\+|\-)?{DIGIT}(\_*{DIGIT})*)? {
    printf("ERROR: float syntax error %s.\n", yytext);
    exit(1);
}

(({DIGIT}(\_*{DIGIT})*)?\.)?{DIGIT}(\_*{DIGIT})*((e|E)(\+|\-)?\_+{DIGIT}(\_*{DIGIT})*) {
    printf("ERROR: float syntax error %s.\n", yytext);
    exit(1);
}

(({DIGIT}(\_*{DIGIT})*)?\.)?{DIGIT}(\_*{DIGIT})*((e|E)(\+|\-)?{DIGIT}(\_*{DIGIT})*\_+) {
    printf("ERROR: float syntax error %s.\n", yytext);
    exit(1);
}

(({DIGIT}(\_*{DIGIT})*)?\.)?{DIGIT}(\_*{DIGIT})*((e|E)(\+|\-)?)(\_)* {
    printf("ERROR: float syntax error %s.\n", yytext);
    exit(1);
}

[_A-Za-z]+[_0-9A-Za-z]* {fprintf(yyout, "Found ID: %s\n", yytext);}

[\r\n] {
    return ENDL;
}

[ \t] {
    // Игнорирование лишних пробелов и табуляций.
}

. {
    /*все остальные символы пропускаем*/
    bufferString[0] = 0;
    strcat(bufferString, yytext);
    printf("%s - UNRECOGNIZED TOKEN.\n", bufferString);
    exit(1);
}

%%

int removeCharFromStringByIndex(char * str, int index)
{
    int length = strlen(str); // Вычислить длину строки.
    if (index >= length || index < 0) // Удалить символ, если индекс выходит за границу строки.
    {
        return 1;
    }
    for (int i = index; i < length; i++)
    str[i] = str[i + 1];

    return 0;
}

void removeUnderline(char* str)
{
    char* underline = strchr(str, '_');
    while (underline != NULL){
        underline = strchr(str, '_');
        int position = underline - str;
        removeCharFromStringByIndex(str, position);
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    int needsDotCon = 0;
    int needsDotFile = 0;
    int needsHelp = 0;
    int needsTokens = 0;
    int opt = 0;

    while ((opt = t_getopt(argc, argv, "-cfth")) != -1)
    {
        switch (opt)
        {
            case 'h':
                // Вывод справки
                printf("%s", getHelp());
                needsHelp = 1;
                return 0;
            case 't':
                // Установка флага needsTokens
                needsTokens = 1;
                break;
            case 'c':
                // Установка флага needsDotCon
                needsDotCon = 1;
                break;
            case 'f':
                // Установка флага needsDotFile
                needsDotFile = 1;
                break;
            case '?':
                // Неизвестная опция, вывод сообщения об ошибке
                printf("%c : unrecognized option; use -h to get help using the utility.\n", opt);
                return -1;
        }
    }
    // Проверка, что указан путь к входному файлу
    if (!needsHelp && argv[argc - 1][0] == '-')
    {
        printf("The path to the input file is missing; use -h to get help using the utility.\n");
        return -1;
    }

    FILE *input_file = fopen(argv[argc - 1], "r");
    if (!input_file) {
        fprintf(stderr, "Error: could not open file '%s'\n", argv[1]);
        return 1;
    }

    yyin = input_file;

    printf("The parsing process has started.\n");

    // Запуск синтаксического анализа
    yyparse();

    printf("The parsing process is completed.\n");

    // Генерация и вывод DOT-строки
    if (needsDotCon || needsDotFile) {
        char * res = generateDotFromExpressionList(root);  // Функция генерации DOT-строки
        if (needsDotFile) {
            // Запись DOT-строки в файл result.gv
            FILE *f = fopen("result.gv", "w");

            if (!f) {
                fprintf(stderr, "Error: could not create output file\n");
                fclose(input_file);
                return 1;
            }
            fprintf(f, "%s", res);
            fclose(f);
        }
        if (needsDotCon)
        {
            // Вывод DOT-строки в консоль
            printf("%s\n", res);
        }
    }

    // Закрываем файлы
	fclose(input_file);
    return 0;
}

// Обработчик для вывода токенов
void printHandler(char* str, char * token)
{
    if(needsTokens != 0)
    {
        printf("(%s) - %s\n", token, str);
    }
}
