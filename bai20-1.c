#include <stdio.h>

int main()
{
    int a, b;
    printf("Nhap a: ");
    scanf("%d", &a);
    b = a;

    for (;b > 9;) {
        b /= 10;
    }

    printf("\nSo dau tien cua so %d la so %d", a, b);
    
}