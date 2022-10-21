#define _CRT_SECURE_NO_WARNINGS

#include "game1.h";

int Count_Mine(char mine[ROWS][COLS], int x, int y) {
	return mine[x - 1][y]
		+ mine[x + 1][y]
		+ mine[x][y - 1]
		+ mine[x][y + 1]
		+ mine[x - 1][y - 1]
		+ mine[x + 1][y + 1]
		+ mine[x + 1][y - 1]
		+ mine[x - 1][y + 1] - 8 * '0';

	  //原理如下
	 // '3' - '0' = 3
	// '0' - '0'= 0
}

void Fine_Mine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col){
	int x = 0;
	int y = 0;
	int ret = 0;
	int win = 0;
	while (win <=(ROW*ROW - COUNT_TYPE)) {
		printf("请您输入要下的坐标>;\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL) {
			if (mine[x][y] == '1') {
				printf("很遗憾，您被炸死了！\n");
				break;
			}
			else{
				ret = Count_Mine(mine,x,y);
				show[x][y] = ret + '0';
				DisplayBoard(show,row,col);
				win++;
			}
		}
		else{
		printf("你的输入有错误，请重新输入！\n");
		}
	}
	if (win == (ROW * ROW - COUNT_TYPE)) {
		printf("恭喜你，游戏胜利！\n");
	}
}

void InitBoard(char arr[ROWS][COLS],int rows,int cols,char ret) {
	int i = 0;
	for (int i = 0; i < rows; i++) {
		int j = 0;
		for (int j = 0; j < cols; j++) {
			arr[i][j] = ret;
		}
	}
}

void DisplayBoard(char arr[ROWS][COLS], int row , int col ) {
	int i = 0;
	int j = 0; 
	for (int i = 0; i <= col;i++) {
		printf("%d  ",i);
	}
	printf("\n");
	for (int i = 1; i <= row;i++) {
		printf("%d  ",i);
		for (int j = 1; j <= col; j++) {
			printf("%c  ", arr[i][j]);
		}
		printf("\n");
	}

}

void Set_Mine(char arr[ROWS][COLS], int row, int col) {
	int count = COUNT_TYPE;
	while (count) {
		int x = rand() % row;
		int y = rand() % row;
		if (arr[x + 1][y + 1] == '0') {
			arr[x + 1][y + 1] = '1';
			count--;
		}
	}
}