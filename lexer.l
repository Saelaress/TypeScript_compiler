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
%x COMMENTONE

decimal [-+]?[0-9]+
bin [-+]?0[bB][01]+
octal [-+]?0[oO][0-7]+
hex [-+]?0[xX][0-9a-fA-F]+
float ^[-+]?([0-9]+\.?|\.{1}[0-9]+)[0-9]*([eE][-+]?[0-9]+)?$

/* Описание правил */
%%
%{ 
    char str[1000];
    char comment[1000];
%} /* Объявление локальных переменных */

abstract {fprintf(yyout, "Ключевое слово, которое описывает абстрактные классы или методы: %s\n", yytext);} 
any {fprintf(yyout, "Смешанный тип данных: %s\n", yytext);} 
as {fprintf(yyout, "Ключевое слово для приведения типов: %s\n", yytext);} 
boolean {fprintf(yyout, "Тип данных: %s\n", yytext);} 
break {fprintf(yyout, "Ключевое слово, которое используется для выхода из цикла или оператора switch: %s\n", yytext);} 
case {fprintf(yyout, "Ключевое слово, которое используется в операторе switch для определения маршрута исполнения кода: %s\n", yytext);} 
catch {fprintf(yyout, "Ключевое слово для блока обработки ошибок: %s\n", yytext);} 
class {fprintf(yyout, "Ключевое слово для определения класса: %s\n", yytext);} 
continue {fprintf(yyout, "Ключевое слово, которое используется для перехода к следующей итерации цикла: %s\n", yytext);} 
const {fprintf(yyout, "Ключевое слово для объявления постоянной переменной: %s\n", yytext);} 
constructor {fprintf(yyout, "Конструктор класса: %s\n", yytext);} 
debugger {fprintf(yyout, "Ключевое слово для для добавления точки останова в коде: %s\n", yytext);} 
declare {fprintf(yyout, "Ключевое слово для объявления переменных, функций или типов без определения объекта: %s\n", yytext);} 
default {fprintf(yyout, "Ключевое слово, которое указывает действие, выполняемое по умолчанию в операторе switch: %s\n", yytext);} 
delete {fprintf(yyout, "Оператор удаления свойств объекта: %s\n", yytext);} 
do {fprintf(yyout, "Ключевое слово, которое используется в цикле do-while: %s\n", yytext);} 
else {fprintf(yyout, "Ключевое слово, которое указывает выполнение другого блока кода, если условие в if не выполняется: %s\n", yytext);} 
enum {fprintf(yyout, "Определение перечисления: %s\n", yytext);} 
export {fprintf(yyout, "Ключевое слово для экспорта переменных, функций или классов из модуля: %s\n", yytext);} 
extends {fprintf(yyout, "Ключевое слово для обозначения наследования классом существующего класса: %s\n", yytext);} 
false {fprintf(yyout, "Логическое значение ложь: %s\n", yytext);} 
finally {fprintf(yyout, "Ключевое слово для обозначения блока кода, выполняемого после try-catch, независимо от результата: %s\n", yytext);} 
for {fprintf(yyout, "Ключевое слово для определения цикла for: %s\n", yytext);} 
from {fprintf(yyout, "Ключевое слово для импортирования определений из модуля при использовании import: %s\n", yytext);} 
function {fprintf(yyout, "Ключевое слово для объявления функции: %s\n", yytext);} 
get {fprintf(yyout, "Геттер: %s\n", yytext);} 
if {fprintf(yyout, "Оператор условного выполнения кода: %s\n", yytext);} 
implements {fprintf(yyout, "Ключевое слово для реализации интерфейса в классе: %s\n", yytext);} 
import {fprintf(yyout, "Ключевое слово для импорта переменных, функций или классов из других модулей: %s\n", yytext);} 
in {fprintf(yyout, "Оператор для определения наличия свойств в объекте: %s\n", yytext);} 
infer {fprintf(yyout, "Ключевое слово для вывода типов в условных типах: %s\n", yytext);} 
instanceof {fprintf(yyout, "Оператор для определения принадлежности объекта к определенному классу: %s\n", yytext);} 
interface {fprintf(yyout, "Ключевое слово для определения контракта: %s\n", yytext);} 
is {fprintf(yyout, "Ключевое слово для создания пользовательских условных типов: %s\n", yytext);} 
keyof {fprintf(yyout, "Оператор для извлечения ключей типа объекта: %s\n", yytext);} 
let {fprintf(yyout, "Ключевое слово, объявляющее переменную с блочной областью видимости: %s\n", yytext);} 
module {fprintf(yyout, "Ключевое слово для определения модуля или пространства имен: %s\n", yytext);} 
namespace {fprintf(yyout, "Ключевое слово для определения пространства имен: %s\n", yytext);} 
never {fprintf(yyout, "Тип данных: %s\n", yytext);} 
new {fprintf(yyout, "Оператор создания нового объекта: %s\n", yytext);} 
null {fprintf(yyout, "Специальное значение, означающее отсутствие значения: %s\n", yytext);} 
number {fprintf(yyout, "Тип данных: %s\n", yytext);} 
object {fprintf(yyout, "Базовый тип для всех объектов: %s\n", yytext);} 
package {fprintf(yyout, "Модификатор доступа: %s\n", yytext);} 
private {fprintf(yyout, "Модификатор доступа: %s\n", yytext);} 
protected {fprintf(yyout, "Модификатор доступа: %s\n", yytext);} 
public {fprintf(yyout, "Модификатор доступа: %s\n", yytext);} 
readonly {fprintf(yyout, "Модификатор для создания свойств, доступных только для чтения: %s\n", yytext);} 
require {fprintf(yyout, "Функция для импорта модулей в стиле CommonJS: %s\n", yytext);} 
return {fprintf(yyout, "Оператор возврата результата функции: %s\n", yytext);} 
set {fprintf(yyout, "Сеттер: %s\n", yytext);} 
static {fprintf(yyout, "Ключевое слово, определяющее статические свойства или методы класса: %s\n", yytext);} 
string {fprintf(yyout, "Тип данных: %s\n", yytext);} 
super {fprintf(yyout, "Вызов конструктора базового класса: %s\n", yytext);} 
switch {fprintf(yyout, "Оператор для выполнения блока кода на основе значения переменной: %s\n", yytext);} 
symbol {fprintf(yyout, "Специфический и уникальный тип данных для создания идентификаторов: %s\n", yytext);} 
this {fprintf(yyout, "Ссылка на текущий объект: %s\n", yytext);} 
throw {fprintf(yyout, "Оператор выброса исключения: %s\n", yytext);} 
true {fprintf(yyout, "Логическое значение истина: %s\n", yytext);} 
try {fprintf(yyout, "Ключевое слово, начинающее блок кода, обрабатывающего исключения: %s\n", yytext);} 
type {fprintf(yyout, "Ключевое слово для объявления нового именованного типа данных: %s\n", yytext);} 
typeof {fprintf(yyout, "Оператор для определения типа данных переменной: %s\n", yytext);} 
unique {fprintf(yyout, "Ключевое слово, резервированное для возможного использования в будущем: %s\n", yytext);} 
unknown {fprintf(yyout, "Тип данных: %s\n", yytext);} 
var {fprintf(yyout, "Ключевое слово, объявляющее переменную с функциональной областью видимости: %s\n", yytext);}

