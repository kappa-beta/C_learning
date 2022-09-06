/*Упражнение 1.17. Напишите программу печати всех вводимых строк, содержащих более 80 символов.*/

#include <stdio.h>

#define DIMENSION 1000 // максимальная длина строки
#define LIMIT 5 // минимальная длина строки

//Prototype
int getline(char linef[], int lim);

int main(void) {
    int len; // длина строки
    char line[DIMENSION]; // массив для строки
    
    while((len = getline(line, DIMENSION)) > 0) {
        if (len > LIMIT) {
            printf("%s", line);
        }
    }
    
    return 0;
}

int getline(char s[], int lim) {
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}