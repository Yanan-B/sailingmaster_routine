#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sortAndPrint(int n)
{
    int a, b, c, temp;
    a = n / 100;
    b = (n / 10) % 10;
    c = n % 10;

    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }

    printf("%d%d%d\n", a, b, c);
}

int main()
{
    int n;

    while (scanf("%d", &n) != EOF && n > 0)
    {
        sortAndPrint(n);
    }

    return 0;
}