#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
/*
* qsort�����ڿ⺯���ж���
*
 void qost(void*base,
		   size_t num,-��������ĳ���
		   size_t width,-����������һ��Ԫ�صĴ�С
		   int(*compare)(const void* e1,const void*e2)-����һ���ȽϺ��������л�λ��
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
	//�ַ����Ƚ�Ӧ���ÿ⺯��strcmp()������string.h.
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
	
	/*�����Ƚ��Ǵ���ģ��ַ�������ֱ���� > < = ���������бȽϡ� 
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
//	bubble_sort(arr,sz);//����һ��ð�������㷨��������һ����������������򣬽��Ϊ˳��
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
//	//ָ������
//	//int* arr[10];
//	//����ָ��
//	//int*(*pa)[10]= &arr;
//	//����ָ��
//	int (*pAdd)(int, int) = Add;//&Add
//	//int sum= (*pAdd)(1, 2);
//	//int sum = pAdd(1, 2);
//	//Add(1, 2);
//	//printf("sum=%d\n", sum);
//	//����ָ�������
//	int(*pArr[5])(int, int);
//	//ָ����ָ�������ָ��
//	int(*(*ppArg)[5])(int, int) = &pArr;
//	return 0;
//}