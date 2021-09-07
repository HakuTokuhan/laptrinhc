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

void ChuyenVi(int a[][100], int m, int n, int b[][100]) {
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            b[j][i] = a[i][j];
}

int main()
{
    int a[100][100], b[100][100];
    int m, n;
    printf("Nhap so hang m: "); scanf("%d", &m);
    printf("Nhap so cot n: "); scanf("%d", &n);
    printf("Nhap vao ma tran: \n");
    NhapMaTran(a, m, n);
    XuatMaTran(a, m, n);

    ChuyenVi(a, m, n, b);

    printf("\nMang sau khi doi hang thanh cot, cot thanh hang la: \n");
    XuatMaTran(b, n, m);
}