#include <stdio.h>

int main()
{
    int a;
    printf("Nhap a: "); scanf("%d", &a);
    
    if (a % 2 == 0) {
        printf("\n%d la so chan", a);
    }

    else {
        printf("\n%d la so le", a);
    }
}