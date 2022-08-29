/*Подсчёт символов: цифр, символов-разделителей и всех других символов*/

#include <stdio.h>

#define WORDLENGTH 32
#define DIAGRAM 100
#define IN 1
#define OUT 0

int main(void) {
    int c, i, k = 0, sl = 0;
    int state = OUT;
    int diagram[DIAGRAM];

    // входящий поток
    while((c = getchar()) != EOF) {
        // ++sl;
        // if(c == '\n' || c == '\t' || c == ' ') {
        //     diagram[k] = sl - 1;
        //     sl = 0;
        //     ++k;
        // }
        if(c != '\n' || c != '\t' || c != ' ') {
            // state = IN;
            ++sl;
        }
        else if(c == '\n' || c == '\t' || c == ' ') {
            // state = OUT;
            diagram[k] = sl - 1;
            sl = 0;
            ++k;
            while((c = getchar()) == '\n' || c == '\t' || c == ' ') {
                ;
            }
        }
        else
            ++sl;
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