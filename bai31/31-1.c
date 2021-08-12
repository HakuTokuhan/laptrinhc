#include <stdio.h>

int Dao(int n) {
    int tam = n % 10;
    n /= 10;
    int socuoi;
    while (n > 0) {
        socuoi = n % 10;
        n /= 10;
        tam = tam * 10 + socuoi;
    }
    return tam;
}

int main()
{
    int n;
    printf("Nhap n: "); scanf("%d", &n);
    printf("\nSo dao cua %d la: %d", n, Dao(n));
    return 0;
}