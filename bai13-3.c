#include <stdio.h>

int main()
{
    int a;
    printf("Nhap a: "); scanf("%d", &a);

    if (a > 0) {
        if (a % 2 == 0) {
            printf("\nDay la so duong chan", a);
        }
        else {
            printf("\nDay la so duong le", a);
        }
    }

    else if (a < 0) {
        if (a % 2 == 0) {
            printf("\nDay la so am chan", a);
        }
        else {
            printf("\nDay la so am le", a);
        }
    }

    else {
        printf("\nDay la so 0");
    }
}