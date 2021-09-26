#include <stdio.h>

void swap(int *a, int *b) {
        printf("Ham con, truoc khi goi ham hoan vi, a = %d, b = %d\n", *a , *b);
        int tmp = *a;
        *a = *b;
        *b = tmp;
        printf("Ham con, sau khi goi ham hoan vi, a = %d, b = %d\n", *a , *b);
}

int main()
{
    int a = 5, b = 7;
    printf("Ham main, truoc khi goi ham hoan vi, a = %d, b = %d\n", a , b);
    swap(&a, &b);
    printf("Ham main, sau khi goi ham hoan vi, a = %d, b = %d\n", a , b);
}