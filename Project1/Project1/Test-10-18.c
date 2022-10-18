//#define _CRT_SECURE_NO_WARNINGS
//# include <stdio.h>
//#include <string.h>
//
//int main() {
//
//	//创建数组的时候，[]中必须要赋值常量。
//	int arr[3] = {0};//不完全初始化，剩余的元素默认赋值为0
//
//	char arr1[] = "abcdef";//会根据字符串的数量自动创建数组的长度。
//
//	printf("%d\n", sizeof(arr1));//输出结果为：7,因为sizeof计算的是arr1数组所占空间大小，单位为字节  ---本质为操作符
//	
//	printf("%d\n",strlen(arr1));//输出结果为：6，strlen函数计算的是字符串的长度--'\0'之前的字符个数  --本质为库函数
//
//
//	char arr2[] = "abfc";
//	char arr3[] = { 'a','c','b','s' };
//
//	printf("%d\n",sizeof(arr2));//5
//	printf("%d\n",sizeof(arr3));//4
//	printf("%d\n",strlen(arr2));//4
//	printf("%d\n",strlen(arr3));//随机值
//	return 0;
//}