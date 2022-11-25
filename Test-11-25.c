#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(char* str) {
	printf("%s\n", str);
}

int main() {
	void (*p)(char*) = Print;//函数指针的定义
	(*p)("Hello World!");//函数指针的使用
	return 0;

}

//数组指针 - 是指向数组的指针
//函数指针 - 是指向函数的指针
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//
//	//int arr[10] = {0};
//	//int (*p)[10] = &arr;
//
//	//&函数名 和 函数名 都是函数的地址，和数组不同
//	/*
//	printf("%p\n",&Add);
//	printf("%p\n",Add);
//	*/
//	int (*pa)(int, int) = Add;//函数指针的定义，类似于数组指针的定义
//	printf("%d\n", (*pa)(2, 3));//输出结果为：5
//
//	return 0;
//
//}

//void test(int** ptr) {
//	printf("num = %d\n",**ptr);
//}
//int main() {
//
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//
//	return 0;
//
//}

//void test(int** p)
//{}
//int main()
//{
//	int* ptr;
//	int** pp = &ptr;
//	test(&ptr);
//	test(pp);
//	int* arr[10];
//	test(arr);//指针数组也可以
//
//	return 0;
//}
//void test1(int* p) 
//{}
//void test2(char* p) 
//{}
//int main() {
//
//
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);//ok
//	test1(p1);//ok
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);
//	test2(pc);
//
//	return 0;
//
//}
//void print(int* p, int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d\n", *(p + i));
//	}
//}
//
//int main() {
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p，传给函数
//	print(p, sz);
//
//	return 0;
//
//
//}

//void test(int arr[3][5])
//{}
//void test1(int arr[][5])
//{}
////void test2(int arr[][])//err
////{}
//void test3(int *arr)//err
//{}
//void test4(int** arr)//err
//{}
//void test5(int(*arr)[5])
//{}
//
//void test6(int* arr[5])//err
//{}
//
//int main() {
//
//	int arr[3][5] = { 0 };
//	test(arr);
//	test1(arr);
//	test2(arr);
//	test3(arr);
//	test4(arr);
//	test5(arr);
//	test6(arr);
//	return 0;
//
//
//}
//void test(int arr[])
//{}
//void test(int arr[10])
//{}
//void test(int *arr)
//{}
//void test2(int *arr[20])
//{}
//void test2(int **arr)
//{}
//int main() {
//
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//
//	test(arr);
//	test2(arr2);
//	return 0;
//
//}

//int main() {
//
//	//字符指针
//	char ch = 'W';
//	char* p = &ch;
//	const char* p2 = "abcdef";
//	
//	//指针数组 - 数组 - 存放指针的数组
//	int* arr[10];
//	char* ch[5];
//	
//	//数组指针 - 指向数组
//	int* p3 ; //整形指针 - 指向整形的指针
//	char* p4; //字符指针 - 指向字符的指针
//	int arr2[5];//数组
//	int(*pa)[5] = &arr2;//取出数组arr2的地址，pa就是一个指针
//	return 0;
//
//}

//int main() {
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//
//	这里的p存储的是arr数组的首元素地址，而*p则是对其进行解引用操作，则*p是其首元素整形数字1
//	for (i = 2; i < 10; i++) {
//
//		printf("%d ", *(p + i));
//		printf("%d ", p[i]);
//		printf("%d ", *(arr + i));
//		printf("%d ", arr[i]);//arr[i] == *（arr + i） == *(p + i） == p[i]
//	}
//	return 0;
//
//}

//int main() {
//
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	int(*p)[5] = arr;
//	printf("%p \n", p);//数组的地址
//	printf("%p \n", (p +1) );
//	
//	printf("---------------------\n");
//	
//	printf("%p \n", *p);//数值首元素的地址
//	printf("%p \n", (*p + 1));
//
//
//	/*
//	000000A37B12F578
//    000000A37B12F58C
//	相差20，说明加了一个数组
//   ---------------------
//    000000A37B12F578
//    000000A37B12F57C
//	相差4，说明只加了一个元素
//	
//	*/
//	return 0;
//}

//void print1(int arr[3][5], int x, int y) {
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++) {
//		for (j = 0; j < y; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//
//void print2(int(*p)[5], int x, int y) {
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++) {
//		for (j = 0; j < y; j++) {
//			//printf("%d ", *(*(p + i) + j));
//			//printf("%d ", (*(p + i))[j]);
//			//printf("%d ", *(p[i] + j));
//			printf("%d ", p[i][j]);//--这四行的打印的结果一样的
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);//arr是首元素地址。不过这是个二维数组，所以首元素地址是数组的地址
//	printf("\n");
//	print2(arr, 3, 5);
//
//	return 0;
//}
//int main() {
//	//常用模式
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", *(p + i));
//	}
//
//	/*
//	* 
//	* 
//	不常用的打印模式
//	int(*pa)[10] = &arr;
//	int i = 0;
//	
//	
//	for (i = 0; i < 10; i++) {
//		printf("%d ", *(*pa + i));//*pa = arr
//	}
//
//	
//	for (i = 0; i < 10; i++) {
//		printf("%d  ", (*pa)[i]);
//	}*/
//
//	return 0;
//}