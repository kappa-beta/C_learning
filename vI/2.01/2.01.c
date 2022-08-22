/*Упражнение 2.1. Напишите программу, которая будет выдавать диапазоны значений типов char, short,
int и long, описанных как signed и как unsigned, с помощью печати соответствующих значений из
стандартных заголовочных файлов и путем прямого вычисления. Определите диапазоны чисел с плавающей
точкой различных типов. Вычислить эти диапазоны сложнее.*/

#include <stdio.h>

int main(void) {
    unsigned char val_1, val_1_max;
    signed char val_2, val_2_max, val_2_min;
    unsigned short int val_3, val_3_max;
    signed short int val_4, val_4_max;
    double val_5, val_5_min, val_5_max;
    // long int val_4, val_4_max;
    // short int val_3, val_3_max;
    // long int val_3, val_3_max, val_3_min;

    val_1 = 0;
    while (++val_1 > 0) {
        val_1_max = val_1;
    }
    printf("%d\n", val_1_max);

    val_2 = 0;
    while (++val_2 > 0) {
        val_2_max = val_2;
    }
    printf("%d\n", val_2_max);

    val_2 = 0;
    while (--val_2 < 0) {
        val_2_min = val_2;
    }
    printf("%d\n", val_2_min);

    val_3 = 0;
    while (++val_3 > 0) {
        val_3_max = val_3;
    }
    printf("%d\n", val_3_max);

    val_4 = 0;
    while (++val_4 > 0) {
        val_4_max = val_4;
    }
    printf("%d\n", val_4_max);

    // val_5 = 1;
    // while (val_5 > 0) {
    //     val_5_min = val_5;
    //     val_5 = val_5 / 10;
    //     printf("%.2E\n", val_5);
    // }
    // printf("%.2E", val_5_min);

    val_5 = 1.7e308;

    val_5 = 1;
    while (val_5 * 10 != val_5) {
        val_5_max = val_5;
        val_5 = val_5 * 10;
    }
    printf("%e %e\n", val_5, val_5_max);

    return 0;
}