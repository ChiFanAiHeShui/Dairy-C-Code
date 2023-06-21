#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main() {
//
//	int num;
//
//	do {
//
//		printf("请输入一个非负整数：");
//		scanf("%d", &num);
//		if (num < 0) {
//			printf("请不要输入负整数");
//		}
//
//	} while (num < 0);
//	
//	int num2 = num;
//
//	printf("%d逆向显示的结果是：",num2);
//
//	do {
//		
//		printf("%d", num % 10);
//		num /= 10;
//
//	} while (num > 0);
//	puts("。");
//
//	return 0;
//}


//int main() {
//
//	int num;
//
//	do {
//
//		printf("请输入一个非负整数：");
//		scanf("%d", &num);
//		if (num < 0) {
//			printf("请不要输入负整数");
//		}
//
//	} while (num < 0);
//	
//	printf("%d的位数是：", num);
//	int sum = 0;
//
//	do {
//		
//		
//		num /= 10;
//		sum += 1;
//
//	} while (num > 0);
//
//	printf("%d", sum);
//	puts("\n");
//
//	return 0;
//}


//int main() {
//
//	
//	int num1, num2;
//
//	printf("请输入两个整数：\n");
//
//	printf("整数1：");
//	scanf("%d", &num1);
//
//	printf("整数2：");
//	scanf("%d", &num2);
//	
//	int tmp = 0;//用来遍历两个数之间的数
//
//	//首先先假设num1大于num2
//	int max = num1;
//	int min = num2;
//
//	//判断假设是否成立，如不成立，则将max和min的值交换一下即可。
//	//并同时将两个数里面的小的那个数赋值给tmp，方便下面的遍历求和
//	if (num1 > num2) {
//		tmp = min;
//	}
//	else {
//		max = num2;
//		min = num1;
//		tmp = min;
//	}
//	
//	int sum = 0;//用来存储两个数之间的所有整数和
//
//	//遍历求和
//	do {
//
//		sum += tmp;
//		tmp += 1;
//		
//
//	} while (tmp <= max );
//
//	printf("大于等于%d小于等于%d的所有整数和是：%d", min, max, sum);
//	return 0;
//}
//
//int main() {
//
//
//	return 0;
//}

//int main() {
//
//	int no;
//	printf("请输入一个整数：");
//	scanf("%d", &no);
//
//	int tag = 0;//判断no是否为负数
//
//	while (no >= 0) {//如果不为负数，那么tag的值一定大于或等于1.
//		
//		tag++;
//		printf("%d", no);
//		no--;
//	}//no如果事先大于或者等于0的话，那么当它从循环出来的时候，它的值为-1.
//
//	if (tag >= 1) {
//		putchar("\n");
//	}
//	else {
//		;
//	}
//
//
//	return 0;
//}