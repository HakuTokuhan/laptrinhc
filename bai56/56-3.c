#include <stdio.h>

int main()
{
    int age;
    char name[30];
    printf("\nNhap tuoi: "); scanf("%d", &age);
    getchar();
    printf("\nNhap ten: "); fgets(name, sizeof(name), stdin);
    printf("%s - %d", name, age);
}

int main()
{
    int age;
    char name[30];
    printf("\nNhap tuoi: "); scanf("%d", &age);
    fflush(stdin);
    printf("\nNhap ten: "); gets(name);
    printf("%s - %d", name, age);
}