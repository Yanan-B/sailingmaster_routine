#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int arr[10];
    int i, temp;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    temp = arr[0];

    for (i = 1; i < 10; i++)
    {
        arr[i - 1] = arr[i];
    }

    arr[9] = temp;

    for (i = 0; i < 10; i++)
    {
        printf("%3d", arr[i]);
    }

    printf("\n");

    return 0;
}