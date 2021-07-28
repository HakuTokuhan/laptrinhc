#include <stdio.h>

int main()
{
    int a, b;
    printf("\nNhap a, b (a < b): ");
    scanf("%d%d", &a, &b);

    printf("\nCac so tu a -> b la: ");
    for (int i = a; i <= b; i++) {
        printf("%d  ", i);
    }
}