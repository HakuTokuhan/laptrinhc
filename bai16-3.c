#include <stdio.h>

int main()
{
    int a, b, tong;
    printf("\nNhap a, b (a < b): ");
    scanf("%d%d", &a, &b);

    for (int i = a; i <= b; i++) {
        tong += i;
    }

    printf("\nTong cac so tu a -> b la: %d", tong);
    
}