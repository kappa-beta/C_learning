/*Упражнение 1.14. Напишите программу, печатающую гистограммы частот встречаемости вводимых
символов.*/

#include <stdio.h>

#define DIMENSION 128

int main(void) {
    int i, j, c;
    int array[DIMENSION]; // массив символов

    // заполнение массива нулями
    for(i = 0; i < DIMENSION; ++i)
        array[i] = 0;

    while((c = getchar()) != EOF) {
        if(c == '\n' || c == ' ' || c == '\t')
            array[c] = 0;
        else
            ++array[c];
    }

    // вывод результата
    for(i = 0; i < DIMENSION; ++i) {
        if(array[i] != 0) {
            printf("%3d %c ", i, i);
            for(j = 0; j < array[i]; ++j) {
                printf("_");
            }
            printf("\n");
        }
    }

    return 0;
}