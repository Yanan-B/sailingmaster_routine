#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a[15][15];
    int n, i, j;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        a[i][0] = 1;
        a[i][i] = 1;
        for (j = 1; j < i; j++)
        {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}