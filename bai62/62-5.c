#include <stdio.h>
#include <string.h>

int main()
{
    char arr[1000][50];
    int n;
    do {
        printf("\nNhap so luong SV: ");
        scanf("%d", &n);
    }
    while (n < 1);
    for (int i = 0; i < n; i++) {
        printf("Ten SV thu %d: ", i+1);
        fflush(stdin);
        gets(arr[i]);
    }
    for (int i = 0; i < n; i++)
        printf("\nTen SV thu %d: %s", i+1, arr[i]);
}