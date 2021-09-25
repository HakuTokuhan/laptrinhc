#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    printf("Dia chi cua mang arr = %d\n", &arr);
    printf("Gia chi cua mang arr = %d\n", arr);

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
        printf("Dia chi cua arr[%d] = %d\n", i, &arr[i]);
}