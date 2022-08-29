/*Упражнение 1.23. Напишите программу, убирающую все комментарии из любой Си-программы. Не забудьте
должным образом обработать строки символов и строковые константы. Комментарии в Си не могут быть
вложены друг в друга.*/

#include <stdio.h>

#define MAXCOLUMN 1000
#define MAXROW 1000

//prototype
int getline(int s[], int lim);

int main(void) {
    int c;

    while((c = getchar()) != EOF) {
        putchar(c);
    }

    return 0;
}

int getline(int string[MAXCOLUMN])