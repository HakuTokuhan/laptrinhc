#include <stdio.h>
#include <math.h>

int main()
{
    double param, result;
    param = 5.0;
    result = exp(param);
    printf("e^%f = %f.\n", param, result);
}