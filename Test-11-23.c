#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main() {

	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;
	int* arr[4] = { &a,&b,&c,&d };
	int i = 0;
	for (int i = 0; i < 4; i++) {

		printf("%d  ", *(arr[i]));

	}

	printf("\n");

	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,4,5 };
	int arr3[] = { 1,2,3,4,5 };
	
	int* parr[] = { &arr1,&arr2,&arr3 };

	for (int i = 0; i < 3; i++)
	{
		int j = 0;
		for (int j = 0; j < 5; j++) {
			printf("%d ", *(parr[i] + j));
	    }
		printf("\n");
	}
	return 0;

}

//int main() {
//
//	int arr[10] = { 0 };//整形数组
//	char ch[5] = { 0 };//字符数组
//	int* parr[4];//存放整形指针数组 - 指针数组
//	char* pch[5];//存放字符指针数组 - 指针数组
//	return 0;
//
//}
//int main() {
//
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//
//	//代码1
//	if (p1 == p2) {
//		printf("hehe\n");
//	}
//	else {
//		printf("haha\n");
//	}
//
//	printf("---------------------------------\n");
//	
//	//代码2
//	if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else {
//		printf("haha\n");
//	}
//
//	return 0;
//}


//int main() {
//
//	char* p = "abcdef";
//	*p = 'W';
//	printf("%s\n", p);//这里p指针变量存储的是字符串的首元素地址，在将其修改后，理论上会报错
//	//Segmentation fault - 段错误
//
//	return 0;
//
//}

//int main() {
//
//
//	char* p = "abcdef";//"abcdef"是一个常量字符串
//	printf("%c\n",*p);//输出结果为a，表示p指针变量存储的是字符串的首元素地址。
//	                  %c为输出字符
//	printf("%s\n",p);
//	return 0;
//}

//int main() {
//
//	char arr[] = "abcdef";
//	char* pc = arr;//pc指针变量存储的是常量字符串的首字符元素
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}
//void test(int arr[]) {//这里传过来的是arr数组的首元素地址，因本机是64位机，指针为2个字节
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);//输出结果为2
//}
//
//int main() {
//
//
//	int arr[10] = {0};
//	test(arr);
//	return 0;
//}