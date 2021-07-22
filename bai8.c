#include <stdio.h>

int main()
{
    int a, b;
    printf("\nNhap a = "); scanf("%d", &a);
    // Lưu ý nhập b != 0
    printf("\nNhap b = "); scanf("%d", &b);

    // Phép (+)
    int tong = a + b;
    printf("\n%d + %d = %d", a, b, tong);

    // Phép (-)
    int hieu = a - b;
    printf("\n%d - %d = %d", a, b, hieu);
    
    // Phép (*)
    int tich = a + b;
    printf("\n%d * %d = %d", a, b, tich);

    // Phép (/)
    float thuong = a / (float)b;
    printf("\n%d / %d = %f", a, b, thuong);

    // Phép (%)
    int PT = a % b;
    printf("\n%d %% %d = %d", a, b, PT);

}