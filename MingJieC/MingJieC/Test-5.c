#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main() {
//
//	//���������հ�
//	
//	//�ص㣺
//	//1.ż��������Ϊ������2���⣩
//	//2.�޷���С�ڻ����i��ƽ������������������ô���i���Ǹ�������
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
//	printf("��������������:��");
//	scanf("%d %d", &x, &y);
//
//	printf("�������н�С����Ϊ��%d\n", min = minof(x, y));
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
//	printf("������������������");
//
//	scanf("%d %d %d", &x, &y, &z);
//	
//	printf("������������С����Ϊ��%d\n", min3(x, y, z));
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
//	printf("������һ����������");
//	scanf("%d", &num);
//
//	printf("�������������Ϊ��%d\n", cube(num));
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
//	printf("������һ����������");
//	scanf("%d", &num);
//
//	printf("����������Ĵη�Ϊ��%d\n", power4(num));
//
//	return (0);
//}

