#include <stdio.h>
#include <stdbool.h>
int main()
{
	int num = 520;
	printf("%zu\n", sizeof(int));
	printf("%zu\n", sizeof(num));
	printf("%zu\n", sizeof num);

	short s = 520;
	int b = 521;
	printf("%zu\n", sizeof(s = b + 1));
	printf("s = %d\n",s);

	signed              //+-0
	unsigned            //+0


	return 0;
}