#include <stdio.h>
#include <conio.h>

const int MAX = 100;

void NhapMaTran(int a[][MAX], int m, int n) {
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
}

void XuatMaTran(int a[][MAX], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
}

int PhanTuLonNhat(int a[][MAX], int m, int n) {
    int max = a[0][0];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (max < a[i][j])
                max = a[i][j];
    return max;
}

int PhanTuNhoNhat(int a[][MAX], int m, int n) {
    int min = a[0][0];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (min > a[i][j])
                min = a[i][j];
    return min;
}

int main()
{
    int a[MAX][MAX];
    int m, n;
    printf("Nhap so hang m: "); scanf("%d", &m);
    printf("Nhap so cot n: "); scanf("%d", &n);
    printf("Nhap vao ma tran:\n");
    NhapMaTran(a, m, n);
    printf("Ma tran vua nhap la: \n");
    XuatMaTran(a, m, n);
    printf("\nPhan tu lon nhat la %d", PhanTuLonNhat(a, m, n));
    printf("\nPhan tu nho nhat la %d", PhanTuNhoNhat(a, m, n));
    return 0;
}