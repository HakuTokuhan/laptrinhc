#include <stdio.h>
#include <string.h>

int WordCount(char str[], int lenght) {
    int word = (str[0] != ' ');
    for (int i = 0; i < lenght - 1; i++)
        if (str[i] == ' ' && str[i + 1] != ' ')
            word++;
    return word;
}

void Correct(char str[], int length)
{
    int first = 0, last = length - 1;
    while (first < last && str[first] == ' ')
        first++;
    while (last > first && str[last] == ' ')
        last--;
 
    if (str[first] >= 'a' && str[first] <= 'z')
        str[first] -= 32;
    for (int i = first; i <= last; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if (i + 1 <= last)
        {
            if (str[i] == str[i + 1] && str[i] == ' ')
                continue;
            if (str[i] == ' ' && str[i + 1] >= 'a' && str[i + 1] <= 'z')
                str[i + 1] -= 32;
        }
        printf("%c", str[i]);
    }
}

int main()
{
    char str[100];
    printf("\nNhap chuoi: ");
    fgets(str, sizeof str, stdin);
    int leght = strlen(str) - 1;
    str[leght] = '\0';
    printf("So tu cua \"%s\" la %d", str, WordCount(str, leght));
    printf("\nXau chuan hoa la: ");
    Correct(str, leght);
}