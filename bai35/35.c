#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int Dem(int n) {
    int dem = 0;
    while (n > 0) {
        n /= 10;
        ++dem;
    }
    return dem;
}

bool Kiem_tra(int n) {
    int so_chu_so = Dem(n);
    int tam = n, tong = 0, cuoi;
    while (tam > 0) {
        cuoi = tam % 10;
        tam /= 10;
        tong += pow(cuoi, so_chu_so);
    }
    if (tong == n) 
        return true;
    return false;
}

int main()
{
    int n;
    printf("\nNhap n: "); scanf("%d", &n);

    if (Kiem_tra(n) == true) printf("\n%d la so armstrong", n);
    else printf("\n%d khong la so armstrong", n);
}