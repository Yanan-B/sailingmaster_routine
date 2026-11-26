#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a[4][4];
    int i, j;
    int flag = 1;

    printf("Enter the element of the matrix:\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
        }
        if (flag == 0) {
            break;
        }
    }

    if (flag == 1) {
        printf("It is a symmetric matrix.\n");
    }
    else {
        printf("It is not a symmetric matrix.\n");
    }

    return 0;
}