#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("please input a interger:");
    scanf("%d", &num);

    
    if (num < 0)
    {
        printf("input error\n");
        return 0;
    }

   
    int cnt = 0;
    int t = num;
    if (t == 0)
    {
        cnt = 1;
    }
    else
    {
        while (t > 0)
        {
            t = t / 10;
            cnt++;
        }
    }

  
    int temp = 0;
    int n;
    for (int i = 0; i < cnt; i++)
    {
        n = (num % (int)pow(10, i + 1)) - temp;
        temp += n;
        n = n / (int)pow(10, i);
        printf("%d\n", n);
    }

    printf("It is a %d-digit number\n", cnt);
    return 0;
}
