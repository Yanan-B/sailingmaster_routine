#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

   
    int day = (4 + n) % 7;

    if (day == 0) 
    {
        day = 7;
    }

    printf("%d\n", day);

    return 0;
}