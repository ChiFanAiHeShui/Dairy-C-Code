#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu() {
	printf("******************************\n");
	printf("******   1. game     0. exit     ********\n");
	printf("*******************************\n");
}


void game() {
	char ret;
    
	char arr[ROW][COL] = {0};

	InitBoard(arr,ROW,COL);
	DisplayBoard(arr,ROW,COL);
	while (1) {
		//玩家下棋
		PlayerMove(arr,ROW, COL);
		DisplayBoard(arr,ROW,COL);
		ret = IsWin(arr, ROW, COL);
		if (ret != 'c') {
			break;
		}
		//电脑下棋
		ComputerMove(arr,ROW,COL);
		DisplayBoard(arr, ROW, COL);
		ret = IsWin(arr, ROW, COL);
		if (ret != 'c') {
			 break;
		 }
	}
	if (ret == '*')
	{
		printf("玩家赢！\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢!\n");
	}
	else {
		printf("平局\n");
	}
}

void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请选择>:\n");
		scanf("%d", &input);
		switch (input) {
		case 1:
			printf("开始三子棋游戏！\n");
			game();
			break;
		case 0:
			break;
		default:
			printf("输入错误，请重新输入!\n");
			break;
		}
	} while (input);

}

int main() {
	test();
	return 0;
}