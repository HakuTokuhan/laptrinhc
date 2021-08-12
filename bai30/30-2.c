#include <stdio.h>

static int dem = 0;

void Lap(int n) {
    dem++;
    if (dem <= n) {
        printf("Lap lan thu %d\n", dem);
        Lap(n);
    }
}

int main()
{
    int n;
    printf("Nhap so lan lap: ");
    scanf("%d", &n);
    Lap(n);
    return 0;
}