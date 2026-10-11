#include <stdio.h>

int main()
{
	int a = 10; //初始化
	a = 20; //赋值

	int b = 3, c = 2, d = 5;
	d = c = b = 7; //连续赋值，从右向左依次赋值

	//复合赋值
	int happy = 100;
	happy = happy + 7;
	printf("%d\n", happy); //output = 107

	happy += 7; //happy = happy + 7
	happy -= 7; //happy = happy - 7
	happy *= 7; //happy = happy * 7
	happy /= 7; //happy = happy / 7
	happy %= 7; //happy = happy % 7

	int future = 10;
	future++;
	printf("%d\n", future); //output = 11
	++future;
	printf("%d\n", future); //output = 12
	//a++：先使用，再+1
	//++a：先+1，再使用

	int wind = 17;
	int rain = ++wind;
	printf("wind = %d\n", wind); //output = 18
	printf("rain = %d\n", rain); //output = 18

	int snow = 17;
	int fog = snow++;
	printf("wind = %d\n", snow); //output = 18
	printf("rain = %d\n", fog); //output = 17

	//a--，--a同理

	//+和-
	int apple = -10;
	int banana = -apple;
	int candy = -banana;
	printf("apple = %d banana = %d candy = %d\n", apple, banana, candy); //apple = -10 banana = 10 candy = -10




	return 0;
} //main函数结束