#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    // 按照输入格式读取 a, b, c
    scanf("%lf%lf%lf", &a, &b, &c);

    // 计算判别式 b^2 - 4ac
    double delta = b * b - 4 * a * c;
    double sqrt_delta = sqrt(delta);

    // 按照题目要求的顺序计算解
    // 解1：先计算 +sqrt 的解
    double x1 = (-b + sqrt_delta) / (2 * a);
    // 解2：再计算 -sqrt 的解
    double x2 = (-b - sqrt_delta) / (2 * a);

    // 按照要求输出，格式为 %.2f,%.2f
    printf("%.2f,%.2f\n", x1, x2);

    return 0;
}