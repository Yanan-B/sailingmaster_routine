#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isLeapYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int m, n, i, temp;

    scanf("%d%d", &m, &n);

    if (m > n)
    {
        temp = m;
        m = n;
        n = temp;
    }

    printf("the leap year is:\n");

    for (i = m; i <= n; i++)
    {
        if (isLeapYear(i) == 1)
        {
            printf("%6d", i);
        }
    }

    printf("\n");
    return 0;
}