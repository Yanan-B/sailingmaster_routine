
#include <stdio.h>
#include <math.h> 

int main() {
    double x, y; 

    scanf("%lf", &x);

    if (x <= -5) {
        // 公式：(x - 2)e^(x+5) + 13
        y = (x - 2) * exp(x + 5) + 13;
    }
    else if (x < -1) {
        // 公式：|x| + 1
        y = fabs(x) + 1;
    }
    else if (x == -1) {
        // 公式：2
        y = 2;
    }
    else if (x <= 3) {
        // 公式：sqrt(3x + 7)
        y = sqrt(3 * x + 7);
    }
    else if (x <= 4) {
        // 公式：(x + 3) / (x - 2) - 2
        y = (x + 3) / (x - 2) - 2;
    }
    else {
        // 公式：1.5(x + 1)^(x - 4)   
        y = 1.5 * pow(x + 1, x - 4);
    }

    printf("%.2f\n", y);

    return 0;
}