#include <stdio.h>

int main()
{
    int a, b;
    printf("Nhap a: ");
    scanf("%d", &a);
    b = a;
    
    // Vòng lặp while

    while (b > 9) {
        b /= 10;
    }

    /* Vòng lặp do ... while

    do {
        if (b < 10) {
            printf("\nSo dau tien cua so %d la so %d", a, b);
            return 0;
        }
        b /= 10;
    } while (true);

    */

    printf("\nSo dau tien cua so %d la so %d", a, b);

}