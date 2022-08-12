/*
Упражнение 1.18. Напишите программу, которая будет в каждой вводимой строке заменять стоящие подряд
символы пробелов и табуляций на один пробел и удалять пустые строки.
*/

#include <stdio.h>

#define MAXLINE 1000
#define RANGE 32

//Prototype

int main(void) {
	int array[MAXLINE];
	char temp[MAXLINE];
	char s_array[MAXLINE];
	int i, j, c;
	// i = 0;
	
	
	
	// for (i = 0; i < RANGE; ++i) {
		// // printf("%d ", i);
		// array[i] = i;
	// }
	// printf("Number array: ");
	// for (i = 0; i < RANGE; ++i) {
		// printf("%d ", array[i]);
	// }
	// printf("\n");
	
	
	
	// for (i = 0; i < RANGE; ++i) {
	// // printf("%d ", i);
	// temp[i] = i;
	// }
	// printf("Symbol array: ");
	// for (i = 0; i < RANGE; ++i) {
		// printf("%d ", temp[i]);
	// }
	// printf("\n");
	
	
	
	i = 0;
	while((c = getchar()) != EOF && i < RANGE) {
		printf("1. i: %d; c: %c\n", i, c);
		if (c != '\n') {
			if (c == ' ' || c == '\t') {
				s_array[i] = ' ';
				// while((c = getchar()) == ' ' || (c = getchar()) == '\t') {
				while((c = getchar()) == ' ' || c == '\t') {
					// s_array[i] = '_';
					;
				}
				++i;
				printf("2. i: %d; c: %c\n", i, c);
			}
			// printf("%c\n", c);
			s_array[i] = c;
			++i;
		}
	}
	
	printf("count i: %d\n", i);
	printf("String: ");
	for (j = 0; j < i; ++j) {
		printf("%c", s_array[j]);
	}
	// printf("%d", i);
	
	// s_array[RANGE] = '\n';
	s_array[i] = '\0';
	printf("\nString: %s\n", s_array);
	
	return 0;
}