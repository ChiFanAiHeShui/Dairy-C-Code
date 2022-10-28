#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 


int main() {

	int a = 10;     //a为int变量，存了一个10，内存地址假如为0x0018ff44
	int* pa = &a;   //pa为指针变量（一级指针），存了a的地址0x0018ff44。pa自身在内存中地址假如为0x0018ff40
	int** ppa = &pa;//ppa为二级指针，存了pa的地址0x0018ff40，它自身在内存中也有地址。
	/*
	对于二级指针的运算有：
	   1. *ppa 通过对ppa中的地址进行解引用，这样找到的是pa， *ppa其实访问的就是pa。
	           int b = 20;
		       *ppa = &b;//等价于 pa = &b
		  
	  
	   2. **ppa 先通过 *ppa 找到pa，然后对pa进行解引用操作：*pa，那最终找到的是 a

	        **ppa = 30；
	         //等价于 *pa=30
	         //等价于 a = 30
	*/
	return 0;
}

//#define N_VALUES 5
//int main() {//指针的关系运算
//	float value[N_VALUES];
//	float *vp = &value;
//	for (vp = &value[N_VALUES]; vp > &value[0];){
//		*--vp = 0;
//	}
//
//	for(vp = &value[N_VALUES -1];vp >= &value[0];vp--){
//		*vp = 0;
//	}//这行代码与上一行代码执行了相同的作用，但应该避免这样写，不符合c语言语法
//	return 0;
//
//	/*
//	标准规定：
//	允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，但是
//	不允许与指向第一个元素之前的那个内存位置的指针进行比较。
//	*/
//}


#include <stdio.h>
//int my_strlen(char* str) {//利用指针减掉指针的特性，来定义一个求字符串长度的函数
//	char* start = str;
//	char* end = str;
//	while (*end != '\0') {
//	 
//		end++;
//	}
//	return end - start;
//}
//int main() {//指针减指针
//
//	char arr[] = "Hello World!";
//	int len = my_strlen(arr);
//	printf("这个字符串的长度为：%d \n",len);
//
//	//char ch[5] = { 0 };
//	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//printf("%d\n",&arr[0] - &arr[9]);//由此可知，指针减指针的结果为两个指针之间的字符长度
//	//printf("%d\n", &arr[9] - &ch[0]);//err
//	return 0;
//}


//#include <stdio.h>
//int main() {//指针+-整数
//
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[0];
//
//	for (int i = 0; i < sz; i++) {
//		*p = 0;
//		p++; 
//	}
//	for (int i = 0; i < sz; i++) {
//		printf("%d  ",arr[i]);
//	}
//	return 0;