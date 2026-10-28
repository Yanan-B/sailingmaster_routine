#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int m, n;

    // 1. 读取输入的两个整数
    scanf("%d%d", &m, &n);

    // 确保 m 是较小的数，n 是较大的数
    if (m > n) {
        int temp = m;
        m = n;
        n = temp;
    }

    // 2. 遍历区间 [m, n] 内的每一个数
    for (int i = m; i <= n; i++) {
        int sum = 0; // 用于累加因子的和

        // 3. 寻找因子（只需遍历到 i/2 即可，提高效率）
        for (int j = 1; j <= i / 2; j++) {
            if (i % j == 0) {
                sum += j; // 如果 j 是 i 的因子，则累加
            }
        }

        // 4. 判断是否为完全数并输出
        // 注意：题目要求输出格式为 "%d\n"
        if (sum == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}