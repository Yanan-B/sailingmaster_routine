#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double aveg(int array[], int n) {
    int sum = 0;
    int i;
    for (i = 0; i < n; i++) {
        sum += array[i];
    }
    return (double)sum / n;
}

int main() {
    int a[10];
    int i;

    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    printf("%.2f\n", aveg(a, 10));

    return 0;
}