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
//		printf("���������µ�����\n");
//		scanf("%d", &input);
//
//		if (input > num) {
//			printf("�´���!\n");
//		}
//		else if (input < num) {
//			printf("��С�ˣ�\n");
//		}
//		else {
//		    printf("��ϲ�㣬�¶�����\n");
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
//		printf("��ѡ�� >:\n");
//		scanf("%d", &input);
//		switch (input) {
//
//		case 1:
//			printf("����1~100֮������ֲ²⣬ϵͳ�������ʾ��ף����Ϸ��죡\n");
//			game();
//			break;
//		case 0:
//			printf("��Ϸ����\n");
//			break;
//		default:
//			printf("����������������������\n");
//		}
//
//	} while (input);
//
//	return 0;
//}
