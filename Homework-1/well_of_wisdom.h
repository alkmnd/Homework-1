

#ifndef UNTITLED7_WELL_OF_WISDOM_H
#define UNTITLED7_WELL_OF_WISDOM_H

#include "proverb.h"
#include "puzzle.h"
#include "aphorism.h"
#include <stdio.h>

// Структура объединяет пословицы, загадки и афоризмы.
struct well_of_wisdom {
    enum wisdom_type {PROVERB, APHORISM, PUZZLE} wisdom_type;
    char content[10001];
    union{
        proverb proverb;
        aphorism aphorism;
        puzzle puzzle;
    };
};
//Метод для считывания данных.
int In(well_of_wisdom* wisdom, FILE* input_file);

// Метод для вывода данных.
void Out(const well_of_wisdom* wisdom, FILE* output_file);

// Считает частное от деления количесва знаков препинания на длину строки.
int GetQuotient(const well_of_wisdom* wisdom);
#endif //UNTITLED7_WELL_OF_WISDOM_H
