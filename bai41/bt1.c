#include <stdio.h>

void NhapMang(int a[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("\nNhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void InDao(int a[], int n) {
    for (int i = n - 1; i >= 0; --i) {
        printf("\n%d", a[i]);
    }
}

int main()
{
    int a[1000], n;
    printf("So luong phan tu trong mang la: ");
    scanf("%d", &n);
    while (n < 1 || n > 100) {
        printf("\nNhap lai so phan tu trong mang: ");
        scanf("%d", &n);
    }
    NhapMang(a, n);
    printf("\nMang theo thu tu nguoc lai la:");
    InDao(a, n);
}