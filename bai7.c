#include <stdio.h>

int main()

{
    // Xuất print()
    printf("Hello World!");

    // Nhập 1 số nguyên
    int a;
    printf("\nNhap gia tri a = ");
    scanf("%d", &a); //đừng quên dấu &

    // Xuất có định dạng (format)
    printf("Gia tri a = %d", a); // Ctrl + /
    
    float b;
    printf("\nNhap b = ");
    scanf("%f", &b); // đừng quên dấu &

    // Xuất có định dạng (format)
    printf("Gia tri b = %f", b);

    char c;
    printf("\nNhap c = ");
    scanf("%d", &c);
 
    // xuất có định dạng (format)
    printf("Gia tri c = %c", c);
 
    // Nhập nhiều biến đồng thời
 
    int a1, a2;
 
    printf("\nHay nhap a1 va a2: ");
    scanf("%d%d", &a1, &a2);
    
    // Xuat format
    printf("\nGia tri \"a1\" = %d\nGia tri \"a2\" = %d", a, a2);
 
    // In ra tiếng kêu bíp
    printf("a\bd");

}