#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int Max(int x, int y) {//输入两个整数，输出较大值
//	return x > y ? x : y;
//}
//
//int main() {
//
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int result = Max(a, b);
//	printf("较大的那个数为: %d", result);
//	return 0;
//}

//int main() {//用来验证c语言中为假的条件
//	int i = 0;
//	if (i)//没有打印，说明0为假，不执行程序
//		printf("你好!");
//	return 0;
//
//}


/*
写代码将三个整数数按从大到小输出。

例如：

输入：2 3 1

输出：3 2 1
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
//	Order(arr);//自定义一个Order函数来将数组排序
//	
//	for (i = 0; i < 3; i++) {
//		printf("%d ", arr[i]);
//	};
//	
//	return 0;
//}


/*写一个代码打印1 - 100之间所有3的倍数的数字*/

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



/*求10 个整数中最大值*/

//int  get_Max(int arr[],int length) {//利用冒泡排序算法将数组排序，返回最大值
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
//	printf("数组的长度为： %d \n", length);
//
//	int max = get_Max(arr,length);//自定义一个求最大值的函数
//	
//	printf("这个数组中最大的数是： %d ", max);
//	return 0;
//}
