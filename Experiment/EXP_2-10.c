#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int arr[10];
    int x;
    int i;

    for (i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    for (i = 8; i >= 0; i--)
    {
        if (arr[i] > x)
        {
            arr[i + 1] = arr[i];
        }
        else
        {
            break;
        }
    }

    arr[i + 1] = x;

    for (i = 0; i < 10; i++)
    {
        printf("%4d", arr[i]);
    }

    printf("\n");

    return 0;
}