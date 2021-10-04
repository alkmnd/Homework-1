

#ifndef UNTITLED7_PROVERB_H
#define UNTITLED7_PROVERB_H
#include <stdio.h>

// Базовая структура для описания пословицы.
struct proverb {
char country[10001];
};
// Считывание данных.
int In(proverb *pr, FILE* input_file);
// Вывод данных.
void Out(const proverb *pr, FILE* output_file);


#endif //UNTITLED7_PROVERB_H
