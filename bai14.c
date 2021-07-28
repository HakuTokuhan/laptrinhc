#include <stdio.h>
#define GIOI "\nXep loai: Gioi"
#define KHA "\nXep loai: Kha"
#define TB "\nXep loai: Trung binh"
#define YEU "\nXep loai: Yeu"

int main()
{
    float a, b, c, tb;
    printf("\nNhap diem toan: "); scanf("%f", &a);
    printf("\nNhap diem van: "); scanf("%f", &b);
    printf("\nNhap diem anh: "); scanf("%f", &c);

    tb = (a + b + c) / 3;
    printf("\nDiem trung binh: %.2f", tb);

    if (tb < 4) {
        printf(YEU);
    }
    else if (tb < 6.5) {
        printf(TB);
    }
    else if (tb < 8) {
        printf(KHA);
    }
    else {
        printf(GIOI);
    }
    
}