#include <stdio.h>
#include <conio.h>

int main()
{
    int a[50];
    int i, n, t = 0, k ,x, d;
    printf("Nhap vao so phan tu: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        if (a[i] % 3 == 0) {
            t += a[i];
            d++;
        }
    if (d == 0)
        printf("Khong co so chia het cho 3 trong day");
    else
        printf("TBC cac so chia het cho 3 trong day la %f", (float)t / d);
    printf("\nNhap gia tri va vi tri can chen x, k =");
    scanf("%d%d", &x, &k);
    for (i = n - 1; i >= k; i--)
        a[i + 1] = a[i];
    a[k] = x;
    printf("\nDay so sau khi chen la: ");
    for (i = 0; i < n; i++)
        printf("%5d", a[i]);
    getch();
}