#include <stdio.h>

int main (void) {
	int i, c, wl;
	wl = 0;
	
	while ((c = getchar()) != EOF) {
		++wl;
		if (c == '\n' || c == '\t' || c == ' ') {
			for (i = 1; i < wl; ++i) {
				printf("_");
			}
			putchar('\n');
			wl = 0;
		}
	}
	return 0;
}