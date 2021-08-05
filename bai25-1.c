#include <stdio.h>

int main()
{
    int a, b, bcnn;
    printf("Nhap a: "); scanf("%d", &a);
    printf("Nhap b: "); scanf("%d", &b);
    int maxV = a * b;
    for (int i = 1; i <= maxV; i++) {
        if (i % a == 0 && i % b == 0) {
            bcnn = i;
            break;
        }
    }
    printf("BCNN(%d, %d) = %d", a, b, bcnn);

}