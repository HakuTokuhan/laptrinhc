#include <stdio.h>

int main()
{
    int a, i;
    printf("Nhap a: ");
    scanf("%d", &a);

    i = 1;
    printf("Cac so le nho hon a la: ");

    while (i <= a) {
        if (i % 2 != 0) {
            printf("%d   ", i);
        }
        i++;
    }
}