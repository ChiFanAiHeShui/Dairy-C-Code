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
		//�������
		PlayerMove(arr,ROW, COL);
		DisplayBoard(arr,ROW,COL);
		ret = IsWin(arr, ROW, COL);
		if (ret != 'c') {
			break;
		}
		//��������
		ComputerMove(arr,ROW,COL);
		DisplayBoard(arr, ROW, COL);
		ret = IsWin(arr, ROW, COL);
		if (ret != 'c') {
			 break;
		 }
	}
	if (ret == '*')
	{
		printf("���Ӯ��\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ!\n");
	}
	else {
		printf("ƽ��\n");
	}
}

void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("��ѡ��>:\n");
		scanf("%d", &input);
		switch (input) {
		case 1:
			printf("��ʼ��������Ϸ��\n");
			game();
			break;
		case 0:
			break;
		default:
			printf("�����������������!\n");
			break;
		}
	} while (input);

}

int main() {
	test();
	return 0;
}