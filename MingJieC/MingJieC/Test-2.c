#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main() {
//
//	int no;
//	puts("请输入一个整数。");
//	scanf("%d", &no);
//
//	switch (no % 2) {
//
//	case 1: puts("该整数是奇数。"); break;
//
//	case 0: puts("该整数是偶数。"); break;
//
//	}
//
//	return (0);
//}


//int main() {
//
//	int month;
//	
//	puts("请输入月份：");
//
//	scanf("%d", &month);
//
//	switch (month) {
//	case 1: puts("是冬天"); break;
//
//	case 2: puts("是冬天"); break;
//
//	case 3: puts("是春天"); break;
//
//	case 4: puts("是春天"); break;
//
//	case 5: puts("是春天"); break;
//
//	case 6: puts("是夏天"); break;
//
//	case 7: puts("是夏天"); break;
//
//	case 8: puts("是夏天"); break;
//
//	case 9: puts("是秋天"); break;
//
//	case 10: puts("是秋天"); break;
//
//	case 11: puts("是秋天"); break;
//
//	case 12: puts("是冬天"); break;
//
//	default:puts("输入的月份不存在！");
//	}
//
//	return (0);
//}


//int main() {
//	
//	int num;
//
//	do {
//		puts("请输入一个非负整数：\n");
//		scanf("%d", &num);
//		if (num < 0) {
//			puts("请不要输入负整数。\n");
//		}
//	} while (num < 0);
//
//	printf("%d逆向显示的结果是：", num);
//
//	do {
//		printf("%d", num % 10);
//		num = num / 10;
//	} while (num > 0);
//	puts("。");
//
//	return (0);
//}

//int main() {
//
//	int num;
//	int dig;
//	int tmp;
//
//	do {
//		printf("请输入一个非负整数：\n");
//		scanf("%d", &num);
//     	if (num < 0) {
//			puts("\a请不要输入负整数！\n");
//		}
//	} while (num < 0);
//
//	dig = 0;
//	tmp = num;
//
//	do {
//		num = num / 10;
//		dig = dig + 1;
//	} while (num > 0);
//
//	printf("%d整数的位数是%d。\n", tmp, dig);
//
//
//	return (0);
//}

//int main() {
//
//	int num1 =0, num2, min,max,sum,tmp;
//
//	puts("请输入两个整数。");
//	printf("整数1："); scanf("%d", &num1);
//	printf("整数2："); scanf("%d", &num2);
//
//	min = (num1 > num2) ? num2 : num1;
//	max = (num1 > num2) ? num1 : num2;
//	sum = 0;
//	tmp = min;
//
//	do{
//		sum += min;
//		min += 1;
//
//	} while (min <= max);
//
//	printf("大于等于%d小于等于%d的所有整数的和是%d。\n", tmp, max, sum);
//
//	return (0);
//}

//int main() {
//
//	int num;
//
//	do {
//		printf("请输入一个非负整数：");
//		scanf("%d", &num);
//		if (num < 0) {
//			puts("请不要输入负整数！");
//		}
//	} while (num < 0);
//
//	printf("该整数逆向显示的结果是：");
//	do {
//		printf("%d", num % 10);
//		num /= 10;
//	} while (num > 0);
//
//	puts("。");
//
//	return (0);
//}

//int main() {
//
//	int num;
//	int dig;
//
//	do{
//
//		printf("请输入一个非负整数：");
//		scanf("%d", &num);
//		if (num < 0) {
//			puts("\a请不要输入负整数。");
//		}
//
//	}while (num < 0);
//
//		dig = 0;
//		do {
//			num /= 10;
//			dig++;
//		} while (num > 0);
//
//		printf("该整数的位数是%d。\n", dig);
//
//
//	return (0);
//}

//int main() {
//
//	int no;
//
//	printf("请输入一个整数：");
//	scanf("%d", &no);
//
//	while (no >= 0) {
//		printf("%d", no);
//		no--;
//	}
//
//	if (no >= 0) {
//		putchar("\n");
//	}
//	return (0);
//}

//int main() {
//
//	int no;
//	
//	printf("请输入一个正整数：");
//	scanf("%d", &no);
//
//	while (no >= 1) {
//		printf("%d ", no--);
//	}
//	putchar('\n');
//
//	return (0);
//}

//int main() {
//
//	int i, no;
//	
//	do {
//		printf("请输入一个正整数：");
//		scanf("%d", &no);
//	} while (no < 0);
//
//	i = 1;
//	while (i <= no) {
//		printf("%d ", i++);
//	}
//	putchar('\n');
//
//	return (0);
//}

//int main() {
//
//	int no,i;
//
//	printf("请输入一个整数：");
//	scanf("%d", &no);
//
//	i = 2;
//	while (i < no) {
//		printf("%d ", i);
//		i += 2;
//	}
//
//	return (0);
//}

//int main() {
//	
//	int no, i,j;
//
//	printf("请输入一个整数：");
//	scanf("%d", &no);
//
//	i = 2;
//	j = 2;
//	while (i < no) {
//		printf("%d ", i);
//		i *= j;
//	}
//
//	return (0);
//}



int main() {

	int no;

	printf("请输入一个整数：");
	scanf("%d", &no);

	while (no-- > 0) {
		printf("*\n");
	}

	return (0);
}