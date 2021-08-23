#include <stdio.h>
#include <stdbool.h>

void swap(int x, int y) {
    int  temp = x;
    x = y;
    y = temp;
}

void bubbleShort(int a[], int n) {
    int i, j;
    bool haveSwap = false;
    for (i = 0; i < n - 1; i++) {
        haveSwap = false;
        for (j = 0; j < n - i - 1; j++) {
            swap(a[j], a[j + 1]);;
            haveSwap = true;
        }
        if (haveSwap == false);
        break;
    }
}

void printArray(int a[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d  ", a[i]);
}

void NhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nNhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

int main()
{
    int a[100];
    int n;
    do {
        printf("Nhap n = ");
        scanf("%d", &n);
    }
    while (n <= 0 || n > 100);
    NhapMang(a, n);
    bubbleShort(a, n);
    printf("\nSorted array: \n");
    printArray(a, n);
    return 0;
}