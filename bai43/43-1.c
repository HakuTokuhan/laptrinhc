#include <stdio.h>

void Nhap(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap vao phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

int Max(int a[], int n) {
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (max < a[i]) 
            max = a[i];
    return max;
}

int Min(int a[], int n) {
    int min = a[0];
    for (int i = 1; i < n; i++)
        if (min > a[i]) 
            min = a[i];
    return min;
}

int main()
{
    int a[1000];
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    Nhap(a, n);
    printf("\nMax = %d", Max(a, n));
    printf("\nMin = %d", Min(a, n));
    return 0;
}