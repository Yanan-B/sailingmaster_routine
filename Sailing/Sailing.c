#define _CRT_SECURE_NO_WARNINGS  // 关掉微软的安全警告
#include <stdio.h>

int main() {
	//=====变量定义=====
	int startPort;   //起点港口编号
	int endPort;     //终点港口编号
	float distance;   //航线距离（海里）
	float speed;      //船速（节）
	char wind;        //风向：‘T’顺风tailwind，‘H’逆风headwind，‘O’侧舷风other
	char weather;     //天气：‘S’晴天sunny，‘R’雨天rainy，‘T’风暴tempest
	int choice;       //用户菜单选项
	int hasRecord = 0;//标志是否已录入航线（0=未录入，1=已录入）

	//=====菜单循环=====
	while (1) {
		//打印主菜单
		printf("\n===========Sailing===========\n");
		printf("-------ROUTE MANAGER-------\n");
		printf("1.Enter Route\n");
		printf("2.View Route\n");
		printf("3.Check Risk\n");
		printf("4.Calc Sailing Time\n");
		printf("5.Exit\n");
		printf("6.Choose(1-5):\n");
		scanf("%d", &choice);

		//使用switch分支处理用户选择
		switch (choice) {
		case 1:               //录入航线
			printf("Enter Start Port ID:\n");
			scanf("%d", &startPort);
			printf("Enter End Port ID:\n");
			scanf("%d", &endPort);
			printf("Enter Distance (nautical miles,>0):\n");
			scanf("%f", &distance);      //输入验证：距离必须为正数
			if (distance <= 0) {
				printf("\a");
				printf("Distance must be positive!\n");
				break;   //退出当前case，返回菜单
			}

			printf("Enter Speed (knots,>0):\n");
			scanf("%f", &speed);       //船速不能为零，后续计算时间会除零
			if (speed <= 0) {
				printf("Speed must be positive!\n");
				break;
			}
			while (getchar() != '\n'); //清空输入缓冲区，防止残留换行符影响字符输入
			printf("Enter Wind (T=tailwind,H=headwind,O=other):\n");
			scanf("%c", &wind);
			while (getchar() != '\n'); //清空输入缓冲区
			printf("Enter Weather (S=sunny,R=rainy,T=tempest):\n");
			scanf("%c", &weather);

			hasRecord = 1;   //标记已录入
			printf("Route saved successfully!\n");
			break;


		case 2:      //航线查看
			if (hasRecord == 0) {
				printf("No route entered yet!\n");
			}
			else {
				printf("\n~~~~~~~CURRENT ROUTE~~~~~~~\n");
				printf("Start Port: %d\n", startPort);
				printf("End Port: %d\n", endPort);
				printf("Distance: %.2f nm\n", distance);
				printf("Speed: %.2f nm\n", speed);
				printf("Wind: %c\n", wind);
				printf("Weather: %c\n", weather);
				printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
			}break;
		

		case 3:     //航线风险判断
			//判断规则：
			// 天气暴风雨T 或 风向逆风H  =》危险
			//天气晴天S 且 风向顺风T  =》安全
			//其余  =》一般，需谨慎航行
			if (hasRecord == 0) {
				printf("No route entered yet!\n");
			}
			else {
				if (weather == 'T' || wind == 'H') {
					printf("Risk Level: DANGEROUS!\n");
				}
				else if (weather == 'S' && wind == 'T')
					printf("Risk Level: SAFE.\n");
				else {
					printf("Risk Level: NORMAL(caution).\n");
				}
			}break;


		case 4:     //计算航行时间
			if (hasRecord == 0) {
				printf("No route entered yet!\n");
			}
			else {
				if (speed <= 0) {
					printf("Invalid speed!\n");
				}
				else {
					float time = distance / speed;
					printf("Estimated Time: %.2f time\n",time);
					if (time >= 24) {
						printf("About %.2f days\n", time / 24);
					}
				}
			}break;


		case 5:   //推出程序
			printf("Goodbye!\n");
			return 0;  

		default:    //输入了非1至5的数字
			printf("Invalid choice\n");
		}//switch结束
	}//while结束
	return 0;
}
