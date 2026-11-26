#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calculate(int x, int n)
{
    int result = 1;
    int i;
    for (i = 0; i < n; i++)
    {
        result *= x;
    }
    return result - 6;
}

int main()
{
    int x1, n1, x2, n2, total;

    scanf("%d %d %d %d", &x1, &n1, &x2, &n2);

    total = calculate(x1, n1) + calculate(x2, n2);

    printf("%d\n", total);

    return 0;
}