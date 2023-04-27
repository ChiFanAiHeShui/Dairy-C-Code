#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
//void find_single_dog(int* arr, int sz) {
//
//	int single1 = 0;
//	int single2 = 0;
//
//	int i = 0;
//	int ret = 0;
//
//	for (i = 0; i < sz; i++) {
//		ret ^= arr[i];
//	}
//
//
//	//查找ret的二进制位中第几位是1
//	int pos = 0;
//	for (i = 0; i < 32; i++) {
//		
//		if (((ret >> i) & 1) == 1) {
//			pos = i;
//			break;
//		}
//	}
//
//	//分组，将数组中二进制位为pos且等于1的放在一起
//	for (i = 0; i < sz; i++) {
//		if (((arr[i] >> pos) & 1 ) == 0) {
//			single2 ^= arr[i];
//		}
//	}
//
//	//因为ret = 5^6 ,又上面的single2等于5或者6，异或一下就可以了
//	single1 = ret ^ single2;
//
//	printf("%d %d\n", single1, single2);
//
//
//}
//
//
//
//int main() {//查找两只单身狗
//
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//
//	find_single_dog(arr,sz);
//
//
//	
//
//	return 0;
//}


/*
描述
输入一个十六进制数a，和一个八进制数b，输出a+b的十进制结果（范围-231~231-1）。
输入描述：
一行，一个十六进制数a，和一个八进制数b，中间间隔一个空格。
输出描述：
一行，a+b的十进制结果。
示例1
输入：
0x12 05
输出：
23
备注：
十六进制Hexadecimal一般以0x开头，例如0xFF。八进制Octal，一般以0开头，例如07。
*/
//#include <stdio.h>
//
//int main() {
//	int a;
//	int b;
//	scanf("%x %o", &a, &b);//x表示十六进制，o表示八进制
//
//	printf("%d", a + b);
//
//	return 0;
//}

/*
描述
给你两个整数，要求输出这两个整数的和


输入描述：
输入两个整数 a, b （0 <= a, b <= 1000）
输出描述：
输出一个整数.
示例1
输入：
1 2
复制
输出：
3
*/
//#include <stdio.h>
//
//int main() {
//    int a, b;
//    scanf("%d%d", &a, &b);
//    printf("%d", a + b);
//    return 0;
//}



/*
描述
输入两个整数a, b, 输出a/b的值，只保留整数部分
输入描述：
输入两个整数,在int范围内
输出描述：
输出一个整数
示例1
输入：
5 2
复制
输出：
2
*/

//#include <stdio.h>
//
//int main() {
//    int a, b;
//    scanf("%d%d", &a, &b);
//    printf("%d", a / b);
//    return 0;
//}



/*

描述
输入两个整数a, b, 输出a 除以b的余数，5除以2的余数为1，10除以4的余数为2

输入描述：
输入两个整数，在int范围内
输出描述：
输出一个整数
示例1
输入：
5 2
复制
输出：
1

*/


//#include <stdio.h>
//
//int main() {
//    int a, b;
//    scanf("%d%d", &a, &b);
//    printf("%d", a % b);
//    return 0;
//}



/*
描述
给定一个浮点数，要求得到该浮点数的个位数。

数据范围：
0
<
�
≤
200

0<n≤200
输入描述：
一行，包括一个浮点数。
输出描述：
一行，包含一个整数，为输入浮点数对应的个位数。
示例1
输入：
13.141
复制
输出：
3
*/
//
//
//#include <stdio.h>
//
//int main()
//{
//	float num = 0;
//	scanf("%f", &num);
//	printf("%d", (int)num % 10);
//	return 0;
//}








