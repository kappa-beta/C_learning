/*Упражнение 1.13. Напишите программу, печатающую гистограммы длин вводимых слов. Гистограмму легко
рисовать горизонтальными полосами. Рисование вертикальными полосами — более трудная задача.*/

#include <stdio.h>

#define WORDLENGTH 32
#define DIAGRAM 100

int main(void) {
    int c, i, k = 0, sl = 0;
    int diagram[DIAGRAM];

    // входящий поток
    while((c = getchar()) != EOF) {
        ++sl;
        if(c == '\n' || c == '\t' || c == ' ') {
            diagram[k] = sl - 1;
            sl = 0;
            ++k;
        }
    }

    // заполнение остатка массива нулями
    for(i = k; i < DIAGRAM; ++i) {
        diagram[i] = 0;
    }

    // вывод значений массива
    for(i = 0; i < DIAGRAM; ++i) {
        printf("%d ", diagram[i]);
    }

    return 0;
}