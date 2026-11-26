#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a[10];
    int i, j, count;
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++) {
        count = 1;
        for (j = i + 1; j < 10; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }
        if (count > 1) {
            printf("%d:%d", a[i], count);
            return 0;
        }
    }
    printf("No duplications");
    return 0;
}