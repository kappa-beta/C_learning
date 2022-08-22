/*Упражнение 1.19. Напишите функцию reverse(s), размещающую символы в строке s в обратном порядке.
Примените ее при написании программы, которая каждую вводимую строку располагает в обратном порядке.*/

#include <stdio.h>

#define MAXLINE 1000

//Prototype
int getline(char line[], int lim);
void reverse(char to[], char from[], int lim);

int main(void) {
	char line[MAXLINE];
	char r_line[MAXLINE];
	int len;
	while((len = getline(line, MAXLINE)) > 0) {
		printf("Line: %s\n", line);
		reverse(r_line, line, len);
		printf("Line: %s\n", r_line);
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

void reverse(char to[], char from[], int lim) {
	int i;
	i = 0;
	// printf("lim: %d\n", lim);
	while (i < lim) {
		// printf("%d ", lim - i - 1);
		to[i] = from[lim - i - 1];
		// printf("i: %d - to: %c - from: %c\n", i, to[i], from[lim - i - 1]);
		++i;
	}
	to[i] = '\0';
}