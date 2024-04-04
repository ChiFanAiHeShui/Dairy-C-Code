#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main() {
//
//	//求质数最终版
//	
//	//重点：
//	//1.偶数不可能为质数（2除外）
//	//2.无法被小于或等于i的平方根的质数整除，那么这个i就是个质数。
// 
//	int i,j;
//	int prime[500];
//
//	int ptr = 0;
//	prime[ptr++] = 2;
//	prime[ptr++] = 3;
//
//	for (i = 5; i < 1000; i += 2) {
//		
//		int flag = 0;
//		for (j = 1; (prime[j] * prime[j]) <= i; j++) {
//
//			if ((i % prime[j]) == 0){
//				flag = 1;
//				break;
//			}
//
//		}
//        
//		if (0 == flag ) {
//			prime[ptr++] = i;
//		}
//	}
//
//	for (i = 0; i < ptr; i++) {
//		printf("%d ", prime[i]);
//	}
//
//	return (0);
//}



//int minof(int x, int y) {
//
//	return ((x > y) ? y : x);
//
//}
//
//int main() {
//
//	int x, y,min;
//	
//	printf("请输入两个整数:》");
//	scanf("%d %d", &x, &y);
//
//	printf("两个数中较小的数为：%d\n", min = minof(x, y));
//
//	return (0);
//}


//int min3(int x, int y, int z) {
//	 
//	int min = x;
//
//	if (x > y) {
//		min = y;
//	 }
//
//	if (x > z) {
//		min = z;
//	}
//    
//	return min;
//}
//
//int main() {
//
//	int x, y, z;
//
//	printf("请输入三个整数：》");
//
//	scanf("%d %d %d", &x, &y, &z);
//	
//	printf("这三个数中最小的数为：%d\n", min3(x, y, z));
//
//	return (0);
//}


//int cube(int num) {
//	return (num * num * num);
//}
//
//int main() {
//
//	int num;
//	printf("请输入一个整数：》");
//	scanf("%d", &num);
//
//	printf("这个整数的立方为：%d\n", cube(num));
//
//	return (0);
//}


//int sqr(int x) {
//	return (x * x);
//}
//
//int  power4(int x) {
//	return (sqr(x) * sqr(x));
//}
//
//int main() {
//
//	int num;
//	printf("请输入一个整数：》");
//	scanf("%d", &num);
//
//	printf("这个整数的四次方为：%d\n", power4(num));
//
//	return (0);
//}

