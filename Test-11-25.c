#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(char* str) {
	printf("%s\n", str);
}

int main() {
	void (*p)(char*) = Print;//����ָ��Ķ���
	(*p)("Hello World!");//����ָ���ʹ��
	return 0;

}

//����ָ�� - ��ָ�������ָ��
//����ָ�� - ��ָ������ָ��
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
//	//&������ �� ������ ���Ǻ����ĵ�ַ�������鲻ͬ
//	/*
//	printf("%p\n",&Add);
//	printf("%p\n",Add);
//	*/
//	int (*pa)(int, int) = Add;//����ָ��Ķ��壬����������ָ��Ķ���
//	printf("%d\n", (*pa)(2, 3));//������Ϊ��5
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
//	test(arr);//ָ������Ҳ����
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
//	//һ��ָ��p����������
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
//	//�ַ�ָ��
//	char ch = 'W';
//	char* p = &ch;
//	const char* p2 = "abcdef";
//	
//	//ָ������ - ���� - ���ָ�������
//	int* arr[10];
//	char* ch[5];
//	
//	//����ָ�� - ָ������
//	int* p3 ; //����ָ�� - ָ�����ε�ָ��
//	char* p4; //�ַ�ָ�� - ָ���ַ���ָ��
//	int arr2[5];//����
//	int(*pa)[5] = &arr2;//ȡ������arr2�ĵ�ַ��pa����һ��ָ��
//	return 0;
//
//}

//int main() {
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//
//	�����p�洢����arr�������Ԫ�ص�ַ����*p���Ƕ�����н����ò�������*p������Ԫ����������1
//	for (i = 2; i < 10; i++) {
//
//		printf("%d ", *(p + i));
//		printf("%d ", p[i]);
//		printf("%d ", *(arr + i));
//		printf("%d ", arr[i]);//arr[i] == *��arr + i�� == *(p + i�� == p[i]
//	}
//	return 0;
//
//}

//int main() {
//
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	int(*p)[5] = arr;
//	printf("%p \n", p);//����ĵ�ַ
//	printf("%p \n", (p +1) );
//	
//	printf("---------------------\n");
//	
//	printf("%p \n", *p);//��ֵ��Ԫ�صĵ�ַ
//	printf("%p \n", (*p + 1));
//
//
//	/*
//	000000A37B12F578
//    000000A37B12F58C
//	���20��˵������һ������
//   ---------------------
//    000000A37B12F578
//    000000A37B12F57C
//	���4��˵��ֻ����һ��Ԫ��
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
//			printf("%d ", p[i][j]);//--�����еĴ�ӡ�Ľ��һ����
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);//arr����Ԫ�ص�ַ���������Ǹ���ά���飬������Ԫ�ص�ַ������ĵ�ַ
//	printf("\n");
//	print2(arr, 3, 5);
//
//	return 0;
//}
//int main() {
//	//����ģʽ
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
//	�����õĴ�ӡģʽ
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