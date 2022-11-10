#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
typedef struct Stu {

   //成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
 
void Print1(Stu tmp) {

	    printf("name: %s\n", tmp.name);
		printf("age: %d\n", tmp.age);
		printf("tele: %s\n", tmp.tele);
		printf("sex: %s\n", tmp.sex);
}

void Print2(Stu* ps) {

	printf("name: %s\n", ps->name);
	printf("age: %d\n", ps->age);
	printf("tele: %s\n", ps->tele);
	printf("sex: %s\n", ps->sex);
}

int main() {
	Stu s = { "李四",40,"15555546886","男" };

	Print1(s);
	
	printf("\n");
	
	Print2(&s);

	return 0;
}

//typedef struct Stu {
//
//    //成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//void Print1(Stu tmp) {
//  
//	printf("name: %s\n",tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("tele: %s\n", tmp.tele);
//	printf("sex: %s\n", tmp.sex);
//}
//int main() {
//
//	Stu s = { "李四",40,"15555546886","男" };
//
//	Print1(s);
//	/*
//	 输出结果为：
//	 name: 李四
//     age: 40
//     tele: 15555546886
//     sex: 男
//	*/
//
//	return 0;
//}

//struct S {
//	int a;
//	char c;
//	char arr[20];
//    double d;
//};
//
//struct T {
//	
//	char ch[10];
//	struct S s;
//	char* pc;
//
//};
//
// int main() {
//	 
//	 char arr[] = "Hello World\n";
//	 struct T t = { "hehe",{100,'w',"helloworld",3.14},arr};
//	 printf("%s\n",t.ch);//hehe
//	 printf("%s\n", t.s.arr);//helloworld
//	 printf("%lf\n", t.s.d);//3.14
//	 printf("%s\n", t.pc);//Hello World
//
//	return 0;
//}

//struct Stu {
//	
//	//成员变量
//	char name[20];
//	short age;
//	char sele[12];
//	char sex[5];
//};
//
//int main() {
//	struct Stu s;//局部变量
//	return 0;
//}

//double Pow(int n,int k) {
// 
//	 // n^k = n * n^(k-1)
//	if (k < 0) {
//		return (1.0 / (Pow(n, -k)));
//	}
//	else if (k == 0) {
//		return 1;
//	}
//	else {
//		return n * Pow(n,k-1);
//	}
//}
//
//int main() {
//	 
//	int n = 0;
//	int k = 0;
//	scanf("%d%d",&n,&k);
//
//	double ret = Pow(n, k);
//	printf("ret = %lf\n",ret);
//	return 0;
//}

//int DigitSum(unsigned int num) {
//	
//	if (num > 9) {
//	 
//		return DigitSum(num/10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//
//int main() {
//
//	unsigned int num = 0;
//	scanf("%d",&num);
//	
//	int ret = DigitSum(num);
//	printf("ret = %d\n",ret);
//
//	return 0;
//}


//int my_strlen(char* str) {//自定义函数，用来求字符串的长度
// 
//	int count = 0;
//	while (*str != '\0') {
//		count++;
//		str++;
//	}
//	return count;
//}
//
////void reverse_string(char arr[]) {//调换字符串顺序方法一
////	int left = 0;
////	int right = my_strlen(arr)-1;
////
////	while (left < right ) {
////	
////		int tmp = arr[left];
////		arr[left] = arr[right];
////		arr[right] = tmp;
////		left++;
////		right--;
////	}
////}
//
//
//void reverse_string(char arr[]) {//调换字符串顺序方法二
//
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr+1) >=2)
//		reverse_string(arr+1);
//	arr[len - 1] = tmp;
//}
//
//int main() {
//
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n",arr);
//	
//	return 0;
//}



//int Fun(int n ) {
//
//	if (n == 5) {
//		return 2;
//	}
//	else
//		return 2 * Fun(n + 1);
//	//结果为：16
//}
//int main() {
//
//	int num = 2;
//	printf("%d", Fun(num));
//	return 0;
//}

//void print_table(int num) {
//  
//	int i = 0;
//	for (int i = 1; i <= num; i++) {
//		int j = 0;
//		for (int j = 1; j <= i; j++) {
//			printf("%d*%d=%d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main() {
//	int num = 0;
//	
//	printf("请输入你想打印表的行和列数>:\n");
//	scanf("%d",&num);
//	print_table(num);
//	
//	return 0;
//}