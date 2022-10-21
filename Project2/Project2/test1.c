#define _CRT_SECURE_NO_WARNINGS

#include "game1.h"

void menu() {
	printf("*****************************************\n");
	printf("******           1.game          ********\n");
	printf("******           0.exit          ********\n");
	printf("*****************************************\n");

}

void game(){
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show, ROWS, COLS, '*');
	
	//DisplayBoard(mine,ROW,COL);
	DisplayBoard(show, ROW, COL);

	Set_Mine(mine,ROW,COL);
	//DisplayBoard(mine, ROW, COL);
	
	Fine_Mine(mine,show,ROW,COL);
}

void test() {
	srand((unsigned int) time (NULL));
	int input = 0;
	do {
		menu();
		printf("请选择>:\n");
		scanf("%d", &input);
		switch (input) {
		case 1:
			printf("扫雷\n");
			game();
			break;
		case 0:
			printf("游戏退出!\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (input);
}

int main() {
	test();
	return 0;
}