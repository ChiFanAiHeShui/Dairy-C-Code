#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int Add(int x, int y ) {
//	return x + y;
//}
//
//void test(int (*p)(int, int)) {
//
//	printf("test\n");
//	int result = p(2, 5);
//	printf("%d\n", result);
//}
//
//int main() {
//	
//	test(Add);
//	return 0;
//
//}


//int main() {
//
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//����һ������ָ�룬����ȡ������ĵ�ַ
//
//	int (*pf)(int, int);//����ָ��
//	int (*pfArr[4]) (int, int);//pfArr��һ������ - ����ָ�������
//	//ppfArr��һ��ָ����ָ�������ָ��
//	int (*(*ppfArr)[4])(int, int) = &pfArr;
//
//	//ppfArr ��һ������ָ�룬ָ��ָ����������ĸ�Ԫ��
//	//ָ��������ÿ��Ԫ�ص�������һ������ָ��  int(*) (int,int)
//
//	return 0;
//}

//int Add(int x, int y) {
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int Sub(int x, int y) {
//	int z = 0;
//	z = x - y;
//	return z;
//}
//
//int Mul(int x, int y) {
//	int z = 0;
//	z = x * y;
//	return z;
//}
//
//int Div(int x, int y) {
//	int z = 0;
//	z = x / y;
//	return z;
//}
//
//void Calc(int (*pf)(int, int)) {
//
//	int x = 0;
//	int y = 0;
//	printf("����������������\n");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//
//}
//
//
//void menu() {
//
//	printf("******* 1.Add       2.Sub     *********\n");
//	printf("******* 3.Mul       4.Div     *********\n");
//	printf("*******       0.exit          *********\n");
//
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	do {
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		
//		switch (input) {
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("����������");
//			break;
//		}
//	} while (input);
//
//	return 0;
//
//}
//int main() {
//
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	
//	//pfArr��һ������ָ�����飬����ת�Ʊ�
//	int(*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	
//	do {
//		menu();
//		printf("��ѡ��>\n");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4) {
//			printf("����������������:>\n");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0) {
//			printf("�˳�\n");
//		}
//		else {
//		printf("ѡ�����\n");
//	    }
//	} while (input);
//	return 0;
//}

//int main() {
//
	//int x = 0;
	//int y = 0;
	//int input = 0;
	//do {
	//	menu();
	//	printf("��ѡ��:>");
	//	scanf("%d", &input);
	//	switch (input) {
	//	case 1:
	//		printf("����������������\n");
	//		scanf("%d%d", &x, &y);
	//		printf("%d\n", Add(x, y));
	//		break;
	//	case 2:
	//		printf("����������������\n");
	//		scanf("%d%d", &x, &y);
	//		printf("%d\n", Sub(x, y));
	//		break;
	//	case 3:
	//		printf("����������������\n");
	//		scanf("%d%d", &x, &y);
	//		printf("%d\n", Mul(x, y));
	//		break;
	//	case 4:
	//		printf("����������������\n");
	//		scanf("%d%d", &x, &y);
	//		printf("%d\n", Div(x, y));
	//		break;
	//	case 0:
	//		printf("�˳�\n");
	//		break;
	//	default:
	//		printf("����������");
	//		break;
	//	}
	//} while (input);
//	return 0;
//}