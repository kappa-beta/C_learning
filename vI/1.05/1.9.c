/*Упражнение 1.9. Напишите программу, копирующую символы ввода в выходной поток и заменяющую
стоящие подряд пробелы на один пробел.*/

#include <stdio.h>

int main(void) {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			putchar(c);
			while ((c = getchar()) == ' ') {
				;
			}
		}
		if (c != ' ') {
			putchar(c);
		}
	}
	return 0;
}