#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main()
{
    double param, result;
    param = 30.0;
    result = sin(param * PI / 180);
    printf("The sine of %f degrees is %f.\n", param, result);
}