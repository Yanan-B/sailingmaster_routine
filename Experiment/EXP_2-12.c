#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int arr[10];
    int key;
    int low, high, mid;
    int found = 0;
    int i;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &key);

    low = 0;
    high = 9;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            printf("array[%d]=%d\n", mid, arr[mid]);
            found = 1;
            break;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (found == 0)
    {
        printf("Fail\n");
    }

    return 0;
}