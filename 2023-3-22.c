#define _CRT_SECURE_NO_WARNINGS

/*

喝汽水问题

作业内容
喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。

   汽水: 20  soda

   空瓶：20  bottle

   总共的饮料数量就是刚开始花钱买的汽水
   然后加上用这些刚买来汽水的空瓶换成的汽水总和就行。



空瓶换汽水：

 20个空瓶       10瓶汽水

 10个空瓶       5瓶汽水

 5个空瓶        2瓶汽水和一个空瓶

 3个空瓶         1瓶汽水和1个空瓶

 2个空瓶          1瓶汽水

 1个空瓶           无汽水了


        当空瓶只剩下一个时，循环停止。

20 + （空瓶换来的汽水）
*/
//#include <stdio.h>
//int main() {
//
//    int money = 20;
//    int soda = money;
//    int bottle = soda;
//    int sum = 0;
//
//    while (bottle != 1) {
//
//        if (0 == (bottle % 2)) {
//            bottle = bottle / 2;
//            sum += bottle;
//        }
//        else {
//            sum += bottle / 2;
//            bottle = (bottle / 2) + (bottle % 2);
//        }
//
//    }
//
//    soda += sum;
//
//    printf("总共可以喝到：%d 瓶饮料。", soda);
//
//    return 0;
//}


//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//
//	scanf("%d", &money);
//
//	//方法2
//	if (money <= 0)
//	{
//		total = 0;
//	}
//	else
//	{
//		total = money * 2 - 1;
//	}
//	printf("total = %d\n", total);
//
//
//	return 0;
//}

/*
模拟实现库函数strlen
*/

//#include <stdio.h>
//
//int my_strlen(char* arr) {
//
//    int count = 0;
//    while (*arr != '\0') {
//        arr++;
//        count++;
//    }
//
//    return count;
//
//}
//
//int main() {
//
//    char arr[] = "Hello World!";
//    int ret = 0;
//
//    ret = my_strlen(arr);
//    printf("这个字符串的长度是：%d",ret);
//
//    return 0;
//}


/*
模拟实现库函数strcpy

两种情况：
   1.当两个字符串的长度相等的时候
	   最简单，直接将每个字符都相互交换位置即可

   2.当两个字符串的长度不相等的时候
	  （1）源字符串的长度小于被拷贝的字符串的长度
			  afdaf
			  dsfadfadfa

	  （2）源字符串的长度大于被拷贝的字符串的长度

			afdafdfadfas
			adfa
*/

//#include <stdio.h>
//
//int my_strlen(char* arr) {
//
//    int count = 0;
//    while (*arr != '\0') {
//        arr++;
//        count++;
//    }
//
//    return count;
//}
//
//void my_strcpy(char* arr2,const char* arr1) {
//
//	int len1 = my_strlen(arr1);//求源字符串的长度
//	int len2 = my_strlen(arr2);//求被拷贝的字符串的长度
//
//	if (len1 <= len2) {//当源字符串的长度小于或者等于需要被拷贝的字符串的长度
//		int i = 0;
//		for (i = 0; i < len1; i++) {
//			arr2[i] = arr1[i];
//		}
//	}
//	else {//源字符串的长度大于需要被拷贝的字符串的长度
//		int i = 0;
//		for (i = 0; i < len2; i++) {
//			arr2[i] = arr1[i];
//		}
//	}
//}
//
//
//int main() {
//	char arr1[] = "asfkd";
//	char arr2[] = "afsg";
//
//
//
//	my_strcpy(arr2, arr1);
//
//	printf("%s\n", arr2);
//
//    return 0;
//}



/*
调整数组使奇数全部都位于偶数前面。

题目：

输入一个整数数组，实现一个函数，

来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，

所有偶数位于数组的后半部分。

*/

//#include <stdio.h>
//
//void order_odd_even(int arr[] ,int len) {
//
//	int left = 0;
//	int right = len - 1;
//	while (left < right) {
//
//		if (arr[left] % 2 == 0) {
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			right--;
//		}
//		else {
//			left++;
//		}
//	}
//
//}
//
//
//int main() {
//
//	int i = 0;
//	int len = 0;
//	int arr[] = { 25,25,65,58,45,22,35,38,64,5552,42,355 };
//	len = sizeof(arr) / sizeof(arr[0]);
//
//	order_odd_even(arr,len);
//
//
//	for (i = 0; i < len; i++) {
//		printf("%d ", arr[i]);
//	}
// 
//
//	return 0;
//}

