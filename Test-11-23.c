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
//	int arr[10] = { 0 };//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr[4];//�������ָ������ - ָ������
//	char* pch[5];//����ַ�ָ������ - ָ������
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
//	//����1
//	if (p1 == p2) {
//		printf("hehe\n");
//	}
//	else {
//		printf("haha\n");
//	}
//
//	printf("---------------------------------\n");
//	
//	//����2
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
//	printf("%s\n", p);//����pָ������洢�����ַ�������Ԫ�ص�ַ���ڽ����޸ĺ������ϻᱨ��
//	//Segmentation fault - �δ���
//
//	return 0;
//
//}

//int main() {
//
//
//	char* p = "abcdef";//"abcdef"��һ�������ַ���
//	printf("%c\n",*p);//������Ϊa����ʾpָ������洢�����ַ�������Ԫ�ص�ַ��
//	                  %cΪ����ַ�
//	printf("%s\n",p);
//	return 0;
//}

//int main() {
//
//	char arr[] = "abcdef";
//	char* pc = arr;//pcָ������洢���ǳ����ַ��������ַ�Ԫ��
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}
//void test(int arr[]) {//���ﴫ��������arr�������Ԫ�ص�ַ���򱾻���64λ����ָ��Ϊ2���ֽ�
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);//������Ϊ2
//}
//
//int main() {
//
//
//	int arr[10] = {0};
//	test(arr);
//	return 0;
//}