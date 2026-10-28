#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 0,s = 0;
	scanf("%d", &n);

	for(int i = 1; i <= n; i++)
	{
		int term = 2 * i - 1;
        if (i % 2 != 0)
        {
            s += term;
        }
        else
        {
            s -= term;
        }
    }

    printf("%d\n", s);
	

	return 0;
}