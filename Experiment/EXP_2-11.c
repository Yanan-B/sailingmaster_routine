#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int arr[10];
    int i, j;
    int result = 1;
    int found = 0;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++)
    {
        int count = 0;
        for (j = i + 1; j < 10; j++)
        {
            if (arr[i] == arr[j])
            {
                if (count == 0)
                {
                    result *= arr[i];
                }
                result *= arr[j];
                count++;
            }
        }
        if (count > 0)
        {
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("No duplications\n");
    }
    else
    {
        printf("%d\n", result);
    }

    return 0;
}