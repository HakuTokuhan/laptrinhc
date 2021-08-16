#include <stdio.h>
#include <math.h>

int Dec2Oct(int number) {
    int p = 0;
    int octNumber = 0;
    while (number > 0) {
        octNumber += (number % 8) * pow(10, p);
        p++;
        number /= 8;
    }
    return octNumber;
}
 
int main() 
{
    int decimalNumber;
    printf("\nNhap so o co so 10: ");
    scanf("%d", &decimalNumber);
    printf("\nOct = %d", Dec2Oct(decimalNumber));
} 