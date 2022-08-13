#include <stdio.h>
/* печать таблицы температур по Фаренгейту
и Цельсию для fahr = 0, 20, ..., 300 */
int main(void) {
	printf ("\nTemperature table:\n  C\t     F\n");
	float fahr, celsius;
	int lower, upper, step;
	
	lower = -20; /* нижняя граница таблицы температур */
	upper = 150; /* верхняя граница */
	step = 10; /* шаг */
	
	celsius = lower;
	while (celsius <= upper) {
		fahr = (9.0/5.0) * celsius + 32.0;
		printf ("%3.0f\t%6.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
	printf ("\n");
}