#include <stdio.h>

int main(void) {
    int x = 1, y = 2;
    printf("%d %d\n", &x, &y);
    int *ip; /* ip - указатель на int */
    ip = &x; /* теперь ip указывает на х */
    printf("%d %d %d %d\n", x, &x, ip, &ip);
    y = *ip; /* у теперь равен 1 */
    printf("%d %d %d\n", x, y, ip);
    *ip =0; /* х теперь равен 0 */
    printf("%d %d %d\n", x, y, ip);
    *ip += 10;
    printf("%d %d %d\n", x, y, ip);

    return 0;
}