#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main() {
//
//	int num;
//
//	do {
//
//		printf("������һ���Ǹ�������");
//		scanf("%d", &num);
//		if (num < 0) {
//			printf("�벻Ҫ���븺����");
//		}
//
//	} while (num < 0);
//	
//	int num2 = num;
//
//	printf("%d������ʾ�Ľ���ǣ�",num2);
//
//	do {
//		
//		printf("%d", num % 10);
//		num /= 10;
//
//	} while (num > 0);
//	puts("��");
//
//	return 0;
//}


//int main() {
//
//	int num;
//
//	do {
//
//		printf("������һ���Ǹ�������");
//		scanf("%d", &num);
//		if (num < 0) {
//			printf("�벻Ҫ���븺����");
//		}
//
//	} while (num < 0);
//	
//	printf("%d��λ���ǣ�", num);
//	int sum = 0;
//
//	do {
//		
//		
//		num /= 10;
//		sum += 1;
//
//	} while (num > 0);
//
//	printf("%d", sum);
//	puts("\n");
//
//	return 0;
//}


//int main() {
//
//	
//	int num1, num2;
//
//	printf("����������������\n");
//
//	printf("����1��");
//	scanf("%d", &num1);
//
//	printf("����2��");
//	scanf("%d", &num2);
//	
//	int tmp = 0;//��������������֮�����
//
//	//�����ȼ���num1����num2
//	int max = num1;
//	int min = num2;
//
//	//�жϼ����Ƿ�������粻��������max��min��ֵ����һ�¼��ɡ�
//	//��ͬʱ�������������С���Ǹ�����ֵ��tmp����������ı������
//	if (num1 > num2) {
//		tmp = min;
//	}
//	else {
//		max = num2;
//		min = num1;
//		tmp = min;
//	}
//	
//	int sum = 0;//�����洢������֮�������������
//
//	//�������
//	do {
//
//		sum += tmp;
//		tmp += 1;
//		
//
//	} while (tmp <= max );
//
//	printf("���ڵ���%dС�ڵ���%d�������������ǣ�%d", min, max, sum);
//	return 0;
//}
//
//int main() {
//
//
//	return 0;
//}

//int main() {
//
//	int no;
//	printf("������һ��������");
//	scanf("%d", &no);
//
//	int tag = 0;//�ж�no�Ƿ�Ϊ����
//
//	while (no >= 0) {//�����Ϊ��������ôtag��ֵһ�����ڻ����1.
//		
//		tag++;
//		printf("%d", no);
//		no--;
//	}//no������ȴ��ڻ��ߵ���0�Ļ�����ô������ѭ��������ʱ������ֵΪ-1.
//
//	if (tag >= 1) {
//		putchar("\n");
//	}
//	else {
//		;
//	}
//
//
//	return 0;
//}