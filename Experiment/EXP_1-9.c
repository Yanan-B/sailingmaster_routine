#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int F_max, step;
    int f;
    double c;
    
    scanf("%d%d", &F_max, &step);
   
    for (f = 0; f <= F_max; f += step)
    {
        c = 5.0 * (f - 32) / 9;
        
        printf("%5d%10.2f\n", f, c);
    }
    return 0;
}