\% {fprintf(yyout, "Оператор остатка от деления: %s\n", yytext);} 
\%\= {fprintf(yyout, "Оператор краткой записи вычисления остатка от деления: %s\n", yytext);} 
\+ {fprintf(yyout, "Оператор арифметического сложения: %s\n", yytext);} 
\+\= {fprintf(yyout, "Оператор краткой записи сложения: %s\n", yytext);} 
\+\+ {fprintf(yyout, "Оператор инкремента: %s\n", yytext);} 
\- {fprintf(yyout, "Оператор арифметического вычитания: %s\n", yytext);} 
\-\= {fprintf(yyout, "Оператор краткой записи вычитания: %s\n", yytext);} 
\-\- {fprintf(yyout, "Оператор декремента: %s\n", yytext);} 
\* {fprintf(yyout, "Оператор умножения: %s\n", yytext);} 
\*\= {fprintf(yyout, "Оператор краткой записи умножения: %s\n", yytext);} 
\= {fprintf(yyout, "Оператор присваивания: %s\n", yytext);} 
\=\= {fprintf(yyout, "Оператор сравнения равенства: %s\n", yytext);} 
\=\=\= {fprintf(yyout, "Оператор сравнения по значению и типу: %s\n", yytext);} 
\! {fprintf(yyout, "Оператор логического НЕ: %s\n", yytext);} 
\!\= {fprintf(yyout, "Оператор неравенства: %s\n", yytext);} 
\!\=\= {fprintf(yyout, "Оператор неравенства по значению и типу: %s\n", yytext);} 
\> {fprintf(yyout, "Оператор больше: %s\n", yytext);} 
\>\= {fprintf(yyout, "Оператор больше или равно: %s\n", yytext);} 
\< {fprintf(yyout, "Оператор меньше: %s\n", yytext);} 
\<\= {fprintf(yyout, "Оператор меньше или равно: %s\n", yytext);} 
\/ {fprintf(yyout, "Оператор деления: %s\n", yytext);} 
\/\= {fprintf(yyout, "Оператор краткой записи деления: %s\n", yytext);} 
\^ {fprintf(yyout, "Бинарный оператор исключающего ИЛИ: %s\n", yytext);} 
\~ {fprintf(yyout, "Унарный оператор побитового НЕ: %s\n", yytext);} 
\& {fprintf(yyout, "Оператор пересечения типов: %s\n", yytext);} 
\&\& {fprintf(yyout, "Оператор логического И: %s\n", yytext);} 
\| {fprintf(yyout, "Оператор объединения типов: %s\n", yytext);} 
\|\| {fprintf(yyout, "Оператор логического ИЛИ: %s\n", yytext);} 
\[ {fprintf(yyout, "Открывающая квадратная скобка: %s\n", yytext);} 
\] {fprintf(yyout, "Закрывающая квадратная скобка: %s\n", yytext);} 
\( {fprintf(yyout, "Открывающая круглая скобка: %s\n", yytext);} 
\) {fprintf(yyout, "Закрывающая круглая скобка: %s\n", yytext);} 
\{ {fprintf(yyout, "Открывающая фигурная скобка: %s\n", yytext);} 
\} {fprintf(yyout, "Закрывающая фигурная скобка: %s\n", yytext);}
\: {fprintf(yyout, "оператор указания типа переменной: %s\n", yytext);}
\; {fprintf(yyout, "Оператор завершения: %s\n", yytext);}
\n {fprintf(yyout, "Оператор завершения: \\n\n", yytext);}




