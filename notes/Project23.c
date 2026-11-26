#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum_n(int n) {
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s += i;
    }
    return s;
}

int main() {
    int m;
    int total = 0;
    scanf("%d", &m);
    for (int i = 1; i <= m; i++) {
        total += sum_n(i);
    }
    printf("%d\n", total);
    return 0;
}