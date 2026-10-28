#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int m = 0;
	int sum = 0;
	scanf("%d", &m);

	for (int i = 1; i < m; i++)
	{
		if (m % i == 0)
		{
			sum += i;
		}
	}
	if (sum == m)
	{
		printf("%d is a perfect number\n", m);
	}
	else
	{
		printf("%d is not a perfect number\n", m);
	}

	return 0;
}