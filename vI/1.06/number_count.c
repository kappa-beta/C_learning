/*Подсчёт символов: цифр, символов-разделителей и всех других символов*/

#include <stdio.h>

int main(void) {
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    // генерация пустого массива
    for (i = 0; i < 10; ++i)
        ndigit[i]= 0;

    // перебор символов входного потока
    while ((c = getchar()) != EOF)
        if (c >= '0' && c <= '9')
            ++ndigit[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    // вывод результата
    printf ("numbers =");

    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf (", spaces = %d, other = %d\n", nwhite, nother);

    return 0;
}