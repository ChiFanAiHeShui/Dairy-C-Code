#define _CRT_SECURE_NO_WARNINGS

/*ʵ��һ���������ж�һ�����ǲ���������
��������ʵ�ֵĺ�����ӡ100��200֮���������*/

#include <stdio.h>
#include<math.h>
#include <string.h>

//int is_prime(int num) {
//	
//	int j = 0;
//	//��һ�������������һ����������������Ϊ0��������������ô���������Ϊ������
//	for (j = 2; j <= sqrt(num); j++) {
//		
//		if ((num % j) == 0) {
//			return 0;
//		}
//	}
//	
//	return 1 ;
//
//}
//
//int main() {
//	
//	int num = 0;
//	int i = 0;
//
//	printf("������һ������\n");
//	scanf("%d", &num);
//	
//	if (1 == (is_prime(num))){
//		printf("�����Ϊ����\n");
//	}
//	else {
//		printf("�������������\n");
//	}
//	
//	printf("--------------------------------------\n");
//	printf("�����������100~200֮�������\n");
//	
//	for (i = 100; i <= 200; i++) {
//		
//		if (1 == (is_prime(i))) {
//			printf("%d ",i);
//		}
//
//	}
//
//	return 0;
//}

/*ʵ�ֺ����ж�year�ǲ������ꡣ*/

//int is_leap_year(int year) {
//
//	return ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));
//
//}
//
//int main() {
//
//	int year = 0;
//	printf("������һ�����\n");
//	scanf("%d", &year);
//
//	if (1 == (is_leap_year(year))) {
//		
//		printf("��һ��������\n");
//
//	}
//	else {
//		
//		printf("��һ�겻������\n");
//
//	}
//	
//	return 0;
//}

/*ʵ��һ�������������������������ݡ�*/

//void swap(int* a, int* b) {
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//int main() {
//
//	int i = 3;
//	int j = 5;
//	printf("����ǰ %d %d \n", i, j);
//
//	swap(&i, &j);
//
//	printf("������ %d %d \n", i, j);
//
//	return 0;
//}

/*ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��

�磺����9�����9*9�ھ������12�����12*12�ĳ˷��ھ���*/

//int main() {
//
//	int j = 0;
//	int i = 0;
//	int num = 0;
//	
//	printf("������һ������\n");
//	scanf("%d", &num);
//
//	for (i = 1; i <= num; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("%d * %d = %-d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

/*������С��Ϸ����������*/

//int main() {
//
//	char arr1[20] = { 0 };
//	char arr2[20] = "World1234";
//	int i = 0;
//	
//
//	while (i < 3) {
//		
//      printf("����������:>\n");
//		scanf("%s", arr1);
//
//	
//	
//		if (strcmp(arr1, arr2) == 0) {
//			printf("��ϲ�㣬����������ȷ\n");
//			break;
//		}
//		else {
//			printf("�����������������߸�ʽ����\n");
//		}
//		i++;
//	
//	}
//	
//
//	return 0;
//}