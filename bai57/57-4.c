#include <stdio.h>
#include <string.h>

int main()
{
    char str[80];
    strcpy(str, "Lap ");
    strcat(str, "trinh ");
    strcat(str, "khong ");
    strcat(str, "kho!");
    puts(str);
}