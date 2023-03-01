#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*给定两个数，求这两个数的最大公约数

例如：

输入：20 40

输出：20*/
//#include <stdio.h>
//int main() {
//
//	int x;
//	int y;
//	int gcd_x;
//	int gcd_y;
//	printf("请输入两个整数\n");
//	scanf("%d %d", &x, &y);
//
//	for (int i = 1; i < x; i++) {
//		if (x % i == 0) {
//			gcd_x = i;
//		}
//	}
//
//	for (int i = 1; i < y; i++) {
//		if (y % i == 0) {
//			gcd_y = i;
//		}
//	}
//
//
//	if (gcd_x > gcd_y) {
//		printf("这两个数中的最大公约数为：%d\n",gcd_x);
//	}
//	else if (gcd_x < gcd_y) {
//		printf("这两个数中的最大公约数为： % d\n", gcd_y);
//	}
//	else {
//		printf("这两个数中的最大公约数为： % d\n", gcd_y);
//	}
//
//
//	return 0;
//}

/*编写程序数一下 1到 100 的所有整数中出现多少个数字9*/
//
//#include <stdio.h>

//int main() {
//
//	int i = 0;
//	int count = 0;
//	for (i =1; i < 101; i++) {
//		
//		if (i < 10) {
//			if (i % 9 == 0) {
//				count++;
//			}
//		}
//		else {
//			if ((i % 10) == 9) {
//				count++;
//			}
//			else if ((i / 10) == 9) {
//				count++;
//			}
//		}
//	}
//	printf("%d \n",count);
//	return 0;
//
//}

/*在屏幕上输出9*9乘法口诀表*/

//int main() {
//
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++) {
//		for (j = 1; j < i+1;j++) {
//			printf("%d*%d=%d  ", i, j, (i * j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


/*作业标题(664)
二分查找

作业内容
编写代码在一个整形有序数组中查找具体的某个数

要求：找到了就打印数字所在的下标，找不到则输出：找不到。*/

//int main() {
//	
//	int num = 0;
//	int arr[10] = { 10,20,22,25,59,66,75,89,97,125 };
//	int left = 0;
//	int right = (sizeof(arr) / sizeof(arr[0])) - 1;
//
//	printf("请输入你想查找的数字\n");
//	
//	scanf("%d ", &num);
//
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		
//		if (num == arr[mid]) {
//			printf("找到了，这个数在数组中的下标为：%d", mid);
//		}
//
//		if (num > arr[mid]) {
//			left = mid++;
//		}
//		else {
//			right = mid--;
//		}
//        
//	}
//
//	if (left > right) {
//		printf("在数组中没有找到这个数\n");
//	}
//
//
//	return 0;
//}

//
//int main() {
//	char x;
//	char y;
//	
//	scanf("%c%c", &x, &y);
//	printf("\n%c %c\n", x, y);
//	
//	return 0;
//
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;//根本运行不到这一行
//	}
//	printf("%d\n", a);
//	return 0;
//}