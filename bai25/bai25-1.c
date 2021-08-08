#include <stdio.h>

int main()
{
    int a, b, bcnn, i;
    printf("Nhap a: "); scanf("%d", &a);
    printf("Nhap b: "); scanf("%d", &b);
    int maxV = a * b;

    i = a;
    if (a < b) i = b;

    for (i; i <= maxV; i++) {
        if (i % a == 0 && i % b == 0) {
            bcnn = i;
            break;
        }
    }
    printf("BCNN(%d, %d) = %d", a, b, bcnn);

}