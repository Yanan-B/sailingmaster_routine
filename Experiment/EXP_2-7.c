#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int score;
    int counts[5] = { 0, 0, 0, 0, 0 };
    int i;

    for (i = 0; i < 30; i++)
    {
        scanf("%d", &score);

        if (score >= 90)
        {
            counts[0]++;
        }
        else if (score >= 80)
        {
            counts[1]++;
        }
        else if (score >= 70)
        {
            counts[2]++;
        }
        else if (score >= 60)
        {
            counts[3]++;
        }
        else
        {
            counts[4]++;
        }
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", counts[i]);
    }

    return 0;
}