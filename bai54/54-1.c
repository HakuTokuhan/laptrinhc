#include <stdio.h>

int main()
{
    int a[3][5] = {{5, 12, 17, 9, 3}, {13, 4, 8, 14, 1}, {9, 6, 3, 7, 21}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++)
            printf("%5d", a[i][j]);
        printf("\n");
    }
    return 0;
}