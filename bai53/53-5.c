#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, n, a[50], s = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
        if (a[i] > 0)
            s += a[i];
    printf("Tong cac so duong trong day la: %d", s);
    for (i = 0; i < n; i++)
        if (a[i] < 0) {
            for (j = i; j < n - 1; j++)
                a[j] = a[j + 1];
            n = n -1;
        }
    printf("\nDay so sau khi xoa la: ");
    for (i = 0; i < n; i++)
        printf("%5d", a[i]);
    getch();
}