#include <stdio.h>

void In(int n) {
    for (int i = 1; i <= n; i++) printf("\nLap trinh khong kho!");
}

void InUoc(int n) {
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) printf("%d  ", i);
    }
}

int main()
{
    int a, b;
    printf("\nNhap so lan in: "); scanf("%d", &a);
    In(a);
    printf("\n-----------------------");
    printf("\nNhap so nguyen: "); scanf("%d", &b);
    printf("\nCac uoc cua so %d la: ", b);
    InUoc(b);
}