/*Упражнение 1.20. Напишите программу detab, заменяющую символы табуляции во вводимом тексте нужным
числом пробелов (до следующего "стопа" табуляции). Предполагается, что "стопы" табуляции расставлены на
фиксированном расстоянии друг от друга, скажем, через n позиций. Как лучше задавать n — в виде значения
переменной или в виде именованной константы?*/

#include <stdio.h>

#define MAXLINE 1000
#define N 4

//Prototype
int getline(char line[], int lim);

int main(void) {
	char line[MAXLINE];
	int len;
	while((len = getline(line, MAXLINE)) > 0) {
		printf("Line: %s\n", line);
	}
	return 0;
}

int getline(char line[], int lim) {
	int c, i, j;
	i = 0;
	while(i < lim - 1 && (c = getchar()) != EOF && c != '\n') {
		if (c == '\t') {
			for(j = 0; j < N; ++j) {
				line[i + j] = '_';
			}
			i = i + j;
		}
		else {
			line[i] = c;
			++i;
		}
	}
	line[i] = '\0';
	return i;
}