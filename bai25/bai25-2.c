#include <stdio.h>

int main()
{
    int a, b, bcnn;
    printf("Nhap a: "); scanf("%d", &a);
    printf("Nhap b: "); scanf("%d", &b);

    int i, tam;
    for (i = 1;; i++) {
        tam = a * i;
        if (tam % b == 0) {
            bcnn = tam;
            break;
        }
    }
    printf("BCNN(%d, %d) = %d", a, b, bcnn);
}