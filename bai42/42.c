#include <stdio.h>

const int MAX_SIZE = 100;

void NhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void XuatMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%5d", a[i]);
    }
}

int SumOdd(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) sum += a[i];
    }
    return sum;
}

int SumEven(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) sum += a[i];
    }
    return sum;
}

int main()
{
    int arr[MAX_SIZE];
    int n;

    do {
        printf("Nhap n: ");
        scanf("%d", &n);
    }
    while (n <= 0 || n > MAX_SIZE);
    NhapMang(arr, n);
    XuatMang(arr, n);
    printf("\nTong so le: %d", SumOdd(arr, n));
    printf("\nYong so chan: %d", SumEven(arr, n));
}