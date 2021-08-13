#include <stdio.h>

int g_Number = 5; // Biến toàn cục;

void Sum(int a, int b) {
    int sum = a + b; // Biến cục bộ
    printf("\n%d + %d = %d", a, b, sum);
}

int main()
{
    int a, b;
    printf("Nhap a: "); scanf("%d", &a);
    printf("Nhap b: "); scanf("%d", &b);
    Sum(a,b);
    return 0;
}