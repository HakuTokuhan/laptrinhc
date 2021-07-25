#include <stdio.h>

int main()
{
    int a, b;
    printf("\nNhap a: "); scanf("%d", &a);
    printf("\nNhap b: "); scanf("%d", &b);

    // Trước khi đổi
    printf("\na = %d, b = %d", a, b);

    // Hoán vị
    int tg = a;
    a = b;
    b = tg;

    // Sau khi đổi
    printf("\na = %d, b = %d", a, b);
}