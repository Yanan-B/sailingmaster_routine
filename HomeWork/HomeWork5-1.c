#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int judge(int a, int b, int c)
{
    if (a + b > c && a + c > b && b + c > a)
    {
        if (a == b && b == c)
        {
            return 3;
        }
        else if (a == b || a == c || b == c)
        {
            return 2;
        }
        else
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a, b, c, result;
    printf("Please input a b c:");
    scanf("%d %d %d", &a, &b, &c);
    result = judge(a, b, c);
    printf("The value is:%d\n", result);
    return 0;
}