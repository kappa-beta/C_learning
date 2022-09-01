/*вывод введенной строки*/

#include <stdio.h>

#define MAXLINE 1000 // максимальный размер массива

//prototype
int getline(char array[], int dimension);

int main(void) {
	char line[MAXLINE];

	while(getline(line, MAXLINE) > 1)
		;

	return 0;
}

int getline(char line[], int lim) {
	int c;
	int i = 0;

	while((c = getchar()) != '\n') {
		line[i] = c;
		++i;
	}

	printf("%s %d\n", line, i);

	return i;
}