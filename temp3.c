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
void entab(char string[], int lim);
int rod(int i, int j);

int main(void) {
	char line[MAXLINE];
	int len; //Длина строки
	int i; //Итерируемый параметр
	while((len = getline(line, MAXLINE)) > 0) {
		// printf("Line string:\n%s\n", line);
		// printf("Line char:\n");
		for(i = 0; i < len; ++i) {
			printf("%c", line[i]);
		}
		// entab(line, len);
		// printf("%s\n", line);
		printf("\n\n");
	}
	return 0;
}

int getline(char line[], int lim) {
	int c, i, j, k;
	i = 0;
	while(i < lim - 1 && (c = getchar()) != EOF && c != '\n') {
		// printf("1. i: %d - c: %c\n", i, c);
		if (c == '\t') {
			for(j = 0; j < (N - rod(i,N)); ++j) {
				line[i + j] = '_';
				// printf("		2. i: %d - c: %c\n", i, c);
			}
			i = i + j;
			// ++i;
			// printf("	3. i: %d - c: %c\n", i, c);
		}
		// printf("4. i: %d - c: %c\n", i, c);
		else {
			line[i] = c;
			++i;
			// printf("4. i: %d - c: %c\n", i, c);			
		}
	}
	line[i] = '\0';
	return i;
}

void entab(char s[], int len) {
	int i, j, k;
	for(i = 0; i < len; ++i) {
		if(s[i] == ' ') {
			j = 0;
			while(s[i + j] == ' ') {
				++j;
			}
			printf("%d\n", j);
			i = i + j;
		}
	}
}

int rod(int number, int divider) {
	//Остаток от деления
	return number - (number / divider) * divider;
}