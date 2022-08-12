/*
Упражнение 1.18. Напишите программу, которая будет в каждой вводимой строке заменять стоящие подряд
символы пробелов и табуляций на один пробел и удалять пустые строки.
*/

#include <stdio.h>

#define MAXLINE 1000

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
	int c, i;
	i = 0;
	while(i < lim - 1 && (c = getchar()) != EOF && c != '\n') {
		if (c == ' ' || c == '\t') {
			line[i] = ' ';
			++i;
			while(((c = getchar()) == ' ') || (c == '\t') || (c == '\n')) {
				;
			}
		}
		line[i] = c;
		++i;			
	}
	line[i] = '\0';
	return i;
}