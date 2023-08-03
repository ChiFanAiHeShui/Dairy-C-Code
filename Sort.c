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

		//a[0]~a[end]���򣬰������±�Ϊend + 1��ֵ��������������Ա�������
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

	//�� gap>1ʱ�����Ƕ����ݽ����˷���Ԥ����
	//��gap ==1ʱ�����ǶԷ���Ԥ����Ľ������ֱ�Ӳ���������
	while (gap >= 1) {

		gap = (gap / 3) +  1;//��������Ϊ��ʹgap��ֵ������̫��Ӷ�����Ԥ����Ľ���Ƚϻ���
		                    //��������1��Ϊ��ȷ����� gap == 1 ���Ӷ���������ֱ�Ӳ�������

		//�Էֳɵ�gap�����ݵķֱ��������
		for (int i = 0; i < gap; i++) {

			//������һ�����ݵ�ֱ�Ӳ�������
			for (int j = 0; j < n - gap; j += gap) {//***��gap����1ʱ������һ��ֱ�Ӳ�������
				// n-gap ����end��ȡ���ĵ����ֵ

				//a[0]~a[end]���򣬰������±�Ϊend + gap��ֵ��������������Ա�������
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


