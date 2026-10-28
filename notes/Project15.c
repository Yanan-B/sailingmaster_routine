#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//break用于永久终止循环
	//continue用于跳过本次循环中的continue后面的代码

	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			break;
		printf("%d ", i); //1 2 3 4
		i++;
	}

	int h = 1;
	while (h <= 10) 
	{
		if (h == 5)
			continue;  //光标仍在闪烁，程序陷入死循环
		printf("%d ", h);
		h++;  //到5的时候，while仍判断为真，if判断为执行continue，跳过printf和h++，再次以h = 5回到while，不停循环
	}


	return 0;
}