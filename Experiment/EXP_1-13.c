#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double e = 1.0;    // 公式的第一项是 1
    double term = 1.0; // term 用来存储当前需要累加的项，初始对应 1/1!
    int n = 1;         // 分母的阶乘变量

    // 循环计算各项，直到某一项小于 10的-4次方 (1e-4)
    while (1) {
        term = term / n; // 递推计算下一项：当前项 = 上一项 / n

        // 如果当前项小于 1e-4，则停止累加，直接跳出循环
        if (term < 1e-4) {
            break;
        }

        e = e + term; // 将符合要求的项累加到 e 中
        n++;          // n 自增，准备计算下一项
    }

    // 按照题目要求的格式输出结果，保留4位小数
    printf("e=%.4lf\n", e);

    return 0;
}