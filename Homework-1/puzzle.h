

#ifndef UNTITLED7_PUZZLE_H
#define UNTITLED7_PUZZLE_H

#include <stdio.h>
// Базовая стпуктура для описания загадки.
struct puzzle {
    char answer[10001];

};
// Ввод данных из файла.
int In(puzzle *p, FILE* input_file);
// Вывод данных в файл.
void Out(const puzzle *p, FILE* output_file);


#endif //UNTITLED7_PUZZLE_H
