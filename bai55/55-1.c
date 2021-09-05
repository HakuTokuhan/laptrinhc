#include <stdio.h>
#include <conio.h>

int main()
{
    int a[50][50];
    int i, j, m, n;
    printf("Nhap so hang n: "); scanf("%d", &n);
    printf("Nhap so cot m: "); scanf("%d", &m);
    printf("Nhap vao ma tran: \n");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++) {
            printf("Nhap a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    printf("\nMa tran vua nhap la:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++)
            printf("%3d", a[i][j]);
        printf("\n");
    }
}