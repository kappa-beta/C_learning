/*Упражнение 1.14. Напишите программу, печатающую гистограммы частот встречаемости вводимых
символов.*/

#include <stdio.h>

#define DIMENSION 128

int main (void) {
	int i, j, c, k;
	int ch[DIMENSION];
	
	for (i = 0; i < DIMENSION; ++i) {
		ch[i] = 0;
	}
	
	while ((c = getchar()) != EOF) {	
		++ch[c];
	}
	
	for (i = 0; i < DIMENSION; ++i) {
		k = ch[i];
		if (k != 0) {
			putchar(i);
			putchar(' ');
			for (j = 0; j < k; ++j) {
				putchar('_');
			}
			printf(" %d", k);
			putchar('\n');
		}
	}
	
	return 0;
}