#include <stdio.h>

int main()
{
    int a, i;
    printf("Nhap a: ");
    scanf("%d", &a);
    i = 1;

    while (i < 2) {
        if (a >= 0) {
            i++;
            printf("So %d la so nguyen duong", a);
        }
        else {
            printf("-----------------------");
            printf("\nNhap lai a: ");
            scanf("%d", &a);
        }
    }
}