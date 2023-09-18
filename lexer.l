%option noyywrap
%option never-interactive

digits [0-9]+

%{
/* Объявление глобальных переменных */
#include <stdio.h>
int integer_count = 0;
%}

/* Описание правил */
%%
digits { /* Если найдено целое число */
         integer_count++;
         printf("Found integer %s\n", yytext);
       }
.|\n  { /* Все остальные символы и переносы строк */
         /* Ничего не делать */
       }
%%

/* Точка входа в программу */
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

    yyin = input_file;
    yylex();
	// Открываем выходной файл для записи
	FILE* output_file = fopen("output.txt", "w");
	if (!output_file) {
		fprintf(stderr, "Error: could not create output file\n");
		fclose(input_file);
		return 1;
	}

	// Записываем результат в выходной файл
	fprintf(output_file, "Количество найденных целых чисел: %d\n", integer_count);

	// Закрываем файлы
	fclose(input_file);
	fclose(output_file);
    return 0;
}
