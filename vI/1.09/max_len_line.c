/*Поиск самой длинной строки*/

#include <stdio.h>

#define MAXLINE 1000 // максимальный размер массива

//Prototype
int getline(char linef[], int lim); //записывает строку в массив и выводит её длину
void copy(char to[], char fromf[]); // копирует строку в новый массив

int main(void) {
	int len; // длина строки
	int max; // максимальная длина строки
	char line[MAXLINE]; // массив для строки
	char longest[MAXLINE]; //массив для максимальной строки
	max = 0;
	
	while((len = getline(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}
	
	if(max > 0)
		printf("%s", longest);
	
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

void copy(char to[], char from[]) {
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}