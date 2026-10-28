#include <stdio.h>

int main() {
    int n;

    // 按照题目要求输入n的值
    scanf("%d", &n);

    // 循环从1到n，计算并输出每个数的平方
    for (int i = 1; i <= n; i++) {
        // 严格按照题目给定的输出格式
        printf("%2d*%2d=%4d\n", i, i, i * i);
    }

    return 0;
}