# TypeScript_compiler

win_flex -main.cpp lexer.l # Создание кода лексера
g++ -omain main.cpp # Компиляция кода, создание exe-файла

win_bison --verbose -Wcounterexamples ../parser.y # Нахождение конфликтов, приведение примеров. Добавляет файл parser.output

Папка win_flex_bison-2.5.25 должна быть добавлена в переменную PATH