#include <stdio.h>
#define MAX_SIZE 100 

void NhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap vao phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void XuatMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\narr[%d] = %d", i, a[i]);
    }
}

void Max(int a[], int n) {
    int maxValue = a[0];
    for (int i = 0; i < n; i++)
        if (a[i] > maxValue) {
            maxValue = a[i];
        }
    printf("\nVi tri cua phan tu lon nhat la: ");
    for (int i = 0; i < n; i++)
        if (a[i] == maxValue)
        printf("%3d", i);
}

void Min(int a[], int n) {
    int minValue = a[0];
    for (int i = 0; i < n; i++)
        if (a[i] < minValue) {
            minValue = a[i];
        }
    printf("\nVi tri cua phan tu nho nhat la: ");
    for (int i = 0; i < n; i++)
        if (a[i] == minValue)
        printf("%3d", i);
}

int main()
{
    int a[MAX_SIZE];
    int n;
    do {
        printf("Nhap n: ");
        scanf("%d", &n);
    }
    while (n <= 0 || n > MAX_SIZE);
    NhapMang(a, n);
    XuatMang(a, n);
    Max(a, n);
    Min(a, n);
}