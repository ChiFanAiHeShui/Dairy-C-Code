#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

//返回1表示棋盘满了
//返回0表示没满
int IsFull(char arr[ROW][COL],int row, int col) {
	int i = 0;
	for (int i = 0; i < row; i++) {
		int j = 0;
		for (int j = 0; j < col; j++) {
			if (arr[i][j] == ' ') {
				return 0;//没满
			}
		}
	}
	return 1;//满了
	  
}

char IsWin(char arr[ROW][COL], int row, int col) {
	int i = 0;
	//判断行
	for (int i = 0; i < row; i++) {
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] != ' ') {
			return arr[i][1];
		}
	}
	//判断列
	for (int i = 0; i < col; i++) {
		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[1][i] != ' ') {
			return arr[1][i];
		}
	}
	//判断对角线
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != ' ') {
		return arr[1][1];
	}
	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] != ' ') {
		return arr[1][1];
	}

	if (1 == IsFull(arr,ROW,COL)) {
		return 'Q';
	}
	
	//游戏继续
	return 'c';
}

void ComputerMove(char arr[ROW][COL],int row,int col) {
	int x = 0; 
	int y = 0;
	printf("电脑走！\n");

	while (1) {
		x = rand() % row;
		y = rand() % row;
		if (arr[x][y] == ' ') {
			arr[x][y] = '#';
			break;
		}
	}
}

void PlayerMove(char arr[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	printf("玩家走！\n");
	while (1) {
		printf("请输入要下的坐标！\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (arr[x - 1][y - 1] == ' ') 
			{
				arr[x - 1][y - 1] = '*';
				break;
			}
			else 
			{
				printf("该坐标已经被占用了！\n");
			}
		}
		else {
			printf("对不起，您输入的坐标非法！\n");
		}
	}
   
}

void DisplayBoard(char arr[ROW][COL],int row,int col) {
	int i = 0;
	for (int i = 0; i < row;i++) {
		int j = 0;
		for (int j = 0; j < col; j++) {
			printf(" %c ",arr[i][j]);
			if (j < col -1) {
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1) {
			for (int j = 0; j < col; j++) {
				printf("---");
				if (j < col - 1) {
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

void InitBoard(char arr[ROW][COL], int row , int col ) {
	int i = 0;
	for (int i = 0; i < ROW; i++) {
		int j = 0;
		for (int j = 0; j < COL; j++) {
			arr[i][j] = ' ';
		}
	}
}


