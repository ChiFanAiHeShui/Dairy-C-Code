#define _CRT_SECURE_NO_WARNINGS

/*实现一个函数，判断一个数是不是素数。
利用上面实现的函数打印100到200之间的素数。*/

#include <stdio.h>
#include<math.h>
#include <string.h>

//int is_prime(int num) {
//	
//	int j = 0;
//	//当一个数与他本身的一半的数相除后余数不为0（包括自身），那么，这个数就为素数。
//	for (j = 2; j <= sqrt(num); j++) {
//		
//		if ((num % j) == 0) {
//			return 0;
//		}
//	}
//	
//	return 1 ;
//
//}
//
//int main() {
//	
//	int num = 0;
//	int i = 0;
//
//	printf("请输入一个整数\n");
//	scanf("%d", &num);
//	
//	if (1 == (is_prime(num))){
//		printf("这个数为素数\n");
//	}
//	else {
//		printf("这个数不是素数\n");
//	}
//	
//	printf("--------------------------------------\n");
//	printf("以下输出的是100~200之间的素数\n");
//	
//	for (i = 100; i <= 200; i++) {
//		
//		if (1 == (is_prime(i))) {
//			printf("%d ",i);
//		}
//
//	}
//
//	return 0;
//}

/*实现函数判断year是不是润年。*/

//int is_leap_year(int year) {
//
//	return ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));
//
//}
//
//int main() {
//
//	int year = 0;
//	printf("请输入一个年份\n");
//	scanf("%d", &year);
//
//	if (1 == (is_leap_year(year))) {
//		
//		printf("这一年是闰年\n");
//
//	}
//	else {
//		
//		printf("这一年不是闰年\n");
//
//	}
//	
//	return 0;
//}

/*实现一个函数来交换两个整数的内容。*/

//void swap(int* a, int* b) {
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//int main() {
//
//	int i = 3;
//	int j = 5;
//	printf("交换前 %d %d \n", i, j);
//
//	swap(&i, &j);
//
//	printf("交换后 %d %d \n", i, j);
//
//	return 0;
//}

/*实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定

如：输入9，输出9*9口诀表，输出12，输出12*12的乘法口诀表。*/

//int main() {
//
//	int j = 0;
//	int i = 0;
//	int num = 0;
//	
//	printf("请输入一个整数\n");
//	scanf("%d", &num);
//
//	for (i = 1; i <= num; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("%d * %d = %-d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

/*猜密码小游戏，最多猜三次*/

//int main() {
//
//	char arr1[20] = { 0 };
//	char arr2[20] = "World1234";
//	int i = 0;
//	
//
//	while (i < 3) {
//		
//      printf("请输入密码:>\n");
//		scanf("%s", arr1);
//
//	
//	
//		if (strcmp(arr1, arr2) == 0) {
//			printf("恭喜你，密码输入正确\n");
//			break;
//		}
//		else {
//			printf("您的密码输入错误或者格式错误\n");
//		}
//		i++;
//	
//	}
//	
//
//	return 0;
//}