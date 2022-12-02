#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
/*
* qsort函数在库函数中定义
*
 void qost(void*base,
		   size_t num,-排序数组的长度
		   size_t width,-数组中其中一个元素的大小
		   int(*compare)(const void* e1,const void*e2)-定义一个比较函数来进行换位置
		   );

 */
//int  cmp_int(const void* e1, const void* e2) {
//
//	return *(int*)e1 - *(int*)e2;
//
//}
//
//void test1() {
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//}

//int com_f(const void* e1, const void* e2) {
//	if (*(float*)e1 == *(float*)e2) {
//		return 0;
//	}
//	else if (*(float*)e1 > *(float*)e2) {
//		return 1;
//	}
//	else {
//		return -1;
//	}
//}

//void test2() {
//   
//	float arr[] = { 5.5,3.6,4.5,8.9,5.4,7.5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[6]), com_f);
//	int i = 0;
//		for (i = 0; i < sz; i++) {
//			printf("%f ", arr[i]);
//		}
//}

struct Stu {
	int age;
	char name[19];
};

//int cmp_Str(const void* e1, const void* e2) {
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}

int cmp_Stu(const void* e1, const void* e2) {
	//字符串比较应该用库函数strcmp()，导包string.h.
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
	
	/*这样比较是错误的，字符串不能直接用 > < = 符号来进行比较。 
	if (((struct Stu*)e1)->name == ((struct Stu*)e2)->name){
		return 0;
	}
	else if (((struct Stu*)e1)->name > ((struct Stu*)e2)->name) {
		return 1;
	}
	else {
		return -3;
	}*/
}


void test3() {
	struct Stu s1[] = { {18,"zhangsan"},{28,"lisi"},{22,"wangwu"} };
	int sz = sizeof(s1) / sizeof(s1[0]);
	qsort(s1, sz, sizeof(s1[0]), cmp_Stu);
   
}

int main() {
	
	//test1();
	//test2();
	test3();
	
	return 0;
	
}


//void bubble_sort(int arr[10], int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		int j = 0;
//		for (j = 0; j < sz - 1 - i ; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main() {
//
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);//定义一个冒泡排序算法，用来给一个整形数组进行排序，结果为顺序。
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//
//}


//int Add(int x , int y) {
//
//	return x + y;
//}
//
//int main() {
//	//指针数组
//	//int* arr[10];
//	//数组指针
//	//int*(*pa)[10]= &arr;
//	//函数指针
//	int (*pAdd)(int, int) = Add;//&Add
//	//int sum= (*pAdd)(1, 2);
//	//int sum = pAdd(1, 2);
//	//Add(1, 2);
//	//printf("sum=%d\n", sum);
//	//函数指针的数组
//	int(*pArr[5])(int, int);
//	//指向函数指针数组的指针
//	int(*(*ppArg)[5])(int, int) = &pArr;
//	return 0;
//}