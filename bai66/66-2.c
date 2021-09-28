#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *ptr, sum = 0;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("Co loi! Khong the cap phat bo nho.");
        exit(0);
    }
    printf("Nhap cac gia tri: ");
    for(i = 0; i < n; ++i) {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("Tong = %d", sum);
    free(ptr);
    return 0;
}