#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//在C语言中，0为假，非0为真
	do {
		int num = 0; //变量创建的时候，最好能给一个初始值
		scanf("%d", &num);
		if (num % 2 == 1) {
			printf("odd number\n");
			printf("looks odd\n");
		} //if结尾
		else {
			printf("even number\n");
			printf("looks even\n");
		} //else结尾

	//默认在if和else语句只控制一条语句,所以要带上大括号

	} while(1); //do_while结尾

	return 0;
} //main结尾