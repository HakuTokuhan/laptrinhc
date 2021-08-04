#include <stdio.h>
#include <stdbool.h>

int main() 
{
    int n, tam;
    printf("Nhap n: ");
    scanf("%d", &n);

    printf("So sau khi doi la: ");
    bool first = true;
    while (n > 0) {
        tam = n % 10;
        if (first) {
            if (tam != 0){
                printf("%d", tam);
                first = false;
            }
        }
        else {
            printf("%d", tam);
        }
        n /= 10;
    }

}