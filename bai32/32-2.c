#include <stdio.h>

int n = 5;
void display() {
    ++n;
    printf("n = %d", n);
}

int main()
{
    ++n;
    display();
    return 0;
}