#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	float x,y = 0.0;
	scanf("%f", &x);

	if (x < -5)
	{
		y = x * x / (x + 10);
	}
	else if (x == 0)
	{
		y = 1;
	}
	else if (x > 2 && x < 10)
	{
		y = 3 * x - 9;
	}
	else if (x >= 10)
	{
		y = sqrt(x);
	}
	else
	{
		y = 0.0;
	}


	printf("%.2f", y);

	return 0;
}