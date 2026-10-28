#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 0;
	scanf("%d", &num);

	if (num > 0)
	{
		if (num % 2 == 1)   //嵌套if
			printf("odd\n");
		else
			printf("even\n");
	}
	else
	{
		printf("negative\n");
	}

	return 0;
}