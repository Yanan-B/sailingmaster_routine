#include <stdio.h>

int num = 3; //全局变量
int main()
{
	printf("%d\n", num); //output=3
	int num = 2; //局部变量
	printf("%d\n", num); //局部变量优先, output=2

	int a = 3;
	int b = 2;
	printf("%d\n", a + b); //output=5
	printf("%d\n", a - b); //output=1
	printf("%d\n", b - a); //output= -1
	printf("%d\n", a * b); //output=6
	printf("%d\n", a / b); //output=1, C语言的整数除法是整除，只输出整数部分
	printf("%f\n", 3.0 / 2); //output=1.500000, 如果希望得到浮点数的结果，两个运算数必须至少有一个浮点数
	printf("%d\n", a % b); //output=1, 求摸, 取余
	//printf("%f\n", 3.0 % 2); ‘%’无效因为左操作数的类型喂‘double’

	//负数求模，结果的正负由第一个运算数的正负号决定
	printf("%d\n", 11 % -5); //output=1
	printf("%d\n", -11 % 5); //output= -1
	printf("%d\n",-11 % -5); //output= -1






	return 0;
} //main函数结束