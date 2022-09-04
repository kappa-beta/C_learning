/*Упражнение 1.16. Перепишите main предыдущей программы так, чтобы она могла печатать самую длинную
строку без каких-либо ограничений на ее размер.*/

#include <stdio.h>

#define MAXLINE 5 // максимальный размер массива

//Prototype
int getline_while(char linef[], int lim); //записывает строку в массив и выводит её длину
void copy(char to[], char fromf[]); // копирует строку в новый массив

int main(void) {
    int len; // длина строки
    int max; // максимальная длина строки
    char line[MAXLINE]; // массив для строки
    char longest[MAXLINE]; //массив для максимальной строки
    max = 0;
    
    while((len = getline_while(line, MAXLINE)) > 0) {
        // printf("%d\n", len);
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    
    if(max > 0) {
        printf("%d ", max);
        printf("%s", longest);
    }
    
    return 0;
}

int getline_while(char s[], int lim) {
    int c, i;
    i = 0;
    while((c = getchar()) != EOF && c != '\n') {
        if(i < lim - 1) {
            s[i] = c;
        }
        else if(i == lim -1) {
            s[i] = '\0';
        }
        ++i;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[]) {
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}