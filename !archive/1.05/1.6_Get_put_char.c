//пример использования функции getchar
 
#include <stdio.h>
 
int main ()
{
	char character;
	printf ("Enter character:\n");
	while (character = getchar() != EOF)
		putchar (character);
	return 0;
}