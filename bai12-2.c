#include <stdio.h>

int main()
{
    int a, b;
    printf("\nNhap a: "); scanf("%d", &a);
    printf("\nNhap b: "); scanf("%d", &b);

    // Trước khi đổi
    printf("\na = %d, b = %d", a, b);
    
    // Sử dụng toán tử + và -
    a = a + b;
    b = a - b;
    a = a - b;

    /* Sử dụng toán tử * và /
    a = a * b;
    b = a / b;
    a = a / b;
    */

    /* Sử dụng toán tử XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b; 
    */

    // Sau khi đổi
    printf("\na = %d, b = %d", a, b);
}