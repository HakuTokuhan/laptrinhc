#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define MAX_SIZE 100

void NhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nNhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void XuatMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\na[%d] = %d", i, a[i]);
    }
}

bool IsPrime(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

int PrimeCount(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++)
        if (IsPrime(a[i]))
            count++;
    return count;
}

void PrintPrime(int a[], int n) {
    for (int i = 0; i < n; i++)
        if (IsPrime(a[i]))
            printf("%d\t", a[i]);
}

int main()
{
    int a[MAX_SIZE];
    int n;
    do {
        printf("Nhap n = ");
        scanf("%d", &n);
    }
    while (n <= 0 || n > MAX_SIZE);
    NhapMang(a, n);
    XuatMang(a, n);
    int primeCount = PrimeCount(a, n);
    printf("\nSo luong so nguyen to la: %d", primeCount);
    if (primeCount > 0) {
        printf("\nDanh sach so nguyen to: ");
        PrintPrime(a, n);
    }
}