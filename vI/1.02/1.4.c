/*Упражнение 1.4. Напишите программу, которая будет печатать таблицу соответствия температур по Цельсию
температурам по Фаренгейту.*/

#include <stdio.h>
/* печать таблицы температур по Фаренгейту и Цельсию для fahr = 0, 20, ..., 300 */
int main(void) {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; /* нижняя граница таблицы температур */
	upper = 300; /* верхняя граница */
	step = 20; /* шаг */
	celsius = lower;

	printf("C to F\n");

	while (celsius <= upper) {
		// celsius = (5.0/9.0) * (fahr-32.0);
		fahr = celsius * (9.0 / 5.0) + 32.0;
		// printf ("%3.0f %6.1f\n", fahr, celsius);
		printf ("%3.0f %6.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
	return 0;
}