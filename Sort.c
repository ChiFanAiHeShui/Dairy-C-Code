#define _CRT_SECURE_NO_WARNINGS

#include "Sort.h"

void PrintfArray(int* a, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

void InsertSort(int* a, int n) {


	for (int i = 0; i < n - 1; i++) {

		//a[0]~a[end]有序，把数组下标为end + 1的值插入数组后，数组仍保持有序。
		int end = i;
		int tmp = a[end + 1];

		while (end >= 0) {

			if (tmp < a[end]) {

				a[end + 1] = a[end];
				end--;

			}
			else{
				break;
			}
		}

		a[end + 1] = tmp;
	}


	/*
	for (int i = 0; i < n - 1; i++) {
		
		int end = n - 1;

		while (end > 0) {
			if (a[end] >= a[end - 1]) {
				end--;
			}

			if (a[end] < a[end - 1]) {
				int tmp = a[end - 1];
				a[end - 1] = a[end];
				a[end] = tmp;
				end--;
			}
		}
	}*/

}



void ShellSort(int* a, int n) {
	
	int gap = n;

	//当 gap>1时，就是对数据进行了分组预排序
	//当gap ==1时，就是对分组预排序的结果进行直接插入排序了
	while (gap >= 1) {

		gap = (gap / 3) +  1;//除以三是为了使gap的值不至于太大从而导致预排序的结果比较混乱
		                    //并且最后加1是为了确保最后 gap == 1 ，从而进行最后的直接插入排序

		//对分成的gap组数据的分别插入排序
		for (int i = 0; i < gap; i++) {

			//对其中一组数据的直接插入排序
			for (int j = 0; j < n - gap; j += gap) {//***当gap等于1时，就是一个直接插入排序
				// n-gap 就是end能取到的的最大值

				//a[0]~a[end]有序，把数组下标为end + gap的值插入数组后，数组仍保持有序。
				int end = j;
				int tmp = a[end + gap];

				while (end >= 0) {

					if (tmp < a[end]) {

						a[end + 1] = a[end];
						end -= gap;

					}
					else {
						break;
					}
				}

				a[end + gap] = tmp;
			}


		}
	}

}


