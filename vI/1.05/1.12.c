/*Упражнение 1.12. Напишите программу, которая печатает содержимое своего ввода, помещая по одному
слову на каждой строке.*/

#include <stdio.h>

int main(void) {
	int c;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t') {
			putchar('\n');
			while ((c = getchar()) == ' ' || c == '\t') {
				;
			}
		}
		putchar(c);
	}
	return 0;
}