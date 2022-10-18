#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main() {
//	int arr[10] = {0};
//	printf("%d\n", sizeof(arr));//输出结果为40，因为sizeof（数组名）计算的整个数组的大小，单位是字节。
//
//	int arr1[] = {1,2,3,4,5};
//
//	printf("%p\n",arr1);//表示首元素的地址
//	printf("%p\n", arr1 +1);
//
//	printf("%p\n",&arr[0]);//表示首元素的地址
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n",&arr);//表示整个数组
//	printf("%p\n", &arr + 1);
//
////下面为输出结果
//	/*
//40
//000000FD72B9FB68      只加了4
//000000FD72B9FB6C
//
//000000FD72B9FB28      只加了4
//000000FD72B9FB2C 
//
//000000FD72B9FB28      加了20，表示加了一个数组的长度。
//000000FD72B9FB50
//	*/
//	return 0; 
//}

////自定义一个冒泡排序算法，将一个整形数组可以按照升序的结果输出。
//void bubble_sort(int arr[], int sz) {
//    int i = 0;
//    for (int i = 0; i < sz - 1;i++) {//外部大循环需要循环的次数为数组的长度减一
//        int j = 0;
//        int result = 0;
//        for (int j = 0; j < (sz - 1) - i;j++) {//每当外部大循环完成后，说明最大的数给放到最后了，内循环次数就会减少。
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
//    sz = sizeof(arr) / sizeof(arr[0]);//求出arr数组的长度
//
//    bubble_sort(arr, sz);//自定义冒泡排序函数，将arr数组排成升序。
//    for (int i = 0; i < sz;i++) {
//        printf("%d  ",arr[i]);
//    }
//    return 0;
//}