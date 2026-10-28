#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    int h, m;
    scanf("%d:%d", &h, &m);

    m = m + 1;   // 分钟+1
    if (m == 60)
    {
        m = 0;
        h = h + 1;
    }

    printf("%02d:%02d", h, m);
    return 0;
}
