#include <stdio.h>
#include <math.h>

int Bin2Dec(long long binaryNumber) {
    int p = 0;
    int decNumber = 0;
    while (binaryNumber > 0) {
        decNumber += (binaryNumber % 10) * pow(2, p);
        ++p;
        binaryNumber /= 10;
    }
    return decNumber;
}

int main()
{
    long long binaryNumber;
    printf("\nNhap so nhi phan: ");
    scanf("%d", &binaryNumber);
    printf("Dec = %d", Bin2Dec(binaryNumber));
}