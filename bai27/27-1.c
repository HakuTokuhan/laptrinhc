#include <stdio.h>

int cong(int a, int b) {
    return a + b;
}
int tru(int a, int b) {
    return a - b;
}
int nhan(int a, int b) {
    return a * b;
}
int chia(int a, int b) {
    return (float) a / b;
}

int main()
{
    int a, b;
    printf("Nhap a: "); scanf("%d", &a);
    printf("Nhap b: "); scanf("%d", &b);

    printf("\n%d + %d = %d", a, b, cong(a, b));
    printf("\n%d - %d = %d", a, b, tru(a, b));
    printf("\n%d * %d = %d", a, b, nhan(a, b));
    if (b != 0) printf("\n%d / %d = %f", a, b, chia(a, b));
}