\% {fprintf(yyout, "Оператор остатка от деления: %s\n", yytext);}
\%\= {fprintf(yyout, "Оператор краткой записи вычисления остатка от деления: %s\n", yytext);}
\bas\b {fprintf(yyout, "Оператор приведения типов: %s\n", yytext);}
\+ {fprintf(yyout, "Оператор арифметического сложения: %s\n", yytext);}
\+\= {fprintf(yyout, "Оператор краткой записи сложения: %s\n", yytext);}
\+\+ {fprintf(yyout, "Оператор инкремента: %s\n", yytext);}
\- {fprintf(yyout, "Оператор арифметического вычитания: %s\n", yytext);}
\-\= {fprintf(yyout, "Оператор краткой записи вычитания: %s\n", yytext);}
\-\- {fprintf(yyout, "Оператор декремента: %s\n", yytext);}
\* {fprintf(yyout, "Оператор умножения: %s\n", yytext);}
\*\= {fprintf(yyout, "Оператор краткой записи умножения: %s\n", yytext);}
\= {fprintf(yyout, "Оператор присваивания: %s\n", yytext);}
\=\= {fprintf(yyout, "Оператор сравнения равенства: %s\n", yytext);}
\=\=\= {fprintf(yyout, "Оператор сравнения по значению и типу: %s\n", yytext);}
\! {fprintf(yyout, "Оператор логического НЕ: %s\n", yytext);}
\!\= {fprintf(yyout, "Оператор неравенства: %s\n", yytext);}
\!\=\= {fprintf(yyout, "Оператор неравенства по значению и типу: %s\n", yytext);}
\> {fprintf(yyout, "Оператор больше: %s\n", yytext);}
\>\= {fprintf(yyout, "Оператор больше или равно: %s\n", yytext);}
\< {fprintf(yyout, "Оператор меньше: %s\n", yytext);}
\<\= {fprintf(yyout, "Оператор меньше или равно: %s\n", yytext);}
\/ {fprintf(yyout, "Оператор деления: %s\n", yytext);}
\/\= {fprintf(yyout, "Оператор краткой записи деления: %s\n", yytext);}
\^ {fprintf(yyout, "Бинарный оператор исключающего ИЛИ: %s\n", yytext);}
\~ {fprintf(yyout, "Унарный оператор побитового НЕ: %s\n", yytext);}
\& {fprintf(yyout, "Оператор пересечения типов: %s\n", yytext);}
\&\& {fprintf(yyout, "Оператор логического И: %s\n", yytext);}
\| {fprintf(yyout, "Оператор объединения типов: %s\n", yytext);}
\|\| {fprintf(yyout, "Оператор логического ИЛИ: %s\n", yytext);}
\[ {fprintf(yyout, "Открывающая квадратная скобка: %s\n", yytext);}
\] {fprintf(yyout, "Закрывающая квадратная скобка: %s\n", yytext);}
\( {fprintf(yyout, "Открывающая круглая скобка: %s\n", yytext);}
\) {fprintf(yyout, "Закрывающая круглая скобка: %s\n", yytext);}
\{ {fprintf(yyout, "Открывающая фигурная скобка: %s\n", yytext);}
\} {fprintf(yyout, "Закрывающая фигурная скобка: %s\n", yytext);}









