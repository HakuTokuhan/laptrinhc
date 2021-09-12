#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

const int MAX = 50;

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

int TinhTong(int a[][MAX], int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            sum += a[i][j];
    return sum;
}

int Min(int a[][MAX], int m, int n) {
    int min = -1;
    bool check = false;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] % 3 == 0) {
                if (!check) {
                    min = a[i][j];
                    check = true;
                }
                else
                    if (min > a[i][j])
                        min = a[i][j];
            }
    return min;
}

int main()
{
    int a[MAX][MAX];
    int m, n;
    printf("Nhap so hang m: "); scanf("%d", &m);
    printf("Nhap so cot n: "); scanf("%d", &n);
    printf("Nhap vao ma tran: \n");
    NhapMaTran(a, m, n);
    printf("Ma tran vua nhap la:\n");
    XuatMaTran(a, m, n);

    int tg, k;
    for (int j = 0; j < m - 1; j++)
        for ( k = j + 1; k < m; k++)
            if (a[1][j] < a[1][k]) {    
                tg = a[1][j];
                a[1][j] = a[1][k];
                a[1][j] = tg;
            }
    printf("\nMa tran vua xap xep hang 2 la: \n");
    XuatMaTran(a, m, n);
    printf("\nTong cac phan tu la: %d", TinhTong(a, m, n));
    int min = Min(a, m ,n);
    if (min == -1)
        printf("\nTrong mang vua nhap khong co so chia het cho 3");
    else
        printf("\nSo nho nhat trong cac so chia het cho 3 co trong day la %d", min);
    return 0;
}