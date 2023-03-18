#define _CRT_SECURE_NO_WARNINGS

/*
编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？

输入例子:

1999 2299

输出例子:7
*/
//#include <stdio.h>
//int main() {
//
//	int num1 = 0;
//	int num2 = 0;
//	int count = 0;
//	int i = 0;
//	scanf("%d%d", &num1, &num2);
//	int num3 = (num1 ^ num2);
//	for (i = 0; i < 32; i++) {
//		//注意，这里不能用左移。因为如果是左移的话，那么count的值就恒为0了
//		if ((1 == ((num3 >> i) & 1)) ) {
//			++count;
//		}
//	}
//
//	printf("%d", count);
//
//	return 0;
//}

/*获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列*/

//#include <stdio.h>
//
//int main() {
//
//	int i = 0;
//	int num = 0;
//	printf("请输入一个整数，下面会分别打印这个数的二进制的奇数位和偶数位\n");
//	scanf("%d", &num);
//	
//	for (i = 1; i < 32; i+=2) {
//		printf("%d ",((num >> i) & 1));
//	}
//	
//	printf("\n");
//
//	for (i = 0; i < 32; i += 2) {
//		printf("%d ", ((num >> i) & 1));
//	}
//
//
//	return 0;
//}

/*统计二进制中1的个数

作业内容
写一个函数返回参数二进制中 1 的个数。

比如： 15    0000 1111    4 个 1

*/

//#include <stdio.h>
//
//int main() {
//
//	int num = 0;
//	int i = 0;
//	int count = 0;
//	
//	scanf("%d", &num);
//	
//
//	for (i = 0; i < 32; i++) {
//
//		if (((num >> i) & 1) == 1 ) {
//			count++;
//		}
//
//	}
//
//	printf("这个数中二进制中1的个数为：%d", count);
//	
//
//	return 0;
//}


/*

作业标题(704)
交换两个变量（不创建临时变量）

作业内容
不允许创建临时变量，交换两个整数的内容


011   3 num1
110   5 num2
101     

011   num1
101   
110   num2

101   
110   num2
011   num1
*/
//#include <stdio.h>
//
//int main() {
//
//	int num1 = 25;
//	int num2 = 30;
//
//	num1 = num1 ^ num2;
//	num2 = num1 ^ num2;
//	num1 = num2 ^ num1;
//
//	
//	printf("%d %d ", num1, num2);
//	return 0;
//}