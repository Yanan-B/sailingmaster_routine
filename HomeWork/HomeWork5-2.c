#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isCube(int number)
{
    for (int i = 1; i * i * i <= number; i++)
    {
        if (i * i * i == number)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int number;
    scanf("%d", &number);
    if (isCube(number))
    {
        printf("Cube\n");
    }
    else
    {
        printf("Not Cube\n");
    }
    return 0;
}