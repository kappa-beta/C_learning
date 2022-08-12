#include <stdio.h>
 
int main (void)
{	
	int c;
	int space = 0, nl = 0, tab = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++space;
		if (c == '\n')
			++nl;
		if (c == '\t')
			++tab;
	}
	printf ("Space: %d\n", space);
	printf ("New line: %d\n", nl);
	printf ("Tabs: %d\n", tab);
}