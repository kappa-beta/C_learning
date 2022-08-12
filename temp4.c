/*
Упражнение 1.22. Напишите программу, печатающую символы входного потока так, чтобы строки текста не выходили правее n-й позиции. Это значит, что каждая строка, длина которой превышает n, должна печататься с переносом на следующие строки. Место переноса следует "искать" после последнего символа, отличного от символа-разделителя, расположенного левее n-й позиции. Позаботьтесь о том, чтобы ваша программа вела себя разумно в случае очень длинных строк, а также когда до n-й позиции не встречается ни одного символа пробела или табуляции.
*/

#include <stdio.h>

#define MAXLINE 1000
#define N 4 //ограничение длины строки
#define TAB 8

//Prototype
int getline(char line[], int lim);
void line_break(char from[], char to[]);
int rod(int i, int j);

int main(void) {
	char line[MAXLINE];
	char result[MAXLINE];
	int len; //Длина строки
	int i; //Итерируемый параметр
	while((len = getline(line, MAXLINE)) > 0) {
		for(i = 0; i < len; ++i) {
			printf("%c", line[i]);
		}
		printf("\n\n");
		line_break(line, result);
		for(i = 0; i < len; ++i) {
			printf("%c", result[i]);
		}
		printf("\n\n");
	}
	return 0;
}

int getline(char line[], int lim) {
	printf("	init getline\n");
	int c, i, j, k;
	i = 0;
	while(i < lim - 1 && (c = getchar()) != EOF && c != '\n') {
		// printf("1. i: %d - c: %c\n", i, c);
		if (c == '\t') {
			for(j = 0; j < (TAB - rod(i,TAB)); ++j) {
				line[i + j] = ' ';
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

void line_break(char from[], char to[]) {
	printf("	init line_break\n");
	int i, j;
	i = 0;
	j = 0;
	// for(i = 0; from[i] != '\0'; i + N) {
	for(i = 0; from[i] != '\0'; i = i + N) {
		printf("1. i: %d\n", i);
		for(j = 0; j <= N; ++j) {
			to[i + j] = from [i + j];
		}
		printf("2. i: %d - j: %d\n", i, j);
		to[i + j + 1] = '\n';
		printf("i + j + 1: %d\n", to[i + j + 1]);
		// to[i] = from[i];
	}
	to[i] = '\0';
}

int rod(int number, int divider) {
	//Остаток от деления
	return number - (number / divider) * divider;
}