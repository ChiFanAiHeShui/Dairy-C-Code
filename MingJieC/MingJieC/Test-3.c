#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main() {
//
//	int no = 1;
//	int sum = 0;
//
//	for (int i = 0; i < 5; i++) {
//		sum += no;
//		no++;
//	}
//
//	printf("1到5的合计值是%d。\n", sum);
//
//	return (0);
//}


//int main() {
//
//	int num, tmp;
//	int array[10] = { 1,2,3,4,5,6,7,8,9,0 };
//
//	printf("请输入一个整数："); scanf("%d", &num);
//
//	tmp = num / 10;
//
//	for (int i = 0; i < tmp; i++) {
//		for (int j = 0; j < 10; j++) {
//			printf("%d", array[j]);
//		}
//	}
//
//	tmp = num % 10;
//	for (int i = 0; i < tmp; i++) {
//		printf("%d", array[i]);
//	}
//
//	return (0);
//}


//int main() {
//
//	int start, end, gap;
//
//	printf("开始数值（cm）："); scanf("%d",&start);
//	printf("结束数值（cm）："); scanf("%d",&end);
//	printf("间隔数值（cm）："); scanf("%d",&gap);
//
//	for (int i = start; i <= end; i += gap) {
//
//		printf("%dcm   %.2fkg\n", i, (i - 100) * 0.9);
//
//	}
//
//
//	return (0);
//}

//int main() {
//
//
//	int i, j;
//
//	printf("  |");
//	for (int i = 1; i <= 9; i++) {
//		printf("  %d", i);
//	}
//	printf("\n");
//	printf("-------------------------------\n");
//
//	for (i = 1; i <= 9; i++) {
//		printf("%d |", i);
//		for (j = 1; j <= 9; j++) {
//			printf("%3d", i * j);
//		}
//		
//		putchar('\n');
//	}
//
//	return (0);
//}

//int main() {
//
//	int i, j;
//	int width, height;
//
//	puts("让我们来画一个长方形。");
//	printf("一边："); scanf("%d", &height);
//	printf("另外一边："); scanf("%d", &width);
//
//	for (int i = 1; i <= height; i++) {
//		for (int j = 1; j <= width; j++) {
//			putchar('*');
//		}
//		putchar('\n');
//	}
//
//	return(0);
//}


////直角在左上方的三角形
//int main() {
//
//	int i, j, ln;
//	
//	printf("三角形有几层：");
//	scanf("%d", &ln);
//
//	for (i = 1; i <= ln; i++){
//
//		for (j = ln; j >= i; j--)
//			putchar('*');
//		printf("\n\n");
//		
//		
//	}
//	return (0);
//}


////直角在右上方的三角形
//int main() {
//
//	int i, j, ln;
//	 
//	printf("三角形有几层：");
//	scanf("%d", &ln);
//
//	for (i = 1; i <= ln; i++) {
//		for (j = 1; j <= i; j++)
//			putchar(' ');
//		for (j = ln; j >= i; j--) {
//			putchar('*');
//		}
//		printf("\n\n");
//
//	}
//
//	return (0);
//}

//int main() {
//
//	int i, j, ln;
//
//	printf("让我们来描绘一个金字塔。");
//	printf("金字塔有几层："); scanf("%d",&ln);
//
//	for (i = 1; i <= ln; i++) {
//
//		for (j = 0; j < ln - i; j++) {
//			putchar(' ');
//		}
//
//		for (j = 1; j <= ((2 * i) -1); j++) {
//			putchar('*');
//		}
//		printf("\n");
//	}
//
//	return (0);
//}