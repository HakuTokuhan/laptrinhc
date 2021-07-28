#include <stdio.h>

int main()
{
    float a, b, c, max;
    printf("\nNhap a, b, c: "); 
    scanf("%f%f%f", &a, &b, &c);
    
    max = a;
    
    if (max < b) {
        max = b;
    }
    if (max < c) {
        max = c;
    }

    printf("\nSo lon nhat la: %f", max);
}