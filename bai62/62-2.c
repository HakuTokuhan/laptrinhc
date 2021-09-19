#include <stdio.h>
#include <string.h>

char doixung(char s1[100]) {
    int i;
    for (i = 0; i < strlen(s1) / 2; i++)
        if (s1[i] != s1[strlen(s1) - 1 - i])
            return 0;
    return 1;
}

int main()
{
    char s1[100];
    printf("Xin moi ban nhap chuoi: ");
    gets(s1);
    if (doixung(s1) == 0)
        printf("Chuoi vua nhap khong phai chuoi doi xung\n");
    if (doixung(s1) == 1)
        printf("Chuoi vua nhap la chuoi doi xung\n");
}