#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c;
	double d;
	int i;

	scanf("%c %lf %d", &c, &d, &i);

	printf("%c\n", c);
	printf("%.2f\n", d);
	printf("%d\n", i);

	return 0;
}