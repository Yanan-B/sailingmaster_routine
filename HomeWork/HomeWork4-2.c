#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 1;
	double sum = 0.0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		if (i % 5 == 0)
		{
			sum += 1.0 / i;
		}
	}
	printf("%.2f", sum);

	return 0;
}