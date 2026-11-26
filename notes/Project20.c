#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//数组中存放的数据类型是相同的
	
	//一维数组的创建
	//type arr_name[常量值];
	int wonder[7];
	double memory[9]; //浮点数在内存中有可能不能精确保存

	//数组的初始化
	int data[10] = { 1,2,3,4,5,6,7,8,9,10 };  //完全初始化
	int music[10] = { 3,4,5,4,3,2 };  //不完全初始化 - 剩余的元素会默认为0

	int arr1[] = { 1,3,5,7 };  //4个元素

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//数组下标    0,1,2,3,4,5,6,7,8,9
	//想要拿出7，arr [6]
	printf("%d\n", arr[6]);
	// []下标引用操作符

	//数组元素的打印
	int i ;
	for (i = 0;i < 10;i++)
	{
		printf("%d ", arr[i]);
	}
	//修改数组的内容为-1至-10
	for (i = 0;i < 10;i++)
	{
		arr[i] = -(i + 1);
	}
	printf("\n");
	for (i = 0;i < 10;i++)
	{
		printf("%d ", arr[i]);
	}
	//输入想要的数组内容
	printf("\n");
	int try[10] = { 0 };
	for (i = 0;i < 10;i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0;i < 10;i++)
	{
		printf("%d ", arr[i]);
	}


	return 0;
}

