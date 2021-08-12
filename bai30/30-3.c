#include <stdio.h>

int Dem(int n) {
    if (n == 0) return 0;
    return 1 + Dem(n / 10);
}

int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("\nSo luong chu so cua %d la: %d", n, Dem(n));
    return 0;
}