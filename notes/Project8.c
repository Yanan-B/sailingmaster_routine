#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int pm;
    printf("input PM2.5:");
    scanf("%d", &pm);
    int key;
    if (pm <= 50) key = 0;
    else if (pm <= 100) key = 1;
    else if (pm <= 150) key = 2;
    else if (pm <= 200) key = 3;
    else if (pm <= 300) key = 4;
    else key = 5;

    switch (key)
    {
    case 0: printf("A\n");break;
    case 1: printf("B\n");break;
    case 2: printf("C\n");break;
    case 3: printf("D\n");break;
    case 4: printf("E\n");break;
    case 5: printf("F\n");break;
    }
    return 0;
}
