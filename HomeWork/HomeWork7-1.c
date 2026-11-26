#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a[4][4];
    int i, j;
    int sum_main = 0, sum_sub = 0;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        sum_main += a[i][i];
        sum_sub += a[i][3 - i];
    }

    printf("The sum of the main diagonal is %d\n", sum_main);
    printf("The sum of the subdiagonal is %d\n", sum_sub);

    return 0;
}