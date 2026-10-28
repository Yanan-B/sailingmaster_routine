#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//输入一个正整数，逆序打印这个数的每一位
	// % 10--得到最后一位，打印
	// / 10--去掉最后一位
	
	int num = 0; //初始化
	scanf("%d", &num);

	
	while (num) //判断
	{
		printf("%d\n", num % 10);
		num = num / 10; //调整
	
	}

	return 0;
}