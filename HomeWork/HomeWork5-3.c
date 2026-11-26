#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int judge(int a, int b)
{
    int max, min;
    if (a > b)
    {
        max = a;
        min = b;
    }
    else
    {
        max = b;
        min = a;
    }
    if (max % min == 0)
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
    int a, b, max, min;
    scanf("%d%d", &a, &b);

    if (a > b)
    {
        max = a;
        min = b;
    }
    else
    {
        max = b;
        min = a;
    }

    if (judge(a, b) == 1)
    {
        printf("%d can be divided by %d\n", max, min);
    }
    else
    {
        printf("%d can not be divided by %d\n", max, min);
    }

    return 0;
}