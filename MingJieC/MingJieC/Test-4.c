#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main() {
//
//	int i;
//	int vc[5];
//
//	for (i = 0; i < 5; i++) {
//		vc[i] = i;
//	}
//
//	for (i = 0; i < 5; i++) {
//		printf("vc[%d] = %d\n", i, vc[i]);
//	}
//
//	return (0);
//}


//int main() {
//
//	int i;
//	int vc[5];
//
//	int j = 0;
//	for(i = 5; i > 0; i--){
//		vc[j++] = i;
//	}
//
//	for (i = 0; i < 5; i++) {
//		printf("vc[%d] = %d\n", i, vc[i]);
//	}
//
//	return (0);
//}

//int main() {
//
//	int i;
//	int vc[5] = { 5,4,3,2,1 };
//
//	for (i = 0; i < 5; i++) {
//		printf("vc[%d] = %d\n", i, vc[i]);
//	}
//
//	return (0);
//}

//int main() {
//	
//	int i;
//	int va[5] = { 15,20,30 };
//	int vb[5];
//
//	int j = 4;
//	for (i = 0; i < 5; i++) {
//		vb[i] = va[j--];
//	}
//
//	puts(" va vb");
//	puts("-------");
//
//	for (i = 0; i < 5; i++) {
//		printf("%3d%3d\n", va[i], vb[i]);
//	}
//
//	return (0);
//}


//int main() {
//
//	int i;
//	int vx[8];
//
//	for (i = 0; i < 8; i++) {
//		printf("vx[%d]:", i);
//		scanf("%d", &vx[i]);
//	}
//
//	putchar('\n');
//
//	for (i = 0; i < 4; i++) {
//		int temp = vx[i];
//		vx[i] = vx[7 - i];
//		vx[7 - i] = temp;
//	}
//
//
//	for (i = 0; i < 8; i++) {
//		printf("vx[%d] = %d\n", i, vx[i]);
//	}
//
//
//    
//	return (0);
//}

/*

double a;
int b;

a = b = 1.5;

则赋值后，b结果为1，a结果为1.0；

*/

//int main() {
//
//	int arr1[2][3] = { 1,2,3,4,5,6 };
//	int arr2[3][2] = {1,5,5,3,8,1};
//	int arr3[100];//利用arr3数组来存储矩阵x和y的积。
//	int tmp = 0;
//
//	
//	for (int i = 0; i < 2; i++) {
//
//	
//		int sum1 = 0;
//		for (int j = 0; j < 3; j++) {
//			sum1 += arr1[i][j] * arr2[j][i];
//		}
//		arr3[tmp++] = sum1;
//
//		int sum2 = 0;
//		for (int j = 0; j < 3; j++) {
//			sum2 += arr1[i][j] * arr2[j][1];
//		}
//		arr3[tmp++] = sum2;
//	}
//
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", arr3[i]);
//	}
//
//	return (0);
//}