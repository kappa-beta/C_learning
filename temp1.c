/*
Упражнение 1.22. Напишите программу, печатающую символы входного потока так, чтобы строки текста не выходили правее n-й позиции. Это значит, что каждая строка, длина которой превышает n, должна печататься с переносом на следующие строки. Место переноса следует "искать" после последнего символа, отличного от символа-разделителя, расположенного левее n-й позиции. Позаботьтесь о том, чтобы ваша программа вела себя разумно в случае очень длинных строк, а также когда до n-й позиции не встречается ни одного символа пробела или табуляции.
*/

#include <stdio.h>

#define MAXLINE 1000
#define N 8 //ограничение длины строки
#define TAB 8

//Prototype
int getline(char line[], int lim);
int rod(int i, int j);

int main(void) {
	char line[MAXLINE];
	int len; //Длина строки
	int i; //Итерируемый параметр
	while((len = getline(line, MAXLINE)) > 0) {
		for(i = 0; i < len; ++i) {
			printf("%c", line[i]);
		}
		printf("\n\n");
	}
	return 0;
}

int getline(char line[], int lim) {
	int c, i, j;
	i = 0;
	j = 0;
	while(i < lim - 1 && (c = getchar()) != EOF && c != '\n') {
		printf("1. i: %d - c: %c\n", i, c);
		if(c == '\t') {
			j = TAB - rod(i,TAB) + i;
		}
		printf("j:%d\n", j);
		if(j != 0 && rod(j,N) == 0) {
			line[i] =  '\n';
			++i;
			j = 0;
		}
		line[i] = c;
		++i;
		++j;
	}
	line[i] = '\0';
	return i;
}

int rod(int number, int divider) {
	//Остаток от деления
	return number - (number / divider) * divider;
}