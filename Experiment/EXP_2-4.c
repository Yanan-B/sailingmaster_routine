#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int judge(int number)
{
    int i;
    if (number <= 1)
    {
        return 0;
    }
    for (i = 2; i <= number / i; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n, i;

    scanf("%d", &n);

    for (i = 2; i <= n / 2; i++)
    {
        if (judge(i) == 1 && judge(n - i) == 1)
        {
            printf("%3d=%3d+%3d\n", n, i, n - i);
        }
    }

    return 0;
}