#include <stdio.h>

int GiaiThua(int n) {
    int giai_thua = 1;
    for (int i = 1; i<= n; i++) {
        giai_thua *= i;
    }
    return giai_thua;
}

int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Giai thua cua %d la: %d", n, GiaiThua(n));
    return 0;
}