#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void reverse(int arr[],int sz) {
	int left = 0;
	int right = sz - 1;
	while (left < right) {
		//从左边找偶数，找到偶数就停
		while ((left < right) && arr[left] % 2 == 1) {
			left++;
		}

		//从右边找奇数，找到奇数就停
		while ((left < right) && arr[right] % 2 == 0) {
			right--;
		}

		if (left < right) {
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}

int main() {

	int arr[] = { 1,3,52,2,4,5,6,89,2,35,46 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	reverse(arr,sz);
	int i = 0;
	for (i = 0; i < sz; i ++) {
		printf("%d  ", arr[i]);
	}
	return 0;
}

//int main() {
//	int money;
//	int total;
//	int empty;
//
//	scanf("%d", &money);
//
//	total = money;
//	empty = money;
//
//	while (empty >= 2) {
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total = %d\n",total);
//	return 0;
//}