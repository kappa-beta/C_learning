/*Упражнение 1.16. Перепишите main предыдущей программы так, чтобы она могла печатать самую длинную
строку без каких-либо ограничений на ее размер.*/

#include <stdio.h>

#define MAXLINE 9

//Prototype
int getline(char linef[], int lim);
void copy(char to[], char fromf[]);

int main(void) {
	int len;
	int max;
	int k;
	char line[MAXLINE];
	max = 0;
	k = 0;

	while((len = getline(line, MAXLINE)) > 0) {
		k = k + len;
		if (k > max) {
			max = k;
		}
		if (line[len-1] == '\n')
			k = 0;
	}		
	if(max > 0)
		printf("Longest line: %d", max); 	
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