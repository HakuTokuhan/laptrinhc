#include <stdio.h>
#include <conio.h>

int main()
{
    int a[50][50];
    int i, j, m, n;
    printf("Nhap so hang n: "); scanf("%d", &n);
    printf("Nhap so cot m: "); scanf("%d", &m);
    printf("Nhap vao ma tran:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++) {
            printf("Nhap a[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    printf("Ma tran vua nhap la: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++)
            printf("%d  ", a[i][j]);
        printf("\n");
    }
    
    float s = 0;
    for (i = 0; i < n; i += 2)
        for (j = 0; j < m; j++)
            s += a[i][j];
    printf("\nTong pt tren hang chan cua mang la: %5f", s);

    int max = a[0][0];
    for (i = 1; i < n; i++)
        if (a[i][0] > max)
            max = a[i][0];
    printf("\nGia tri max tren cot 1 cua mang la %5d", max);
    getch();
}