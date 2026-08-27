#include <stdio.h>
//std--standard
//i--input
//o-output
#include <stdbool.h>
int main()
{
	printf("Elord Black love Maristela Black\n");
	printf("%d\n", 520);      //decimal十进制的形式打印整数
	printf("%c\n", 'X');      //character字符
	printf("%f\n", 13.14);    //float浮点型
	printf("%s\n", "We are all vivd in blue and green.\n");      //string字符串
	//  \n--换行
	//  \0--字符串结束标志
    //  \?--防止连续问号被解析为三字母词
	//  \'    \"--字符' "
	//  \\--表示\
	//  \a--让电脑报警
	//  \b--光标退回一个字符
	//  \r--回车符，光标移动到同一行的开头
	//  \t
	//  \v
	printf("Elord said to Maristela : \"How about going to the beach\?\"\n");
	printf("Maristela replied : \"It\'s a great idea , my love.\"\n");
	//
	//
    //
	_Bool cargoship = true;
		if (cargoship)
			printf("Elord:\"We have company.\"\n");
	//
	//sizeof--计算长度，单位是字节
	//如果想打印，用%zu
	sizeof(char);
	sizeof(int);
	printf("%zu\n", sizeof(char));//1
	printf("%zu\n", sizeof(int));//4
	printf("%zu\n", sizeof(short));//2
	printf("%zu\n", sizeof(long));//4
	printf("%zu\n", sizeof(long long));//8
	printf("%zu\n", sizeof(_Bool));//1
	printf("%zu\n", sizeof(float));//4
	printf("%zu\n", sizeof(double));//8																																
	printf("%zu\n", sizeof(long double));//8
	printf("%zu\n", sizeof("Elord"));//6
	printf("$zu\n", sizeof("Maristela"));

	return 0;
}