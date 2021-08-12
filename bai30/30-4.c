#include <stdio.h>

int UCLN(int a, int b) {
    if (a * b == 0) 
        return a + b;
    if (a > b)
        return UCLN(a - b, b);
    else UCLN(a, b - a);
}

int main()
{
    int a, b;
    printf("Nhap a: "); scanf("%d", &a);
    printf("Nhap b: "); scanf("%d", &b);

    printf("\nUCLN cua %d va %d la: %d", a, b, UCLN(a, b));
}