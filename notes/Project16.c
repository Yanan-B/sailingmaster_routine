#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i = 1;
	for (;i <= 10; i++)
	{
		if (i == 5)
			continue;
		printf("%d ", i); //1 2 3 4 6 7 8 9 10，没有5，因为打印5被跳过了
	}

	int h = 1;
	do
	{
		if (h == 5)
			continue;
		printf("%d ", h);
		h++;
	} while (h <= 10);  //死循环

	return 0;
}