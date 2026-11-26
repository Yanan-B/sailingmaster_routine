#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a[10];
    int i, target;
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &target);
    for (i = 0; i < 10; i++) {
        if (a[i] == target) {
            printf("%d", 9 - i);
            return 0;
        }
    }
    printf("Fail");
    return 0;
}