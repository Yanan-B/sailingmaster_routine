#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


double convert(double c) 
{
    return 9.0 * c / 5.0 + 32;
}

int main() {
    double c; 

    if (scanf("%lf", &c) != EOF) 
    {
        double f = convert(c);
        printf("%.2f\n", f);
    }

    return 0;
}