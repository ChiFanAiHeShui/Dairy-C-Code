#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <windows.h>
#include <string.h>

int main() {
   
	float f = 5.5;
	//5.5
	// 101.5
	// (-1)^0 * 1.001 * 2 ^2
	// S = 0 
	// M = 1.001
	// E = 20
	//0100 0000 1011 0000 0000 0000 0000 0000(f的补码)
	//在存储到内存中转换成16进制为   0x40 b0 00 00
	return 0;
}


//int main() {
//
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);
//	printf("pFloat的值为：%f\n", *pFloat);
//
//	*pFloat = 9.0;
//	printf("n的值为：%d\n", n);
//	printf("pFloat的值为：%f\n", *pFloat);
//
//
//	return 0;
//
//}

//unsigned char i = 0;//0~255
//
//int mian() {
//
//    //由于无类型char的取值范围为0~255。所以它的循环条件恒成立
//	for (i = 0; i <= 255;i++) {
//		printf("hello World\n");
//	}
//	return 0;
//
//}

//int main() {
//
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000;i++) {
//		a[i] = -1 - i;
//	}
//	printf("%d",strlen(a));
//	//预想中的出现的结果为：-1，-2，-3，-4，-5，-6，-7，-8，-9.....-1000
//	//而因为实际中数组的类型为char类型的，且是有符号型的char，所以它的取值范围为 -128 ~ 127
//	//所以真实的在数组中存储的数据为：-1，-2，-3，...-128，127，126...1，0，-1，-2......
//	//注意，当strlen（）函数取到 0 时，便会直接打印输出结果
//	//所以结果为：255
// 	return 0;
//}

//int main() {
//	unsigned int i;
//	for (i = 9; i >= 0;i--) {
//		printf("%u\n",i);
//		Sleep(100);
//	}
//	//输出结果为：
//	/*
//9
//8
//7
//6
//5
//4
//3
//2
//1
//0
//4294967295
//4294967294
//4294967293
//4294967292
//4294967291
//4294967290
//4294967289
//......
//	*/
//	return 0;
//}