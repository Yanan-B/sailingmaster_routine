#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    float score;
    int count = 0;
    int i;

    for (i = 0; i < 10; i++)
    {
        scanf("%f", &score);
        if (score >= 60)
        {
            count++;
        }
    }

    printf("%.2f\n", count / 10.0);

    return 0;
}