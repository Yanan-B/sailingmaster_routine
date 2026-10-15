#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>

int main()
{
	float y,x = 0.0;
	scanf("%f", &x);

	if (x >= -1 && x < 0)
	{
		y = 9 * x * x + 1;
	}
	else if (x == 0)
	{
		y = 10;
	}
	else
	{
		y = 1 / x + (5 * x) + 7;
	}

	printf("%.2f", y);

	return 0;
}