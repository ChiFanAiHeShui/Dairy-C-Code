#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int Max(int x, int y) {//������������������ϴ�ֵ
//	return x > y ? x : y;
//}
//
//int main() {
//
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int result = Max(a, b);
//	printf("�ϴ���Ǹ���Ϊ: %d", result);
//	return 0;
//}

//int main() {//������֤c������Ϊ�ٵ�����
//	int i = 0;
//	if (i)//û�д�ӡ��˵��0Ϊ�٣���ִ�г���
//		printf("���!");
//	return 0;
//
//}


/*
д���뽫�������������Ӵ�С�����

���磺

���룺2 3 1

�����3 2 1
*/ 
//1 2 3
//2 1 3
//2 3 1
//3 2 1

//void Order(int arr[3]) {
//	int i = 0;
//	int j = 0;
//	for (int i = 3; i > 0; i--) {
//		for (int j = 0; j < i - 1; j++) {
//			if (arr[j] < arr[j + 1]) {
//				int a = 0;
//				a = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = a;
//			}
//		}
//	}
//}
//
//int main() {
//	int i = 0;
//	int arr[3] = {0,0,0};
//	
//	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
//	Order(arr);//�Զ���һ��Order����������������
//	
//	for (i = 0; i < 3; i++) {
//		printf("%d ", arr[i]);
//	};
//	
//	return 0;
//}


/*дһ�������ӡ1 - 100֮������3�ı���������*/

//int main() {
//
//	int i = 0;
//	for (int i = 1; i < 101; i++) {
//		if (i % 3 == 0) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



/*��10 �����������ֵ*/

//int  get_Max(int arr[],int length) {//����ð�������㷨���������򣬷������ֵ
//	int i = 0;
//	int j = 0;
//	for (int i = length; i > 0; i--) {
//		for (int j = 0; j < i - 1; j++) {
//			if (arr[j] < arr[j + 1]) {
//				int a = 0;
//				a = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = a;
//			}
//		}
//	}
//	return arr[0];
//}
//
//
//int main() {
//	
//	int arr[10] = {1,23,2,5,4,6,8,7,45,5};
//	int length = sizeof(arr)/sizeof(arr[0]);
//	printf("����ĳ���Ϊ�� %d \n", length);
//
//	int max = get_Max(arr,length);//�Զ���һ�������ֵ�ĺ���
//	
//	printf("����������������ǣ� %d ", max);
//	return 0;
//}
