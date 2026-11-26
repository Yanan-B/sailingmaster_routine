#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

struct Point {
    float x;
    float y;
};

int main() {
    struct Point p1, p2;
    double dist;

    scanf("%f %f", &p1.x, &p1.y);
    scanf("%f %f", &p2.x, &p2.y);

    dist = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));

    printf("dist=%.2f\n", dist);

    return 0;
}