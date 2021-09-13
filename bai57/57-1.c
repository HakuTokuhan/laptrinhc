#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    printf("\nNhap chuoi: ");
    fgets(s, sizeof s, stdin);
    printf("Lenght = %d", strlen(s) - 1);
    printf("\nNhap choi: ");
    gets(s);
    printf("Lenght = %d", strlen(s));
}