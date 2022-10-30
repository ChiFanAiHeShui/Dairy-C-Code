#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void print(int num) {

	int i = 0;
	printf("奇数位\n");
	for(int i = 30; i >= 0; i -= 2) {
		printf("%d ",(num >> i)&1);

	}
	printf("\n");
	printf("偶数位\n");
	for (int i = 31; i >= 1; i -= 2) {
		printf("%d ", (num >> i) & 1);
	}
}
int main() {

	int num = 0;
	printf("请输入一个整数！\n");
	scanf("%d",&num);
	print(num);

	return 0;
}
//int get_bit_num(int num) {//最精简版
//
//	int count = 0;
//
//	while (num) {
//		num = num & (num - 1);
//		count++;
//	}
//	return count;
//}
//
//
//int count_differ_num(int num1,int num2) {
//	int tem = (num1 ^ num2);
//	return get_bit_num(tem);
//
//}
//
//int main() {
//	int count = 0;
//	int num1 = 0;
//	int num2 = 0;
//	printf("请输入二个不同的整数，从而输出这两个整数二进制中不同位的个数！\n");
//	scanf("%d%d",&num1,&num2);
//	count = count_differ_num(num1,num2);
//	printf("这两个整数在二进制中不同位的个数为: %d",count);
//	return 0;
//}


//int get_bit_num(int num) {//最精简版
//
//	int count = 0;
//
//	while (num) {
//		num = num & (num -1);
//		count++;
//	}
//	return count;
//}
//
//int get_bit_num(int num) {//较优版
//	int count = 0;
//	int i = 0;
//	for (int i = 0; i < 32; i++) {
//		if (1 == ((num >> i) & 1)){
//
//			count++;
//		}
//	}
//	return count;
//}
//
////int get_bit_num(unsigned int num) {//基础班
////	int count = 0;
////	while (num) {
////		if (num % 2 == 1) {
////			count++;
////		}
////		num = num / 2;
////	}
////	return count;
////	
////}
//
//int main() {
//	
//	int num = 0;
//	printf("请输入一个整数！\n");
//	scanf("%d",&num);
//	int count = get_bit_num(num);
//	
//	printf("这个整数在二进制中1的个数为：%d\n",count);
//
//	return 0;
//}


//int main() {
//	int a, b, c;
//	a = 5;
//	c = ++a;// c=6,a=6
//	b = ++c, c++, ++a, a++;//因为 '=' 的优先级高于 ',' 所以，会先将++c的值赋给b，再进行从左至右进行逗号运算。最后b=7,a=8,c=8
//	b += a++ + c;//由于 + 优先级 大于 +=，所以得先进行+=右边加号运算。最终结果为： a=9 b=23 c=8
//	printf("a = % b = %d c = %d\n",a,b,c);
//	return 0;
//}

//int i = 0;//全局变量-不初始化，默认值为0
//
//int main() {
//
//	i--;
//	//-1
//	//10000000000000000000000000000001 -原码
//	//11111111111111111111111111111110 -反码
//	//11111111111111111111111111111111 -补码
//
//	if ( i > sizeof(i)) {//sizeof()-计算变量/类型所占内存大小 都是>=0，为无符号数
//		printf(">\n");
//	}
//	if (i  < sizeof(i)) {
//
//		printf("<\n");
//	}
//	return 0;
//}

//int main() {
//
//	int a = 0x11223344;
//	char* pc = (char*)&a; //存储到内存中为 44 33 22 11 ，但输出时会倒着输出
//	*pc = 0;//当其指针类型为char时，最终只改变了一个字节的值，也就是将 44 改为 00 
//	printf("%x\n",a);//输出结过为： 11 22 33 00 
//
//	return 0;
//}

//void Print(int arr[], int sz) {
//	int i = 0;
//	for (int i = 0; i < sz; i++) {
//		printf("%d  ", arr[i]);
//	}
//	printf("\n");
//}
//
//
//int main() {
//	int i = 0;
//	int arr1[4] = {1,3,5,7};
//	int arr2[4] = {2,4,6,8};
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	
//	for (int i = 0; i < sz; i++) {
//		int tem = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tem;
//	}
//
//	Print(arr1,sz);
//	Print(arr2,sz);
//
//	
//	return 0;
//
//}

//void init(int arr[],int sz) {
//
//	int i = 0; 
//	for (int i = 0; i < sz; i++) {
//	      
//		arr[i] = 0;
//	}
//}
//
//void Print(int arr[],int sz) {
//	int i = 0;
//	for (int i = 0; i < sz;i++) {
//		printf("%d  ",arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[],int sz) {
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right) {
//		int tem = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tem;
//		left++;
//		right--;
//	}
//}
//
//int main() {
//    
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr,sz);
//	Print(arr, sz);
//
//	reverse(arr,sz);
//	Print(arr, sz);
//	return 0;
//}