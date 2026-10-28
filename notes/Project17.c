#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	// 找出100至200的素数，并打印在屏幕上
	// 思路：
	// 1. 产生100至200的数字  for(i = 100; i <= 200; i++)
	// 2. 判断i是否为素数：2至i - 1之间的数组去试除i.如果2至i - 1之间的数字都不能整除i，i就是素数，反之则不是素数
	// 3. 需要产生2至i - 1的数字  for(j = 2; j <= i - 1; j++)
	
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j <= i - 1; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (i == j)
			printf("%d ", i);

	}







	return 0;
}