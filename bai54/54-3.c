#include <stdio.h>

void NhapMaTran(int a[][100], int n, int m) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
}

void XuatMaTran(int a[][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
}

void ChuyenVi(int a[][100], int n, int m, int b[][100]) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            b[j][i] = a[i][j];
}

int main()
{
    int a[100][100], b[100][100];
    int m, n;
    printf("Nhap so hang n: "); scanf("%d", &n);
    printf("Nhap so cot m: "); scanf("%d", &m);
    printf("Nhap vao ma tran: \n");
    NhapMaTran(a, n, m);
    XuatMaTran(a, n, m);

    ChuyenVi(a, n, m, b);

    printf("\nMang sau khi doi hang thanh cot, cot thanh hang la: \n");
    XuatMaTran(b, m, n);
}