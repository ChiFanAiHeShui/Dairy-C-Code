#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>
#include <string.h>


//                �����β��е���arr[]�������arr1�������Ԫ�ص�ַ����Ϊ�����������һ�����飬��ô�ͺ��˷ѿռ��ˡ�
int  is_in_theArry(int  arr[], int x, int sz) {//һ���ö��ַ�����һ�����������е�һ�����ĺ���
	int left = 0;
	int right = sz - 1;//�������ﲻ��ʹ�� ��(sizeof(arr) / sizeof(arr[0])) - 1���������±꣬��Ҫ���⴫��sz

	while (left <= right) {
		int mid = 0;
		mid = (left + right) / 2;
		if (arr[mid] < x) {
			left = mid + 1;
		}
		else if (arr[mid] > x) {
			right = mid - 1;
		}
		else {
			return mid;
		}
	}
	return 0;
}

int main() {
	int arr1[] = { 0,1,2,3,4,5,6,7,8,9,10 };
	int k = 8;
	int  ret = 0;
	int sz = 0;
	sz = (sizeof(arr1) / sizeof(arr1[0]));
	ret = is_in_theArry(arr1, k, sz);
	//���ﴫ�ݹ�ȥ��arr1������arr1��Ԫ�صĵ�ַ
	if ((is_in_theArry(arr1, k, sz)) == 0) {
		printf("�Ҳ���ָ��������\n");
	}
	else {
		printf("�ҵ��ˣ���������±�Ϊ�� ----> %d", ret);
	}
	return 0;
}






//
//int  is_LeapYear(int x ) {//�ж�һ�����Ƿ�Ϊ����ĺ���
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0)){
//		return 1;
//	}
//	return 0;
//}
//int main() {
//	int i = 0;
//	for (int i = 1000; i <= 2000; i++) {
//		if (is_LeapYear(i) == 1) {
//			printf("%d  ",i);
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//#include <math.h>
//
//int is_prime(int x) {//�ж�һ�����Ƿ�Ϊ�����ĺ���
//	int j = 0;
//	for (int j = 2; j < sqrt(x); j++) {
//		if (x % j ==0){
//			return 0;
//		}
//	}
//	return 1;
//}
//
//
//int main() {
//	int i = 0;
//	for (int i = 100; i <= 200; i++) {
//		if (is_prime(i) == 1) {
//			printf("%d  ",i);
//		}
//	}
//	return 0;
//}