//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void menu() {
//
//	printf("******************************\n");
//	printf("********* 1.paly *************\n");
//	printf("********* 0.exit *************\n");
//	printf("******************************\n");
//
//}
//
//void game() {
//
//	int num = rand() % 100 + 1;
//
//	while (1) {
//		int input = 0;
//		printf("请输入您猜的数字\n");
//		scanf("%d", &input);
//
//		if (input > num) {
//			printf("猜大了!\n");
//		}
//		else if (input < num) {
//			printf("猜小了！\n");
//		}
//		else {
//		    printf("恭喜你，猜对啦！\n");
//		    break;
//		}
//	}
//}
//
//int main() {
//	
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do {
//
//		menu();
//		printf("请选择 >:\n");
//		scanf("%d", &input);
//		switch (input) {
//
//		case 1:
//			printf("请在1~100之间的数字猜测，系统会进行提示，祝您游戏愉快！\n");
//			game();
//			break;
//		case 0:
//			printf("游戏结束\n");
//			break;
//		default:
//			printf("您的输入有误，请重新输入\n");
//		}
//
//	} while (input);
//
//	return 0;
//}
