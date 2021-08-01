#include <stdio.h>

int main()
{
    int a, kt = 0;
    printf("Nhap so a: ");
    scanf("%d", &a);

    while (a > 9) {
        if (a % 2 != 0) {
            kt ++;
            break;
        }
        a /= 10;
    }

    if (kt == 0) {
        printf("\nToan chu so chan");
    }
    else {
        printf("\nCo chu so le");
    }
}