/*
Упражнение 1.21. Напишите программу entab, заменяющую строки из пробелов минимальным числом
табуляций и пробелов таким образом, чтобы вид напечатанного текста не изменился. Используйте те же
"стопы" табуляции, что и в detab. В случае, когда для выхода на очередной "стоп" годится один пробел, что
лучше — пробел или табуляция?
*/

#include <stdio.h>

#define MAXLINE 1000
#define N 8

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
	int c, i, j, k;
	i = 0;
	while(i < lim - 1 && (c = getchar()) != EOF && c != '\n') {
		if (c == '\t') {
			for(j = 0; j < (N - rod(i,N)); ++j) {
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

int rod(int number, int divider) {
	//Остаток от деления
	return number - (number / divider) * divider;
}