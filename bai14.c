#include <stdio.h>

int main()
{
    float a, b, c, tb;
    printf("\nNhap diem toan: "); scanf("%f", &a);
    printf("\nNhap diem van: "); scanf("%f", &b);
    printf("\nNhap diem anh: "); scanf("%f", &c);

    tb = (a + b + c) / 3;
    printf("\nDiem trung binh: %.2f", tb);

    if (tb < 4) {
        printf("\nXep loai: Yeu");
    }
    else if (tb < 6.5) {
        printf("\nXep loai: Trung binh");
    }
    else if (tb < 8) {
        printf("\nXep loai: Kha");
    }
    else {
        printf("\nXep loai: Gioi");
    }
    
}