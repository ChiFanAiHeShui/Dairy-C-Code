#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>
#include <string.h>


//                这里形参中的是arr[]保存的是arr1数组的首元素地址。因为如果传来的是一个数组，那么就很浪费空间了。
int  is_in_theArry(int  arr[], int x, int sz) {//一个用二分法查找一个有序数组中的一个数的函数
	int left = 0;
	int right = sz - 1;//所以这里不能使用 【(sizeof(arr) / sizeof(arr[0])) - 1】来求右下标，需要额外传参sz

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
	//这里传递过去的arr1是数组arr1首元素的地址
	if ((is_in_theArry(arr1, k, sz)) == 0) {
		printf("找不到指定的数字\n");
	}
	else {
		printf("找到了，这个数的下标为： ----> %d", ret);
	}
	return 0;
}






//
//int  is_LeapYear(int x ) {//判断一个数是否为闰年的函数
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
//int is_prime(int x) {//判断一个数是否为素数的函数
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