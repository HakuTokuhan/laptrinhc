#include <stdio.h>
#include <stdbool.h>

void Dao(int n) {
    int tam;
    bool xet = true;
    while (n > 0) {
        tam = n % 10;
        if (xet == true) {
            if ( tam != 0) {
                printf("%d", tam);
                xet = false;
            }
        }
        else printf("%d", tam);
        n /= 10;
    }
}

int main()
{
    int n;
    printf("Nhap n: "); scanf("%d", &n);
    printf("\nSo dao cua %d la: ", n);
    Dao(n);
    return 0;
}