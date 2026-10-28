#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	char ch;
	scanf("%c", &ch);

	if (ch >= 'a' && ch <= 'z')
	{
		printf("Lowerletter");
	}
	else if (ch >= 'A' && ch <= 'Z')
	{
		printf("Upperletter");
	}
	else if (ch >= '0' && ch <= '9')
	{
		printf("Digitletter");
	}
	else
	{
		printf("Otherletter");
	}

	return 0;
}