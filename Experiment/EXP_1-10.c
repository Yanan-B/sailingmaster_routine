#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int Sn = n * (n + 1) * (n + 2) / 6;
    printf("%d", Sn);
    return 0;
}
