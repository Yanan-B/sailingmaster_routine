#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	float t, w, h = 0.0;

	scanf("%f%f",&h,&w);

    t = w / (h * h);

    if (t < 18)
    {
        printf("t=%.2f,Thin,You need more nutrition.", t);
    }
    else if (t >= 18 && t < 25)
    {
        printf("t=%.2f,Congratulations,fingers are normal!", t);
    }
    else if (t >= 25 && t < 27)
    {
        printf("t=%.2f,Overweight,You need to lose weight.", t);
    }
    else // t>=27
    {
        printf("t=%.2f,Obesity,You have to lose weight.", t);
    }


	return 0;
}