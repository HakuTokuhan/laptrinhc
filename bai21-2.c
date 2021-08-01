#include <stdio.h>

int main()
{
    int a, i;
    printf("Nhap a: ");
    scanf("%d", &a);

    i = 0;
    printf("Cac so chan  tu 1 -> a la: ");

    while (i <= a) {
        i++;
        if (i % 2 != 0) {
            continue;
        }
        printf("%d  ", i);
    }
}