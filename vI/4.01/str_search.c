#include <stdio.h>

#define MAXLINE 1000 /*максимальный размер вводимой строки*/

// prototypes
int getline(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould";

// найти все строки содержащие образец
int main (void) {
	char line[MAXLINE];
	int found = 0;

	while ((getlinedine, MAXLINE) > 0) {
		if (strindex(line, pattern) >= 0) {
			printf ("%s", line);
			found++;
		}
	}
	return found;
}

// читает строку в s, возвращает длину
int getline (char s[], int lim) {
	int c, i;
	i = 0;

	while (--lim > 0 && (c = getchar()) != EOF && c != '\n') {
		s[i++] = c;
	}
	if (c == '\n') {
		s[i++] = c;
	}
	s[i] = '\0';
	return i;
}

//