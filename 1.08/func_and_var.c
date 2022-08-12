/*
Тест функции
*/

#include <stdio.h>

int  func(int argument1);

int main(void) {
	int x;
	x = 2;
	printf("%d %d ", x, func(x));
	x = func(x);
	printf("%d", x);
	return 0;
}

int func(int x) {
	return x - 1;
}