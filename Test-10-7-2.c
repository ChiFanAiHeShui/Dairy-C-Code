#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<time.h>
#include<stdlib.h>



//猜数字小游戏
void menu() {

	printf("###################################\n");
	printf("#####   1.开始游戏       0.退出。    #########\n");
	printf("###################################\n");

}

void game() {
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;//系统随机生成一个随机数，在1-100以内的。前面必须要与srand函数联合使用。
	while (1) {
		printf("请输入您猜的数字>：\n");
		scanf("%d", &guess);
		if (guess > ret) {
			printf("您猜大了！\n");
		}
		else if (guess < ret) {
			printf("您猜小了！\n");
		}
		else {
			printf("您猜对了！\n");
			break;
		}
	}
}

int main() {

	int input = 0;
	srand((unsigned int)time(NULL));//需要导 #include<time.h>
	do {
		menu();
		printf("请选择>:\n");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束，再见！\n");
			break;
		default:
			printf("您输入的选择有误\n");
			break;
		}
	} while (input);
	return 0;
}