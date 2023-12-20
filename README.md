# TypeScript_compiler

flex -main.cpp lexer.l # Создание кода лексера
g++ -omain main.cpp # Компиляция кода, создание exe-файла

win_bison --verbose -Wcounterexamples ../parser.y # Нахождение конфликтов, приведение примеров. Добавляет файл parser.output. Сперва перейти в директорию с win_bison
