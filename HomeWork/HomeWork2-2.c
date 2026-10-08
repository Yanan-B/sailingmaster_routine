#include <stdio.h>
#include <math.h> //必须包含math头文件，因为要用到sqrt开方

int main()
{
	//1.定义已知参数
	double rp = 200.0;
	double ra = 356.0;
	double R = 6400.0;
	double pi = 3.1416;
	double mu = 3.9861e5; 

	//2.第一步拆解：计算a
	double a = (2 * R + ra + rp) / 2.0; 

	//3.第二步拆解：计算T（单位：秒）
	double T_seconds = 2 * pi * sqrt((a * a * a) / mu); 

	//4.第三步拆解：单位换算
	double T_minutes = T_seconds / 60.0;

	printf("%.2f\n", T_minutes);


	return 0;
}