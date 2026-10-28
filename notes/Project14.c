#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//计算1至100中3的倍数的和
	int i = 0;
	int sum = 0;
	for (i = 1; i <= 100; i++)  
	{
		if (i % 3 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum); //1683
	sum = 0;

	for (i = 3; i <= 100; i += 3)
	{
		sum += i;
	}
	printf("%d\n", sum); //1683

	//初始化，判断，调整三个部分可以省略不写
	int h = 1;
	for (; h <= 10; h++)
	{
		printf("HappyHoliday\n");
	}

	//用do while打印1至10的数字
	int E = 1;
	do
	{
		printf("%d\n", E);
		E++;
	} while (E <= 10);  
	
	//输入一个正整数，计算这个整数是几位数
	int nu = 0, count = 0;
	scanf("%d", &nu);
	do
	{
		nu /= 10; //去掉一位
		count++; //就自增1
	} while (nu); //判断，如果nu = 0则停止
	printf("%d\n", count);



	return 0;
}