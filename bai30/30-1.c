#include <stdio.h>

int TinhTong(int n) {
    if (n == 0) {
        return 0;
    }
    return n + TinhTong(n - 1);
}

int main()
{
    int n;
    printf("Nhap n: "); scanf("%d", &n);
    printf("\nTong cac so tu 1 -> %d la: %d", n, TinhTong(n));
}