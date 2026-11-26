#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    int scores[100];
    int sum = 0;
    int count = 0;
    double average;

    printf("Please input number of students:");
    scanf("%d", &n);

    printf("score of c:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
        sum += scores[i];
    }

    average = (double)sum / n;

    for (int i = 0; i < n; i++) {
        if (scores[i] > average) {
            count++;
        }
    }

    printf("the number of students who are above average:%d\n", count);

    return 0;
}