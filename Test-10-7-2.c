#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<time.h>
#include<stdlib.h>



//������С��Ϸ
void menu() {

	printf("###################################\n");
	printf("#####   1.��ʼ��Ϸ       0.�˳���    #########\n");
	printf("###################################\n");

}

void game() {
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;//ϵͳ�������һ�����������1-100���ڵġ�ǰ�����Ҫ��srand��������ʹ�á�
	while (1) {
		printf("���������µ�����>��\n");
		scanf("%d", &guess);
		if (guess > ret) {
			printf("���´��ˣ�\n");
		}
		else if (guess < ret) {
			printf("����С�ˣ�\n");
		}
		else {
			printf("���¶��ˣ�\n");
			break;
		}
	}
}

int main() {

	int input = 0;
	srand((unsigned int)time(NULL));//��Ҫ�� #include<time.h>
	do {
		menu();
		printf("��ѡ��>:\n");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ�������ټ���\n");
			break;
		default:
			printf("�������ѡ������\n");
			break;
		}
	} while (input);
	return 0;
}