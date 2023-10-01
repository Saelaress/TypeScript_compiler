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
\babstract\b {fprintf(yyout, "Ключевое слово, которое описывает абстрактные классы или методы: %s\n", yytext);}
\bany\b {fprintf(yyout, "Смешанный тип данных: %s\n", yytext);}
\bas\b {fprintf(yyout, "Ключевое слово для приведения типов: %s\n", yytext);}
\bboolean\b {fprintf(yyout, "Тип данных: %s\n", yytext);}
\bbreak\b {fprintf(yyout, "Ключевое слово, которое используется для выхода из цикла или оператора switch: %s\n", yytext);}
\bcase\b {fprintf(yyout, "Ключевое слово, которое используется в операторе switch для определения маршрута исполнения кода: %s\n", yytext);}
\bcatch\b {fprintf(yyout, "Ключевое слово для блока обработки ошибок: %s\n", yytext);}
\bclass\b {fprintf(yyout, "Ключевое слово для определения класса: %s\n", yytext);}
\bcontinue\b {fprintf(yyout, "Ключевое слово, которое используется для перехода к следующей итерации цикла: %s\n", yytext);}
\bconst\b {fprintf(yyout, "Ключевое слово для объявления постоянной переменной: %s\n", yytext);}
\bconstructor\b {fprintf(yyout, "Конструктор класса: %s\n", yytext);}
\bdebugger\b {fprintf(yyout, "Ключевое слово для для добавления точки останова в коде: %s\n", yytext);}
\bdeclare\b {fprintf(yyout, "Ключевое слово для объявления переменных, функций или типов без определения объекта: %s\n", yytext);}
\bdefault\b {fprintf(yyout, "Ключевое слово, которое указывает действие, выполняемое по умолчанию в операторе switch: %s\n", yytext);}
\bdelete\b {fprintf(yyout, "Оператор удаления свойств объекта: %s\n", yytext);}
\bdo\b {fprintf(yyout, "Ключевое слово, которое используется в цикле do-while: %s\n", yytext);}
\belse\b {fprintf(yyout, "Ключевое слово, которое указывает выполнение другого блока кода, если условие в if не выполняется: %s\n", yytext);}
\benum\b {fprintf(yyout, "Определение перечисления: %s\n", yytext);}
\bexport\b {fprintf(yyout, "Ключевое слово для экспорта переменных, функций или классов из модуля: %s\n", yytext);}
\bextends\b {fprintf(yyout, "Ключевое слово для обозначения наследования классом существующего класса: %s\n", yytext);}
\bfalse\b {fprintf(yyout, "Логическое значение ложь: %s\n", yytext);}
\bfinally\b {fprintf(yyout, "Ключевое слово для обозначения блока кода, выполняемого после try-catch, независимо от результата: %s\n", yytext);}
\bfor\b {fprintf(yyout, "Ключевое слово для определения цикла for: %s\n", yytext);}
\bfrom\b {fprintf(yyout, "Ключевое слово для импортирования определений из модуля при использовании import: %s\n", yytext);}
\bfunction\b {fprintf(yyout, "Ключевое слово для объявления функции: %s\n", yytext);}
\bget\b {fprintf(yyout, "Геттер: %s\n", yytext);}
\bif\b {fprintf(yyout, "Оператор условного выполнения кода: %s\n", yytext);}
\bimplements\b {fprintf(yyout, "Ключевое слово для реализации интерфейса в классе: %s\n", yytext);}
\bimport\b {fprintf(yyout, "Ключевое слово для импорта переменных, функций или классов из других модулей: %s\n", yytext);}
\bin\b {fprintf(yyout, "Оператор для определения наличия свойств в объекте: %s\n", yytext);}
\binfer\b {fprintf(yyout, "Ключевое слово для вывода типов в условных типах: %s\n", yytext);}
\binstanceof\b {fprintf(yyout, "Оператор для определения принадлежности объекта к определенному классу: %s\n", yytext);}
\binterface\b {fprintf(yyout, "Ключевое слово для определения контракта: %s\n", yytext);}
\bis\b {fprintf(yyout, "Ключевое слово для создания пользовательских условных типов: %s\n", yytext);}
\bkeyof\b {fprintf(yyout, "Оператор для извлечения ключей типа объекта: %s\n", yytext);}
\blet\b {fprintf(yyout, "Ключевое слово, объявляющее переменную с блочной областью видимости: %s\n", yytext);}
\bmodule\b {fprintf(yyout, "Ключевое слово для определения модуля или пространства имен: %s\n", yytext);}
\bnamespace\b {fprintf(yyout, "Ключевое слово для определения пространства имен: %s\n", yytext);}
\bnever\b {fprintf(yyout, "Тип данных: %s\n", yytext);}
\bnew\b {fprintf(yyout, "Оператор создания нового объекта: %s\n", yytext);}
\bnull\b {fprintf(yyout, "Специальное значение, означающее отсутствие значения: %s\n", yytext);}
\bnumber\b {fprintf(yyout, "Тип данных: %s\n", yytext);}
\bobject\b {fprintf(yyout, "Базовый тип для всех объектов: %s\n", yytext);}
\bpackage\b {fprintf(yyout, "Модификатор доступа: %s\n", yytext);}
\bprivate\b {fprintf(yyout, "Модификатор доступа: %s\n", yytext);}
\bprotected\b {fprintf(yyout, "Модификатор доступа: %s\n", yytext);}
\bpublic\b {fprintf(yyout, "Модификатор доступа: %s\n", yytext);}
\breadonly\b {fprintf(yyout, "Модификатор для создания свойств, доступных только для чтения: %s\n", yytext);}
\brequire\b {fprintf(yyout, "Функция для импорта модулей в стиле CommonJS: %s\n", yytext);}
\breturn\b {fprintf(yyout, "Оператор возврата результата функции: %s\n", yytext);}
\bset\b {fprintf(yyout, "Сеттер: %s\n", yytext);}
\bstatic\b {fprintf(yyout, "Ключевое слово, определяющее статические свойства или методы класса: %s\n", yytext);}
\bstring\b {fprintf(yyout, "Тип данных: %s\n", yytext);}
\bsuper\b {fprintf(yyout, "Вызов конструктора базового класса: %s\n", yytext);}
\bswitch\b {fprintf(yyout, "Оператор для выполнения блока кода на основе значения переменной: %s\n", yytext);}
\bsymbol\b {fprintf(yyout, "Специфический и уникальный тип данных для создания идентификаторов: %s\n", yytext);}
\bthis\b {fprintf(yyout, "Ссылка на текущий объект: %s\n", yytext);}
\bthrow\b {fprintf(yyout, "Оператор выброса исключения: %s\n", yytext);}
\btrue\b {fprintf(yyout, "Логическое значение истина: %s\n", yytext);}
\btry\b {fprintf(yyout, "Ключевое слово, начинающее блок кода, обрабатывающего исключения: %s\n", yytext);}
\btype\b {fprintf(yyout, "Ключевое слово для объявления нового именованного типа данных: %s\n", yytext);}
\btypeof\b {fprintf(yyout, "Оператор для определения типа данных переменной: %s\n", yytext);}
\bunique\b {fprintf(yyout, "Ключевое слово, резервированное для возможного использования в будущем: %s\n", yytext);}
\bunknown\b {fprintf(yyout, "Тип данных: %s\n", yytext);}
\bvar\b {fprintf(yyout, "Ключевое слово, объявляющее переменную с функциональной областью видимости: %s\n", yytext);}


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
