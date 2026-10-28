#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() 
{
	int A, B, C;
	scanf("%d%d%d", &A, &B, &C);

	double son = C - (B - A);
	float x = son / A;

	printf("%.2f", x);

	return 0;
}