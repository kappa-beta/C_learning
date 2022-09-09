/*Упражнение 1.20. Напишите программу detab, заменяющую символы табуляции во вводимом тексте нужным
числом пробелов (до следующего "стопа" табуляции). Предполагается, что "стопы" табуляции расставлены на
фиксированном расстоянии друг от друга, скажем, через n позиций. Как лучше задавать n — в виде значения
переменной или в виде именованной константы?*/

#include <stdio.h>

#define MAXLINE 1000
#define TAB 8

//Prototype
int getline(char line[], int limit);

int main(void) {
    int len;
    char line[MAXLINE];

    while((len = getline(line, MAXLINE)) > 0) {
        printf("%d %s\n", len, line);
    }

    return 0;
}

int getline(char s[], int lim) {
    int c, tab;
    int i = 0;

    while(i < lim - 1 && (c = getchar()) != EOF && c != '\n') {
        if(c == '\t') {
            for(tab = TAB - (i - (i / TAB) * TAB); tab > 0; --tab) {
                s[i] = '_';
                ++i;
            }
        }
        s[i] = c;
        ++i;
    }
    if(c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    return i;
}