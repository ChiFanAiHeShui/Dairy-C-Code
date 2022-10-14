#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//用来输出你想知道的第几个斐波那契数。
int count = 0;

int Fib(int n) {
	//if (n == 3) {//用来计算第三个斐波那契数的计算次数
	//	count++;
	//}
	//if (n <= 2) {
	//	return 1;
	//}
	//else {
	//	return Fib(n -1) + Fib(n -2);//不过这个程序有限制，只能计算较小的斐波那契数。
	//}


	//用循环的方式描述第n个斐波那契数
	int a = 1;
	int b = 1;
	int c = 1;

	while (n > 2) {
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;

}
int main() {
	int n = 0;
	int ret = 0;
	printf("请输入你想知道的第几个斐波那契数>;");
	scanf("%d",&n);

	ret = Fib(n);
	printf("ret = %d\n",ret);
	printf("第三个斐波那契数的计算次数为： %d\n",count);//输出结果为： 39088169
	return 0;
}

//int Fac(int x) {
//	//int i = 0;
//	//int sum = 1;
//	//for (int i = 1; i<=x; i++) {
//	//	sum = sum * i;
//	//}
//	//return sum;//利用循环的方式来求一个数的阶乘
//
//	
//	//利用递归的方法来求一个数的阶乘
//	if (x <= 1) {
//		return 1;
//	}
//	else {
//		return x * Fac(x-1);
//	}
//}
//int main() {
//	int num = 0;
//	int ret = 0;
//	printf("请输入您想求阶乘的数>:\n");
//	scanf("%d",&num);
//	ret = Fac(num);
//	printf("%d",ret);
//	return 0;
//}
//
//int print_str(char* p) {
//	if (*p != '\0')
//		return 1 + print_str(p + 1);
//	else
//		return 0;
//}
//
////自己定义一个函数，模拟strlen函数的功能，用来求字符串长度。
//int main() {
//	int ret = 0;
//	char arr[] = "Hello!";
//    ret = print_str(arr);
//	printf("字符串的长度为 ----> %d",ret);
//	return 0;
//}

////这个程序为当你输入一个数字(为正整数)之后，系统会自动打印出来你输入的数字。
// void print(int x) {
//     if (x > 9) {
//         print(x/10);
//     }
//     printf("%d  ", x%10);
//}
//int main() {
//    //递归两个必要条件：1.存在限制条件，当满足这个限制条件的时候，递归就不再继续。
//    //                  2.每次递归调用后越来越接近这个限制条件。
//
//   unsigned int a = 0;
//   printf("请输入你想打印的数字>:\n");
//    scanf("%d",&a);
//    print(a);
//    return 0;
//}