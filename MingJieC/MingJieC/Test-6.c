#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void alter(int num) {
//	while (num-- > 0) {
//		printf("\a");
//	}
//}
//
//int main() {
//
//	int num;
//
//	scanf("%d", &num);
//	alter(num);
//
//	return (0);
//}

//void hello() {
//	
//	printf("您好！！");
//	printf("\n");
//
//}
//
//int main() {
//
//	hello();
//
//	return (0);
//}

//void rev_intary(int vc[], int no) {
//
//
//	int min = vc[0];
//
//	for (int i = 1; i < no; i++) {
//
//		if (min > vc[i]) {
//			min = vc[i];
//		}
//	}
//
//	printf("%d", min);
//
//}
//
//int main() {
//
//	int array[10] = { 1,5,6,4,2,3,44,26,4 };
//
//	rev_intary(array,9);
//
//	return (0);
//}



////倒序输出一个数组
//void rev_intary(int vc[],int no) {
//
//	for (int i = 0; i < no - 1; i++) {
//		for (int j = 0; j < no - i -1; j++) {
//			if (vc[j] < vc[j + 1]) {
//				int tmp;
//				tmp = vc[j];
//				vc[j] = vc[j + 1];
//				vc[j + 1] = tmp;
//			}
//		}
//	}
//
//	for (int i = 0; i < no; i++) {
//		printf("%d ", vc[i]);
//	}
//
//}
//
//int main() {
//
//	int array[] = { 125,152,354,6223,11,2,356,33 };
//
//	int len = sizeof(array) / sizeof(array[0]);
//
//	rev_intary(array,len);//倒序输出array数组
//
//	return (0);
//}


////倒序输出一个数组
//void rev_intary(int vc[],int no) {
//
//	for (int i = 0; i < no - 1; i++) {
//		for (int j = 0; j < no - i -1; j++) {
//			if (vc[j] < vc[j + 1]) {
//				int tmp;
//				tmp = vc[j];
//				vc[j] = vc[j + 1];
//				vc[j + 1] = tmp;
//			}
//		}
//	}
//
//}
//
//void intary_rcpy(int v1[], const int v2[], int no) {
//
//
//	//将不可以改变数据的v2数组复制一份到v1数值中去
//	for (int i = 0; i < no; i++) {
//		v1[i] = v2[i];
//	}
//
//	//再调用倒序排序数组函数对v1进行倒序排列
//	rev_intary(v1, no);
//
//}
//
//int main() {
//	int array1[] = { 1,2,5,355,654,256,344,3 };
//	int array2[20];
//
//	int len1 = sizeof(array1) / sizeof(array1[0]);
//	 
//	intary_rcpy(array2,array1,len1);
//
//
//	return (0);
//}



//void mul(const int ma[2][3], const int mb[3][2], int mc[2][2]) {
//	for (int i = 0; i < 2; i++) {//遍历x矩阵的行
//
//		
//		for (int j = 0; j < 2; j++) {
//
//			
//			int tmp = 0;
//			for (int z = 0; z < 3; z++) {
//				tmp += ma[i][z] * mb[z][j];
//			}
//			mc[i][j] = tmp;
//		}
//	}
//
//	//遍历输出x和y矩阵的乘积
//	for (int i = 0; i < 2; i++) {
//
//		for (int j = 0; j < 2; j++) {
//			printf("%3d ", mc[i][j]);
//		}
//		putchar('\n');
//	}
//}
//
//int main() {
//
//	int x[2][3] = { {1,2,3 },{4, 5, 6} };
//    int y[3][2] = { {1,5 },{5, 3}, {8, 1} };
//	int Mul[2][2];
//	
//	
//	mul(x, y, Mul);
//
//	return (0);
//}

//int main() {
//
//	int Chinese, Math, English;
//	int max = 0, grade, tmp = 1;
//	float sum;
//
//	int array[5][3] = { 0 };
//
//	for (int i = 0; i < 5; i++) {
//
//		printf("请输入学生%d的三门科目的成绩：", tmp++);
//
//		for (int j = 0; j < 3; j++) {
//			scanf("%d", &grade);
//			array[i][j] = grade;
//		}
//
//
//	}
//
//	printf("\n");
//
//	int maxarray[5];//存储每名学生3个科目的最高分的数组
//	for (int i = 0; i < 5; i++) {
//
//		max = 0;
//		for (int j = 0; j < 3; j++) {
//
//			if (max < array[i][j]) {
//				max = array[i][j];
//			}
//
//		}
//		maxarray[i] = max;
//	}
//
//
//
//	tmp = 0;
//	for (int i = 1; i <= 5; i++) {
//		printf("学生%d三个科目中最高分为%d\n", i, maxarray[tmp++]);
//	}
//
//	printf("\n");
//
//	int revarray[5];//存储每一名学生的三个科目的平均分的数组
//	for (int i = 0; i < 5; i++) {
//
//		sum = 0;
//		for (int j = 0; j < 3; j++) {
//			sum += array[i][j];
//		}
//		revarray[i] = (sum / 3);
//	}
//
//	tmp = 0;
//	for (int i = 1; i <= 5; i++) {
//		printf("学生%d三个科目的平均分为%d\n", i, revarray[tmp++]);
//	}
//
//
//
//
//	/*
//     //用来打印存储的二维数组的数据是否正确	
//	for (int i = 0; i < 5; i++) {
//	
//		for (int j = 0; j < 3; j++) {
//			printf("%d ", array[i][j]);
//		}
//		printf("\n");
//	}*/
//
//	return (0);
//}
