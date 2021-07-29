#include <stdio.h>

int main()
{
    int a, b, tong;

    printf("Nhap a: "); scanf("%d", &a);
    printf("Nhap b: "); scanf("%d", &b);

    // Nếu a > b => thoát chương trình
    if (a > b) {
        printf("Nhap a, b khong hop le");
        return 0;
    }

    /* 
        Cách 1
    for (int i = a; i <= b; i++) {
        if (i % 2 = 0) {
            tong += i;
        }
    }
    */

   // Cách 2
   if (a % 2 != 0) {
       a++;
   }
   for (int i = a; i <= b; i += 2) {
       tong += i;
   }

   printf("Tong cac so chan tu a -> b la: %d", tong);
}