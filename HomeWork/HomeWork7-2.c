#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a[2][3];
    int i, j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (j = 0; j < 3; j++) {
        for (i = 0; i < 2; i++) {
            if (i == 1) {
                printf("%d\n", a[i][j]);
            }
            else {
                printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}