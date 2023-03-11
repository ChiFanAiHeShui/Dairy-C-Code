#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void bubble_sort(int arr[], int len)
//{
//	int i = 0;
//	for (i = 0; i < len - 1; i++) {
//		int j = 0;
//		for (j = 0; j < len - 1 - i; j++) {
//			if (arr[j] > arr[j+1]) {
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//
//}
//
///*实现一个对整形数组的冒泡排序*/
//int main() {
//	int arr[] = { 1,2,5,4,8,6,54,5,256 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr,len);
//
//	for (int i = 0; i < len; i++) {
//		printf("%d ", arr[i]);
//	}
//   
//	return 0;
//}

/*
创建一个整形数组，完成对数组的操作

实现函数init() 初始化数组为全0
实现print()  打印数组的每个元素
实现reverse()  函数完成数组元素的逆置。
要求：自己设计以上函数的参数，返回值。
*/

//void init(int arr[],int len) {
//	int i = 0;
//	for (i = 0; i < len; i++) {
//		arr[i] = 0;
//	}
//
//}
//
//void print(int arr[],int len) {
//	
//	int i = 0;
//	for (i = 0; i < len; i++) {
//		printf("%d ", arr[i]);
//	}
//
//}
//
//void reverse(int arr[],int len) {
//	int left = 0;
//	int right = len - 1;
//	while (left < right) {
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//
//}
//
//int main() {
//	
//	int i = 0;
//	int arr[] = { 15,285,35,655,58,7,8,566,12,35 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	
//	//init(arr,len);
//	print(arr, len);
//	//reverse(arr,len);
//
//
//	/*for (i = 0; i < len; i++) {
//		printf("%d ", arr[i]);
//	}*/
//
//
//	return 0;
//}

/*将数组A中的内容和数组B中的内容进行交换。（数组一样大）*/

//void Exchange(int arr1[],int arr2[],int len) {
//	 
//	int i = 0;
//	for (i = 0; i < len; i++) {
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//}
//
//int main() {
//
//	int arr1[10] = { 1,56,58,44,125,23,65,52,548,21 };
//	int arr2[10] = { 25,355,156,14,25,3,35,65,45,52 };
//	int len = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	
//	Exchange(arr1,arr2,len);
//
//	for (i = 0; i < len; i++) {
//
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//
//}