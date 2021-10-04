

#ifndef UNTITLED7_CONTAINER_H
#define UNTITLED7_CONTAINER_H

#include "well_of_wisdom.h"

// Структура описывает контейнер.
struct container {
public:
    int len;
    well_of_wisdom* content[10001];
};

// Инициализация контейнера.
void Init(container *c);

// Очищение контейнера.
void Clear(container *c);

// Ввод данных в контейнер.
void In(container *c, FILE* input_file);


// Вывод данных из контейнера.
void Out(container *c, FILE* output_file);

// Сортировка элементов в контейнере.
void SortElements(container *c);

#endif //UNTITLED7_CONTAINER_H
