#define _CRT_SECURE_NO_WARNINGS

//ģ��ʵ��qsort����
#include <stdio.h>
////ð�������㷨
//void bubble_sort(int arr[10], int sz) {
//
//	int i = 0;
//	for (i = 0; i < sz - 1; i++) {
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//
//		}
//
//	}
//
//}
//
//int main() {
//
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	
//	bubble_sort(arr, sz);
//	
//	
//	
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ",arr[i]);
//	}
//
//	return 0;
//
//}

//#include <stdio.h>
////��bubble_sort���������qsort����
//int compare_int(const void* e1, const void* e2) {
//
//	return  (*(int*)e1 - *(int*)e2);
//}
//
//void Swap(char * e1,char * e2,int width) {
//              
//	int i = 0;
//	for (i = 0; i < width; i++) {
//	
//		char tmp = *e1;
//		*e1 = *e2;
//		*e2 = tmp;
//		e1++;
//		e2++;
//	}
//
//}
//
//void bubble_sort(void* base, unsigned int sz, unsigned int width, int(*compare)(const void* e1, const void* e2)) {
//
//	int i = 0;
//	for (i = 0; i < sz - 1; i++) {
//		
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++) {
//
//			if ((compare_int((char*)base + j * width, (char*)base + (j + 1) * width)) > 0) {
//					
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//
//				}
//			}
//
//		}
//
//	}
//
//
//
//
//int main() {
//
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr,sz,sizeof(arr[0]),compare_int);
//
//
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//
//}


//#include <stdio.h>
//
//
//int find_num(int arr[3][3],int  input) {
//
//	int i = 0;
//	int j = 2;
//
//	while ( j >= 0 && i < 3 ) {
//		if (arr[i][j] > input) {
//			j--;
//		}
//		else if (arr[i][j] < input) {
//			i++;
//		}
//		else {
//			return 0;
//		}
//	}
//	return 1;
//}
//int main() {
//
//	int arr[3][3] = { {1,2,3} ,{4,5,6},{7,8,9} };//�����������Ϊ3��3��
//	
//	int input = 0;
//	printf("������������ҵ�����>:\n");
//	scanf("%d",&input);
//	int ret = 0;
//	
//	ret = find_num(arr,input);
//
//	if (ret == 0) {
//		printf("�ҵ���\n");
//	}
//	else if(ret == 1) {
//		printf("û�ҵ�\n");
//	}
//
//	
//		
//	
//	return 0;
//}



//#include <string.h>
////�����������ַ�����
//void left_revolve(char arr1[100], int len, int k) {
//
//	char arr2[100] = { 0 };
//	int x = len - k;
//	int y = len - k;
//	
//	if (k < len) {
//		
//		int i = 0;
//		
//		for (i = 0; i < k; i++) {
//			arr2[x] = arr1[i];
//			x++;
//		}
//
//		for (i = 0; i < y; i++) {
//			arr2[i] = arr1[k];
//			k++;
//		}
//	}else if (k == len) {
//		
//		char* left = arr1;
//		char* right = arr1 + len-1;
//
//		while (left < right) {
//			char tmp = *left;
//			*left = *right;
//			*right = tmp;
//			left++;
//			right--;
//		}
//
//	}
//
//	printf("%s", arr2);
//
//}
//
//int main() {
//
//	char arr1[100] = "ABCD";
//	int len = strlen(arr1);
//	
//	int k = 0;
//	printf("����������Ҫ������λ��\n");
//	scanf("%d", &k);
//
//	left_revolve(arr1,len,k);
//
//	return 0;
//}