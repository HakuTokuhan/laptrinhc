#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *p = &arr[0];
    printf("Gia tri cua dia chi ma p dang tro den = %d\n", *p);
    (*p) += 5;
    printf("Gia tri cua dia chi ma p dang tro den = %d\n", *p);
}