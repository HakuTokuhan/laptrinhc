#include <stdio.h>

void display() {
    static int c = 1;
    c += 5;
    printf("%d  ", c);
}

int main()
{
    display();
    display();
    return 0;
}