#include <stdio.h>

int main()
{
    int n, tam;
    printf("Nhap n: ");
    scanf("%d", &n);

    int sodadoi;
    while (n > 0) {
        tam = n % 10;
        sodadoi = sodadoi * 10 + tam;
        n /= 10;
    }
    
    printf("So sau khi doi la: %d", sodadoi);

}