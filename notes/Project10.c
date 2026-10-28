#include <stdio.h>

int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 2)
			printf("Hello");
		else
			printf("Goodbye");


	//else总是跟最接近的if匹配

	return 0;
}