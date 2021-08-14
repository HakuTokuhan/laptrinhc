#include <stdio.h>
int function() {
    int a = 5;
    return a;
    printf("\na = %d", a);
}

int main() 
{
    int value = function();
    printf("\nExit program...");
}