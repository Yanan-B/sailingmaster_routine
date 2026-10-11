#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

void cannon_impact(void) 
{
	double v0, angle_deg, h0, g = 9.80665; //设定计算抛物线的变量
	
	//输入变量的数值
	printf("\n===== Cannon Impact =====\n");
	printf("Enter muzzle velocity v0 (m/s): ");
	scanf("%lf", &v0);
	if (v0 <= 0) {
		printf("Arr, matey! The initial velocity must be greater than zero, savvy? A cannon don't be firin' backwards!\n");
		return;
	}//if函数结尾
	printf("Enter launch angle theta (degrees): ");
	scanf("%lf", &angle_deg);
	printf("Enter muzzle height h0 above sea level (m): ");
	scanf("%lf", &h0);
	
	//计算降落水平距离和降落时间
	double theta = angle_deg * PI / 180.0; //角度制转弧度制
	double vx = v0 * cos(theta); 
	double vy = v0 * sin(theta); //分解速度

	double delta = vy * vy + 2 * g * h0;
	double sqrt_delta = sqrt(delta);
	double t = (vy + sqrt_delta) / g; //计算降落时间

	double R = vx * t; //计算降落水平距离

	//输出降落水平距离和降落时间
	printf("\n>>> Cap'n, I be reportin'!\n");
	printf("Time aloft: %.2f seconds\n", t);
	printf("landin' spot: %.2f meters\n", R);

} //void函数结尾



int main() 
{
	int choice; //设置选择变量
	do {
		//主菜单界面
		printf("\n======Sailing Calculator=====\n");
		printf("1. Cannon Impact\n");
		printf("0. Exit\n");
		printf("Choose: \n");

		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			cannon_impact();
			break;

		case 0:
			printf("Goodbye, navigator.\n");
			break;

		default:
			printf("Invalid choice.\n");

		} //switch函数结尾

		if (choice != 0) {
			printf("\nPress Enter to continue...");
			getchar(); // 等待用户按回车
		}

	} while (choice != 0);

	return 0;
} //main函数结尾