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

    int *p = &arr[0];
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d] = ", i);
        scanf("%d", (p + i));
    }

    for (int i = 0; i < n; i++)
        printf("\nGia tri a[%d] = %d", i, *(p + i));
 
    int sum = 0;
    for(int *i = &arr[0]; i <= &arr[n-1]; i++)
        sum += *i;
    printf("\nSum = %d", sum);
}