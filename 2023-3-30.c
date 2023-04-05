#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//打印杨辉三角
 
//int main() {
//
//	int n = 0;
//	printf("请输入一个数字，我们会打印相应行数的杨辉三角\n");
//	scanf("%d", &n);
//
//
//	int i = 0;
//	int arr1[30] = { 0 };
//	int arr2[30] = { 1,1 };//注意，是从第三行开始打印arr2，所以前面两行得提前定义
//
//	for (i = 1; i <= n; i++) {
//
//		int j = 0;
//
//		int k = 0;
//		int left = 0;
//		int right = i - 1;
//		arr1[left] = 1;
//		arr1[right] = 1;
//
//
//
//		while ((right - left) >= 2) {//从第三行开始，将arr1前面两个数相加放到arr2里面
//			arr2[right] = 1;
//			arr2[++left] = arr1[k] + arr1[k + 1];
//			k++;
//		}
//
//		for (j = 0; j < i; j++) {//将arr2数组的内容更新到arr1中去，方便下次给arr2赋值
//			arr1[j] = arr2[j];
//		}
//
//
//		for (j = 0; j < i; j++) {
//			printf("%d ", arr2[j]);
//		}
//
//		printf("\n");
//
//	}
//
//	return 0;
//}



/*
日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。

以下为4个嫌疑犯的供词:

A说：不是我。

B说：是C。

C说：是D。

D说：C在胡说

已知3个人说了真话，1个人说的是假话。

现在请根据这些信息，写一个程序来确定到底谁是凶手。
*/
//
//#include<stdio.h>
//int main()
//{
//    int killer = 0;
//    //分别假设凶手是a,b,c,d,看谁是凶手时满足3个人说了真话，一个人说了假话
//    for (killer = 'a'; killer <= 'd'; killer++)
//    {
//        if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//            printf("凶手是：%c", killer);
//    }
//    return 0;
//}
//



