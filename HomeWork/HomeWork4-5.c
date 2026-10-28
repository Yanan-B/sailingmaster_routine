#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int start, end, divisor;

    // 依然使用万能的多组输入模板，防止评测机偷偷塞多组数据
    while (scanf("%d %d %d", &start, &end, &divisor) != EOF) {

        // 使用 long long 防止累加过程中数据溢出
        long long sum = 0;

        // 从 start 一直循环到 end
        for (int i = start; i <= end; i++) {
            // 如果 i 能被 divisor 整除（即 i 是 divisor 的倍数）
            if (i % divisor == 0) {
                sum += i; // 累加到 sum 中
            }
        }

        // 打印结果并换行（%lld 是 long long 的格式化输出符号）
        printf("%lld\n", sum);
    }

    return 0;
}