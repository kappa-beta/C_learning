/*
Функция возведения в степень.
*/

#include <stdio.h>
float f_to_c(float fahr);

int main(void)
{
	printf ("\nTemperature table:\n  F\t     C\n");
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0; /* нижняя граница таблицы температур */
	upper = 300; /* верхняя граница */
	step = 20; /* шаг */
	
	fahr = lower;
	while (fahr <= upper) {
		celsius = f_to_c(fahr);
		printf ("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	printf ("\n");
	return 0;
}

float f_to_c(float fahr) {
	float celsius;
	
	celsius = (5.0/9.0) * (fahr - 32.0);
	
	return celsius;
}