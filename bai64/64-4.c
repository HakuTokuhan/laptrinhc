#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int n;
    do {
        printf("Nhap so luong phan tu: ");
        scanf("%d", &n);
    }
    while (n < 1);

    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d] = ", i);
        scanf("%d", (arr + i));
    }

    for (int i = 0; i < n; i++)
        printf("\nGia tri a[%d] = %d", i, *(arr + i));
}