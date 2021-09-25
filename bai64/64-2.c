#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
        printf("Dia chi cua arr[%d] = %d\n", i, &arr[i]);
    printf("\n_______________________\n");
    int *p = &arr[0];
    printf("Gia tri cua con tro p = %d\n", p);
    printf("Gia tri cua dia chi ma p dang tro den = %d\n", *p);
    p++;
    printf("Gia tri cua con tro p = %d\n", p);
    printf("Gia tri cua dia chi ma p dang tro den = %d\n", *p);
    p += 2;
    printf("Gia tri cua con tro p = %d\n", p);
    printf("Gia tri cua dia chi ma p dang tro den = %d\n", *p);
    p--;
    printf("Gia tri cua con tro p = %d\n", p);
    printf("Gia tri cua dia chi ma p dang tro den = %d\n", *p);
}