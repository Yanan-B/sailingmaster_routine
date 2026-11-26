#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int arr[4][4];
    int i, j;
    int max, min;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    max = arr[0][0];
    min = arr[0][0];

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }

    printf("%d\n", max - min);

    return 0;
}