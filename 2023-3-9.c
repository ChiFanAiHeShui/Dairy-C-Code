#define _CRT_SECURE_NO_WARNINGS

/*
作业标题(684)
字符串逆序（递归实现）

作业内容
编写一个函数 reverse_string(char * string)（递归实现）

实现：将参数字符串中的字符反向排列，不是逆序打印。

要求：不能使用C函数库中的字符串操作函数。

比如:

char arr[] = "abcdef";


逆序之后数组的内容变成：fedcba
*/


/*
a bcdef
b cdef
c def
d ef
e f
f '\0'
*/


//void reverse_string(char* str){
//	//这是不用递归来实现字符串逆序排列的的逆序函数
//	int len = strlen(str);
//	
//	char* left = str;
//	char* right = (str + len - 1);
//	
//	while (left < right) {
//        char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		++left;
//		--right;
//	}
//}
//
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//
//	char arr[] = "Hello World!";
//	int i = 0;
//	
//	reverse_string(arr);
//
//	for (i = 0; i <strlen(arr); i++) {
//		printf("%c ", arr[i]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int my_strlen(char* arr) {//模拟实现strlen函数（用来求字符串的长度的）
//
//	int count = 0;
//	while (*arr != '\0') {
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//void reverse_string(char* str) {
//	//这是使用了递归的用来逆序排列字符串的函数
//	int length = my_strlen(str);
//	char tmp = *str;
//	*str = *(str + length - 1);
//	*(str + length - 1) = '\0';
//
//	if(my_strlen(str) > 1 ) {
//		
//		reverse_string(str + 1);
//
//	}
//	
//	*(str + length - 1) = tmp;
//
//
//}
//
//int main() {
//
//	char arr[] = "Hello World!";
//	
//	int i = 0;
//
//	reverse_string(arr);
//
//	for (i = 0; i < my_strlen(arr); i++) {
//
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}

/*
* 作业标题(683)
计算一个数的每位之和（递归实现）

作业内容
写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和

例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19

输入：1729，输出：19



1729 % 10  --->9
1729 /10   --->172

172 %10 ---> 2
172 / 10 --- > 17

17 %10 ---> 7
17 / 10  ---> 1

1%10 --->  1
1/ 10 ---> 0
*/


int DigitSum(int num) {


	while (num > 0) {

		return  (num % 10) + DigitSum(num / 10);

	}

	return 0;
}

#include <stdio.h>

int main() {

	int ret;
	int num;
	printf("请输入一个非负整数，结果将会输出它的每一位之和\n");
	scanf("%d", &num);

	ret = DigitSum(num);
	printf("这个数的每一位之和为：%d\n", ret);

	return 0;
}

/*

递归实现n的k次方

作业内容
编写一个函数实现n的k次方，使用递归实现。

12                             6
12 *12                         5
12 * 12 * 12                   4
12 * 12 * 12 * 12              3
12 * 12 * 12 * 12 * 12         2
12 * 12 * 12 * 12 * 12 * 12    1

*/

//int power(int n,int k) {
//	
//	int ret = 0;
//	if (k >= 1) {
//		return n * power(n, --k);
//	}
//	return 1;
//
//}
//
//#include <stdio.h>
//
//int main() {
//
//	/*int ret = 0;
//	ret = power(25, 5);
//	printf("%d", ret);*/
//
//	int ret = 0;
//	int n = 0;
//	int k = 0;
//	scanf("%d %d",&n,&k);
//	ret = power(n,k);
//	printf("%d 的  %d 次方 为： %d \n",n,k,ret);
//	
//	return 0;
//
//}


/*
作业标题(681)
计算斐波那契数

作业内容
递归和非递归分别实现求第n个斐波那契数

例如：

输入：5  输出：5

输入：10， 输出：55

输入：2， 输出：1


1 1 2 3 5 8 13 21 34 55.....

*/

//int Fib(int num) {//这个是不用递归来实现求第n个斐波那契数的函数
//	int i = 0;
//	int x = 1;
//	int y = 1;
//	int ret = 0;
//	int tmp = 0;
//	
//	if (num <= 2) {
//	
//		return 1;
//	}
//
//
//	for (int i = 0; i < (num - 2); i++) {
//
//		ret = (x + y);
//		y = x;
//		x = ret;
//	}
//
//	return ret;
//
//}
//
//#include <stdio.h>
//
//int main() {
//
//	int num = 0;
//	int ret = 0;
//	printf("请输入你想求的哪一个斐波那契数\n");
//	scanf("%d", &num);
//
//	ret  = Fib(num);
//	printf("这个斐波那契数为： %d ", ret);
//
//	return 0;
//}



//int Fib(int num) {//这个是使用了递归来计算第n个斐波那契数的函数
//	int i = 0;
//	int x = 1;
//	int y = 1;
//	int ret = 0;
//	int tmp = 0;
//	
//	if (num <= 2) {
//	
//		return 1;
//	}
//
//
//	for (int i = 0; i < (num - 2); i++) {
//
//		ret = (x + y);
//		y = x;
//		x = ret;
//	}
//
//	return Fib(num - 1) + Fib(num - 2);
//
//}
//
//#include <stdio.h>
//
//int main() {
//
//	int num = 0;
//	int ret = 0;
//	printf("请输入你想求的哪一个斐波那契数\n");
//	scanf("%d", &num);
//
//	ret  = Fib(num);
//	printf("这个斐波那契数为： %d ", ret);
//
//	return 0;
//}