#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);

	printf("%d+%d=%d\n", a, b, a + b);
	printf("%d-%d=%d\n",a,b,a - b);
	printf("%d*%d=%d\n",a,b,a * b);
	printf("%d/%d=%.2f\n", a, b, (double)a / b); //注意这里
	printf("%d%%%d=%d\n", a, b, a % b);

	return 0;
}