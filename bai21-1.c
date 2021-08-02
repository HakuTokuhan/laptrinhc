#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a;
    bool kt = true;
    printf("Nhap so a: ");
    scanf("%d", &a);

    while (a > 9) {
        if (a % 2 != 0) {
            kt = false;
            break;
        }
        a /= 10;
    }

    if (kt == true) {
        printf("\nToan chu so chan");
    }
    else {
        printf("\nCo chu so le");
    }
}