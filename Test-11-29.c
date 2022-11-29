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
//	int(*p)[10] = &arr;//这是一个数组指针，用来取出数组的地址
//
//	int (*pf)(int, int);//函数指针
//	int (*pfArr[4]) (int, int);//pfArr是一个数组 - 函数指针的数组
//	//ppfArr是一个指向函数指针数组的指针
//	int (*(*ppfArr)[4])(int, int) = &pfArr;
//
//	//ppfArr 是一个数组指针，指针指向的数组有四个元素
//	//指向的数组的每个元素的类型是一个函数指针  int(*) (int,int)
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
//	printf("请输入两个操作数\n");
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
//		printf("请选择:>");
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
//			printf("退出\n");
//			break;
//		default:
//			printf("您输入有误");
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
//	//pfArr是一个函数指针数组，用来转移表。
//	int(*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	
//	do {
//		menu();
//		printf("请选择：>\n");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4) {
//			printf("请输入两个操作数:>\n");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0) {
//			printf("退出\n");
//		}
//		else {
//		printf("选择错误！\n");
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
	//	printf("请选择:>");
	//	scanf("%d", &input);
	//	switch (input) {
	//	case 1:
	//		printf("请输入两个操作数\n");
	//		scanf("%d%d", &x, &y);
	//		printf("%d\n", Add(x, y));
	//		break;
	//	case 2:
	//		printf("请输入两个操作数\n");
	//		scanf("%d%d", &x, &y);
	//		printf("%d\n", Sub(x, y));
	//		break;
	//	case 3:
	//		printf("请输入两个操作数\n");
	//		scanf("%d%d", &x, &y);
	//		printf("%d\n", Mul(x, y));
	//		break;
	//	case 4:
	//		printf("请输入两个操作数\n");
	//		scanf("%d%d", &x, &y);
	//		printf("%d\n", Div(x, y));
	//		break;
	//	case 0:
	//		printf("退出\n");
	//		break;
	//	default:
	//		printf("您输入有误");
	//		break;
	//	}
	//} while (input);
//	return 0;
//}