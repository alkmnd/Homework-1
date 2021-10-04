
#ifndef UNTITLED7_APHORISM_H
#define UNTITLED7_APHORISM_H

#include <stdio.h>
// Базовая структура, которая описывает афоризмы.
struct aphorism {
    char author[10001];

};

// Метод для считывания данных.
int In(aphorism *a, FILE* input_file);

// Вывод данных.
void Out(const aphorism *pr, FILE* output_file);

#endif //UNTITLED7_APHORISM_H
