#include <stdio.h>
#define MAX_SIZE 100

void NhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void XuatMang(int a[], int n) {
    for (int i = 0; i < n; i++)
        printf("\na[%d] = %d", i, a[i]);
}

void SapXep(int a[], int n){
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] < a[j]) {
                int tam = a[i];
                a[i] = a[j];
                a[j] = tam;
            }
}

int FindBySort(int a[], int n) {
    SapXep(a, n);
    return a[1];
}

int FindByLoop(int a[], int n) {
    int fistMax, secondMax;
    if (a[0] > a[1]) {
        fistMax = a[0];
        secondMax = a[1];
    }
    else {
        fistMax = a[1];
        secondMax = a[0];
    }
    for (int i = 2; i < n; i++) {
        if (a[i] >= fistMax) {
            secondMax = fistMax;
            fistMax = a[i];
        }
        else if (a[i] > secondMax) {
            secondMax = a[i];
        }
    }
    return secondMax;
}

int main()
{
    int arr[MAX_SIZE];
    int n;
    do {
        printf("Nhap n = ");
        scanf("%d", &n);
    }
    while (n <= 1 || n > MAX_SIZE);
    
    NhapMang(arr, n);
    XuatMang(arr, n);

    printf("\nSo lon thu 2 la %d", FindBySort(arr, n));
    printf("\nSo lon thu 2 la %d", FindByLoop(arr, n));
}