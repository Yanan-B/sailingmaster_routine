#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, i;
    int x[100], y[100];
    int min_dist, dist;
    scanf("%d", &m);
    for (i = 0; i < m; i++) {
        scanf("%d", &x[i]);
    }
    for (i = 0; i < m; i++) {
        scanf("%d", &y[i]);
    }
    min_dist = abs(x[0] - y[0]);
    for (i = 1; i < m; i++) {
        dist = abs(x[i] - y[i]);
        if (dist < min_dist) {
            min_dist = dist;
        }
    }
    printf("%d", min_dist);
    return 0;
}