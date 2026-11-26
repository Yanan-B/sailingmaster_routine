#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

int main() {
    int num1, num2, num3;
    int max_ab, max_all;

    scanf("%d%d%d", &num1, &num2, &num3);

    max_ab = max(num1, num2);
    max_all = max(max_ab, num3);

    printf("max=%d", max_all);

    return 0;
}