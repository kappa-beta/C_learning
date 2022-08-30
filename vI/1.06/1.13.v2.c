/*Упражнение 1.13. Напишите программу, печатающую гистограммы длин вводимых слов. Гистограмму легко
рисовать горизонтальными полосами. Рисование вертикальными полосами — более трудная задача.*/

#include <stdio.h>

#define WORDLENGTH 16 // максимальная длина слова
#define DIAGRAM 32

int main(void) {
    int c, i, k = 0, sl = 0;
    int diagram[DIAGRAM];
    int row, col;

    // входящий поток
    while((c = getchar()) != EOF) {
        if((c == '\n' || c == '\t' || c == ' ') && sl > 0) {
            if(sl > WORDLENGTH)
                sl = WORDLENGTH;
            diagram[k] = sl;
            sl = 0;
            ++k;
        }
        else {
            ++sl;
        }
    }

    // заполнение остатка массива нулями
    if(k < DIAGRAM) {
        for(i = k; i < DIAGRAM; ++i) {
            diagram[i] = 0;
        }
    }

    // вывод значений массива
    printf("\nWord count array:\n");
    for(i = 0; i < DIAGRAM; ++i) {
        printf("%d ", diagram[i]);
    }

    // вывод диаграммы длины слов
    printf("\n\nWord count diagram:\n");
    for(row = WORDLENGTH; row >= 0; --row) {
        for(col = 0; col < DIAGRAM; ++col) {
            if(diagram[col] <= row)
                printf("  ");
            else
                printf(" |");
        }
        printf("\n");
    }

    return 0;
}