#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//int main() {//求100-200之间的素数
//
//	int i = 0;
//	for (int i = 101; i < 201; i++) {
//		int j = 0;
//		for ( j = 2; j < i; j++) {
//			if (i % j == 0) {
//				break;
//			}
//		}
//
//		if (j == i) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


/*①能够被4整除但不被100整除的是闰年；

②能够被100整除但不被400整除的是平年；

③能够被400整除但不被3200整除的是闰年；

④能够被3200整除但不被172800整除的是平年；

⑤能被172800整除的一律是闰年。*/

//求闰年
//int  main() {
//	int i = 0;
//	for (int i = 1000; i < 2001; i++) {
//		if (i % 4 == 0 && i % 100 != 0) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//求1/1-1/2+1/3-1/4...-1/100的和

//int main() {
//	int i = 0;
//	float sum = 0;
//	float flag = 1;
//	for (i = 1; i < 101; i++) {
//		sum += flag / i;
//		flag *= -1;
//	}
//	printf("%lf", sum);
//	return 0;
//}