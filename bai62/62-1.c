#include <stdio.h>

int length(char str[]) {
    int i = 0;
    for (; str[i]; i++);
    return i;
}

int main()
{
    char str[100];
    printf("Nhap chuoi: ");
    gets(str);
    printf("Length = %d", length(str));
}