#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, C;
	scanf("%f%f", &a, &b);


	C = sqrt(a * a + b * b);


	printf("%.2f", C);


	return 0;
}
