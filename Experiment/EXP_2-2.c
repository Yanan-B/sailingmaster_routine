#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int judge(int number)
{
    int a, b, c;

    a = number / 100;
    b = (number / 10) % 10;
    c = number % 10;

    if (a * a * a + b * b * b + c * c * c == number)
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
    int n, i;

    scanf("%d", &n);

    for (i = 100; i <= n; i++)
    {
        if (judge(i) == 1)
        {
            printf("%4d", i);
        }
    }

    printf("\n");
    return 0;
}