%{ 
    char str[1000];
    char comment[1000];
    bool tempSC = false;
%} /* Объявление локальных переменных */

\" { // строка с двойными кавычками
    BEGIN(STRINGD);
    str[0] = 0; // зануляем переменную
    }
<STRINGD,STRINGS,STRINGB>\\[xX][0-9a-fA-F]{1,2} {
    char* end;
    long int num = strtol(yytext+2, &end, 16);
    char asciiChar = static_cast<char>(num);
    strncat(str, &asciiChar, 1);
    }
<STRINGD,STRINGS>\\[0-7]{1,3} {
    char* end;
    long int num = strtol(yytext+1, &end, 8);
    char asciiChar = static_cast<char>(num);
    strncat(str, &asciiChar, 1);
    }
<STRINGD,STRINGS>[^\\\"\'\n\t]+ {strcat(str, yytext);}
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
    printf("ERROR! Line break inside literal.");
    exit(1);
    }
<STRINGD,STRINGS,STRINGB><<EOF>> {
    printf("ERROR! Unterminated string literal.");
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
<STRINGB>\$\{ {
    BEGIN(TEMPLATE);}
<STRINGB>\$\{\s*\} {
    printf("ERROR! Unexpected '}'.");
    exit(1);
    }
<STRINGB>[\${]+ {strcat(str, yytext);}
<STRINGB>\\[0-7]{1,3} {
    printf("ERROR! Legacy octal escape sequences cannot be used in template literals.");
    exit(1);
    }
<STRINGB>[^\\\`\n\t] {strcat(str, yytext);}
<STRINGB>\\` {strcat(str, "\`");}
<STRINGB>\` {
    fprintf(yyout, "Шаблонная строка: %s\n", str);
    BEGIN(INITIAL);
    }

\/\/ {
    BEGIN(COMMENTONE); 
    comment[0] = 0; // зануляем переменную
}
<COMMENTONE>[^\n] {strcat(comment, yytext);}
<COMMENTONE>\n {
    // fprintf(yyout, "Found comment: %s\n", comment);
    BEGIN(INITIAL);
    }
<COMMENTONE><<EOF>> {
    // fprintf(yyout, "Found comment: %s\n", comment);
    BEGIN(INITIAL);
    }


"/*" {
    BEGIN(COMMENT); 
    comment[0] = 0; // зануляем переменную
    }
<COMMENT>[^*]+ {strcat(comment, yytext);}
<COMMENT>"*"+[^*/] {strcat(comment, yytext);}
<COMMENT>"*"+"/" { 
    // fprintf(yyout, "Found comment: %s\n", comment);
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
    char* end, numStr[20];
    long int num = strtol(yytext+2, &end, 2);
    snprintf(numStr, sizeof(numStr), "%ld", num);
    fprintf(yyout, "Число: %s\n", numStr);
    }

{octal} { /* Число восьмеричное */
    char* end, numStr[20];
    long int num = strtol(yytext+2, &end, 8);
    snprintf(numStr, sizeof(numStr), "%ld", num);
    fprintf(yyout, "Число: %s\n", numStr);
    }

{float} { /* Число с плавающей запятой */
    char numStr[20];
    float num = strtof(yytext, NULL);
    snprintf(numStr, sizeof(numStr), "%f", num);
    fprintf(yyout, "Число: %s\n", numStr);
    }

{hex} { /* Число шестнадцатеричное */
    char* end, numStr[20];
    long int num = strtol(yytext+2, &end, 16);
    snprintf(numStr, sizeof(numStr), "%ld", num);
    fprintf(yyout, "Число: %s\n", numStr);
    }

[_]?[A-Za-z]+[_0-9A-Za-z]* {fprintf(yyout, "Имя переменной: %s\n", yytext);}

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
