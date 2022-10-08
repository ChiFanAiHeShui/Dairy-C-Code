#define _CRT_SECURE_NO_WARNINGS
int main() {//打印九九乘法表。
	int i = 0;
	for (int i = 1; i < 10; i++) {
		int j = 0;
		for (int j = 1; j <= i; j++) {
			printf("%d*%d=%-2d ", i, j, (i * j));
		}
		printf("\n");
	}

	return 0;
}
//int main() {//找出一个整型数组中的最大的数
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int max = arr[0];//这里不要给max赋值为0。因为加入数组中全为负数的话，那最后输出结果只能是0。
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz;i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	 }
//	printf("max = %d\n",max);
//
//	return 0;
//}

//计算1 - 1/2 + 1/3 - 1/4 .........
//int main() {
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (int i = 1; i <= 100; i++) {
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n",sum);
//	return 0;
//}



//计算100-200之间的素数
//#include <stdio.h>
//#include <math.h>
//int main() {
//	int i = 0;
//	for (int i = 100; i <= 200; i++) {
//		int j = 0;
//		for (int j = 2; j <= sqrt(i);j++ ) {
//			if (i % j ==0) {
//				break;
//			}
//		}
//		if (j > sqrt(i)) {
//			printf("%d", i);
//		}
//	}
//	return 0;
//}

//
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入您想排序的三个数\n");
//	scanf("%d %d %d",&a,&b,&c);
//
//	if (a < b) {//如果a 小于 b ，则把a与b的值互换。
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	if ( a < c ) {//如果a 小于 c，则把a与c的值互换。
//		int temp = a;
//		a = c;
//		c = temp;
//	}//到这里为止，a一定为最大值
//	if (b < c ) {//判断b与c的大小，如果b小于c，则把他们的值互换，使之最后可以按照a，b，c直接输出。
//		int temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d",a,b,c);
//	return 0;
//}

//打印出1000到2000年之间的闰年。
//int main() {
//	int year = 0;
//	for (int year = 1000; year <= 2000; year++) {//产生1000-2000年之间的年份
//		if (year % 4 == 0 && year % 100 != 0) {// 当年份与4  或  100 或 400取模时为0，则这个年份为闰年。
//
//			printf("%d  ", year);
//		}
//	  if ( year % 400 == 0) {
//			printf("%d  ",year);
//		}
//	
//	}
//	return 0;
//}