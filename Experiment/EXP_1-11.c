#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int count = 0;
    int x, y, z;
    // x,y,z都至少1张，所以x最多18，y最多18
    for (x = 1;x <= 18;x++)
    {
        for (y = 1;y <= 18;y++)
        {
            z = 20 - x - y;
            if (z >= 1 && 10 * x + 5 * y + z == n)
            {
                printf("x=%d,y=%d,z=%d\n", x, y, z);
                count++;
            }
        }
    }
    printf("count=%d\n", count);
    return 0;
}
