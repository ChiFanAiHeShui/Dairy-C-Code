#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*利用递归，
将输入的一个无符号整数按顺序将它的每一位打印输出*/
//void  print(int num) {
//
//	if (num > 9) {
//		
//		print(num / 10);
//
//	}
//	num = num % 10;
//	printf("%d ", num);
//
//}
//
//
//int main() {
//
//	int num = 0;
//	scanf("%d", &num);
//    
//    print(num);
//
//	return 0;
//}



/*求n的阶乘，用递归和非递归实现*/

//int fac(int num) {
//
//	if (1 == num) {
//		return 1;
//	}
//	else {
//		return num * fac(num - 1);
//	}
//
//}
//
//int main() {
//
//	int num = 0;
//	scanf("%d", &num);
//	int ret = 0;
//	
//	ret = fac(num);
//
//	printf("%d \n", ret);
//
//	return 0;
//}



//int main() {
//
//	int i = 0;
//	int num = 0;
//	scanf("%d", &num);
//	int ret = 1;
//
//	for (i = 1; i <= num; i++) {
//
//		ret = ret * i;
//
//	}
//
//	printf("这个数的阶乘是：%d \n", ret);
//
//	return 0;
//}


/*
利用递归和非递归实现strlen函数
*/

//int str_length(char* ps) {
//	
//	int count = 0;
//	while ((*ps) != '\0') {
//		ps++;
//		count++;
//	}
//	return count;
//}
//
//int main() {
//
//	char arr[] = "Hello World!";
//	int length ;
//
//    length = str_length(arr);
//
//	printf("这个字符串的长度为：%d \n", length);
//
//	return 0;
//}



//int str_length(char* ps) {
//	if ((*ps) == '\0') {
//		return 0;
//	}
//	else {//注意，这里的str_length()中的ps必须为前置++，不然会出现死循环；
//		return 1 + str_length(++ps);
//	}
//
//}
//
//int main() {
//
//	char arr[] = "Welcome to China!!!";
//	int ret;
//
//	ret = str_length(arr);
//	printf("这个字符串的长度为:%d \n", ret);
//
//	return 0;
//}