#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int arr[10];
    int target;
    int i, j, temp;
    int found = 0;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);

    for (j = 0; j < 9; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }

    for (i = 0; i < 10; i++)
    {
        if (arr[i] == target)
        {
            printf("%d\n", i);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Fail\n");
    }

    return 0;
}