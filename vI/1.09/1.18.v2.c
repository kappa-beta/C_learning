/*Упражнение 1.18. Напишите программу, которая будет в каждой вводимой строке заменять стоящие подряд
символы пробелов и табуляций на один пробел и удалять пустые строки.*/

#include <stdio.h>

#define DIMENSION 1000 // максимальная длина строки

//Prototype
int getline_while(char linef[], int lim);

int main(void) {
    int len; // длина строки
    char line[DIMENSION]; // массив для строки
    
    while ((len = getline_while(line, DIMENSION)) > 0) {
        printf("%s", line);
    }
    
    return 0;
}

int getline_while(char s[], int lim) {
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        if (c == ' ' || c == '\t') {
            s[i] = ' ';
            ++i;
            while ((c = getchar()) == ' ' || c == '\t' || c == '\n')
                ;
        }
        s[i] = c;
    }
    if (c == '\n' && i > 1) {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    printf("%d\n", s[i]);
    return i;
}