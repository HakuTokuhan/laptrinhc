#include <stdio.h>
#include <conio.h>

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
    int s = 0;
    for (int i = 0; i < m; i += 2)
        for (int j = 0; j < n; j++)
            s += a[i][j];
    return s;
}

int TimMax(int a[][MAX], int m, int n) {
    int max = a[0][0];
    for (int i = 1; i < m; i++)
        if (a[i][0] > max)
            max = a[i][0];
    return max;
}

int main()
{
    int a[MAX][MAX];
    int  m, n;
    printf("Nhap so hang m: "); scanf("%d", &m);
    printf("Nhap so cot n: "); scanf("%d", &n);
    printf("Nhap vao ma tran:\n");
    NhapMaTran(a, m, n);
    printf("Ma tran vua nhap la: \n");
    XuatMaTran(a, m, n);

    printf("\nTong pt tren hang chan cua mang la: %5d", TinhTong(a, m, n));
    
    printf("\nGia tri max tren cot 1 cua mang la %5d", TimMax(a, m, n));

    getch();
}