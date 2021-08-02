#include <stdio.h>

int main()
{
    int a, b;
    char tinhtoan;

    printf("\nNhap dau: "); scanf("%c", &tinhtoan);
    printf("\nNhap a: "); scanf("%d", &a);
    printf("\nNhap b: "); scanf("%d", &b);

    switch (tinhtoan) {
        case '+':
            printf("\n%d + %d = %d", a, b, a + b);
            break;
        case '-':
            printf("\n%d - %d = %d", a, b, a - b);
            break;
        case '*':
            printf("\n%d * %d = %d", a, b, a * b);
            break;
        case '/':
            if (b == 0) {
                printf("Khong the chia cho 0");
            }
            else {
                printf("\n%d / %d = %d", a, b, a / b);
            }
            break;
        default:
            printf("Khong co phep toan %c", tinhtoan);
            break;
    }
}