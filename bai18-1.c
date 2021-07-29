#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    printf("\nNhap a: "); 
    scanf("%d", &a);

    int i = 2;
    int count = 0; // Đếm số ước của a
    for (; i <= sqrt(a); i++) {
        if (a % i == 0) {
            count++;
        }
    }

    if (count == 0 && a > 1) {
        printf("\n%d la SNT", a);
    }
    else {
        printf("\n%d khong la SNT", a);
    }
}