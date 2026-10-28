#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n;
    double sum = 0;  // 存累加和，必须浮点型
    int k;
    scanf("%d", &n);

    for (k = 1; k <= n; k++)
    {
        double term;
        if (k % 2 == 1)
        {
            // k奇数，正号
            term = (double)k / (k + 1);
        }
        else
        {
            // k偶数，负号
            term = -(double)k / (k + 1);
        }
        sum = sum + term;
    }

    printf("%.2f", sum);
    return 0;
}
