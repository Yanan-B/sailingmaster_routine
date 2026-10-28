#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;
    // 循环n次，每次加上对应的奇数 (2*i - 1)
    for (int i = 1; i <= n; i++) {
        sum += (2 * i - 1);
    }

    printf("%d\n", sum);

    return 0;
}