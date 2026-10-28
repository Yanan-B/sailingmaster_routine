#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int f;
    // 读取总脚数
    if (scanf("%d", &f) != 1) return 0;

    // 脚数必须是偶数，且至少有一只鸡和一只兔（最少2+4=6只脚）
    if (f % 2 != 0 || f < 6) {
        return 0;
    }

    // 兔子最多有多少只？因为至少要有1只鸡(2只脚)，剩下的脚给兔子
    int max_r = (f - 2) / 4;

    // 从最大兔子数量开始往下减（为了和样例输出顺序一致）
    for (int r = max_r; r >= 1; r--) {
        // 算出对应的鸡的数量
        int c = (f - 4 * r) / 2;

        // 输出格式：鸡的数量 兔子的数量
        printf("%d %d\n", c, r);
    }

    return 0;
}