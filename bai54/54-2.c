#include <stdio.h>

int z = -1, k = -1;

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

void TimKiem(int a[][100], int m, int n, int v) {
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] == v) {
                z = i;
                k = j;
            }
}

int main()
{
    int a[100][100];
    int m, n;
    printf("Nhap so hang n: "); scanf("%d", &n);
    printf("Nhap so cot m: "); scanf("%d", &m);
    printf("Nhap vao ma tran: \n");
    NhapMaTran(a, m, n);
    XuatMaTran(a, m, n);
    
    int v;
    printf("\nNhap vao gia tri can tim: ");
    scanf("%d", &v);
    TimKiem(a, m, n, v);
    printf("\nTim thay so %d tai hang %d, cot %d", v, z, k);
}