#include <stdio.h>
#include <string.h>

int main()
{
    char key[] = "apple";
    char buffer[80];
    do {
        printf("Hay doan loai qua toi thich?");
        fflush(stdout);
        scanf("%s", buffer);
    }
    while (strcmp(key, buffer) != 0);
    puts("Ban doan dung roi!");
    return 0;
}