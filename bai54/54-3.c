#include <stdio.h>

void NhapMaTran(int a[][100], int m, int n) {
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
}

void XuatMaTran(int a[][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
}

int main()
{
    int a[100][100];
    int m, n;
    printf("Nhap so hang n: "); scanf("%d", &n);
    printf("Nhap so cot m: "); scanf("%d", &m);
    printf("Nhap vao ma tran: \n");
    NhapMaTran(a, n, m);
    XuatMaTran(a, n, m);

    int tg;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            tg = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = tg;
        }
    tg = n;
    n = m;
    m = tg;

    printf("\nMang sau khi doi hang thanh cot, cot thanh hang la: \n");
    XuatMaTran(a, n, m);
}