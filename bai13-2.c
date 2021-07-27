#include <stdio.h>

int main()
{
    int a, b;
    printf("\nNhap a: "); scanf("%d", &a);
    printf("\nNhap b: "); scanf("%d", &b);

    if (a > b){
        printf("\nSo %d lon hon  so %d", a, b);
    }
    else if (a < b){
        printf("\nSo %d lon hon so %d", b, a);
    }
    else {
        printf("\nSo %d bang so %d", a, b);
    }
        
}