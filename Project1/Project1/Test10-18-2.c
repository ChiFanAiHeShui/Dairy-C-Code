#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main() {
//	int arr[10] = {0};
//	printf("%d\n", sizeof(arr));//������Ϊ40����Ϊsizeof�����������������������Ĵ�С����λ���ֽڡ�
//
//	int arr1[] = {1,2,3,4,5};
//
//	printf("%p\n",arr1);//��ʾ��Ԫ�صĵ�ַ
//	printf("%p\n", arr1 +1);
//
//	printf("%p\n",&arr[0]);//��ʾ��Ԫ�صĵ�ַ
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n",&arr);//��ʾ��������
//	printf("%p\n", &arr + 1);
//
////����Ϊ������
//	/*
//40
//000000FD72B9FB68      ֻ����4
//000000FD72B9FB6C
//
//000000FD72B9FB28      ֻ����4
//000000FD72B9FB2C 
//
//000000FD72B9FB28      ����20����ʾ����һ������ĳ��ȡ�
//000000FD72B9FB50
//	*/
//	return 0; 
//}

////�Զ���һ��ð�������㷨����һ������������԰�������Ľ�������
//void bubble_sort(int arr[], int sz) {
//    int i = 0;
//    for (int i = 0; i < sz - 1;i++) {//�ⲿ��ѭ����Ҫѭ���Ĵ���Ϊ����ĳ��ȼ�һ
//        int j = 0;
//        int result = 0;
//        for (int j = 0; j < (sz - 1) - i;j++) {//ÿ���ⲿ��ѭ����ɺ�˵�����������ŵ�����ˣ���ѭ�������ͻ���١�
//            if (arr[j] > arr[j+1]) {
//                int temp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j + 1] = temp;
//                result = 1;
//            }
//            if (result == 0) {
//                break;
//            }
//        }
//    }
//}
//
//int main() {
//    int i = 0;
//    int sz = 0;
//    int arr[] = {10,9,8,7,6,5,4,3,2,1};
//    sz = sizeof(arr) / sizeof(arr[0]);//���arr����ĳ���
//
//    bubble_sort(arr, sz);//�Զ���ð������������arr�����ų�����
//    for (int i = 0; i < sz;i++) {
//        printf("%d  ",arr[i]);
//    }
//    return 0;
//}