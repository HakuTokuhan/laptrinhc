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
}