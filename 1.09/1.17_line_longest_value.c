/*
Упражнение 1.17. Напишите программу печати всех вводимых строк, содержащих более 80 символов.
*/

#include <stdio.h>

#define MAXLINE 1000
#define LINE_LIMIT 10

//Prototype
int getline(char linef[], int lim);
void copy(char to[], char fromf[]);

int main(void) {
	int len;
	char line[MAXLINE];

	while((len = getline(line, MAXLINE)) > 0) {
		if (len > LINE_LIMIT) {
			printf("Line longer %d characters: %s", LINE_LIMIT, line);
		}
	}
	
	return 0;
}

int getline(char s[], int lim) {
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy (char to[], char from[]) {
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}