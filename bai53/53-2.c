#include <stdio.h>
#include <conio.h>

int main()
{
    int a[50];
    int i, n;
    printf("Nhap so phan tu mang: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("\nNhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("\nMang vua nhap la: ");
    for (i = 0; i < n; i++)
        printf("%5d", a[i]);
    getch();
}