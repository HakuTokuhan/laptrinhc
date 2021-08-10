#include <stdio.h>

// Hàm tìm min của 2 số
int MinHaiSo(int a, int b) {
    return (a < b ? a : b);
}
// Hàm tìm max của 2 số
int MaxHaiSo(int a, int b) {
    return (a > b ? a : b);
}
// Hàm tìm min 3 số
int MinBaSo(int a, int b, int c) {
    return MinHaiSo(a, MinHaiSo(b, c));
}
// Hàm tìm max 3 số
int MaxBaSo(int a, int b, int c) {
    return MaxHaiSo(a, MaxHaiSo(b, c));
}

int main()
{
    int x, y, z;
    printf("Nhap so thu nhat: "); scanf("%d", &x);
    printf("Nhap so thu hai: "); scanf("%d", &y);
    printf("Nhap so thu ba: "); scanf("%d", &z);

    printf("\nSo nho nhat trong 3 so la so: %d", MinBaSo(x, y, z));
    printf("\nSo lon nhat trong 3 so la so: %d", MaxBaSo(x, y, z));
}