#include <stdio.h>
#include <conio.h>

const int MAX = 10;
int x = 0;

void NhapMaTran(int a[][MAX], int m, int n) {
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            char the = 'A';
            if (x != 0) the = 'B';
            printf("%c[%d][%d] = ", the, i, j);
            scanf("%d", &a[i][j]);
        }
    x++;
}

void XuatMaTran(int a[][MAX], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
}

void Gop(int a[][MAX], int b[][MAX], int c[][MAX], int m, int n) {
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            c[i][j] = a[i][j] + b[i][j];
}

int TinhTong(int a[][MAX], int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            sum += a[i][j];
    return sum;
}

int main()
{
    int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];
    int m, n;
    printf("Nhap so hang m: "); scanf("%d", &m);
    printf("Nhap so cot n: "); scanf("%d", &n);
    printf("Nhap vao ma tran: \n");
    NhapMaTran(a, m, n);
    printf("\n");
    NhapMaTran(b, m, n);
    Gop(a, b, c, m, n);
    printf("\nMa tran sau cong: \n");
    XuatMaTran(c, m, n);
    printf("\nTong 2 ma tran la: %d", TinhTong(c, m, n));
    return 0;
}