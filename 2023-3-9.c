#define _CRT_SECURE_NO_WARNINGS

/*
��ҵ����(684)
�ַ������򣨵ݹ�ʵ�֣�

��ҵ����
��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�

ʵ�֣��������ַ����е��ַ��������У����������ӡ��

Ҫ�󣺲���ʹ��C�������е��ַ�������������

����:

char arr[] = "abcdef";


����֮����������ݱ�ɣ�fedcba
*/


/*
a bcdef
b cdef
c def
d ef
e f
f '\0'
*/


//void reverse_string(char* str){
//	//���ǲ��õݹ���ʵ���ַ����������еĵ�������
//	int len = strlen(str);
//	
//	char* left = str;
//	char* right = (str + len - 1);
//	
//	while (left < right) {
//        char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		++left;
//		--right;
//	}
//}
//
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//
//	char arr[] = "Hello World!";
//	int i = 0;
//	
//	reverse_string(arr);
//
//	for (i = 0; i <strlen(arr); i++) {
//		printf("%c ", arr[i]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int my_strlen(char* arr) {//ģ��ʵ��strlen�������������ַ����ĳ��ȵģ�
//
//	int count = 0;
//	while (*arr != '\0') {
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//void reverse_string(char* str) {
//	//����ʹ���˵ݹ���������������ַ����ĺ���
//	int length = my_strlen(str);
//	char tmp = *str;
//	*str = *(str + length - 1);
//	*(str + length - 1) = '\0';
//
//	if(my_strlen(str) > 1 ) {
//		
//		reverse_string(str + 1);
//
//	}
//	
//	*(str + length - 1) = tmp;
//
//
//}
//
//int main() {
//
//	char arr[] = "Hello World!";
//	
//	int i = 0;
//
//	reverse_string(arr);
//
//	for (i = 0; i < my_strlen(arr); i++) {
//
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}

/*
* ��ҵ����(683)
����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�

��ҵ����
дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��

���磬����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19

���룺1729�������19



1729 % 10  --->9
1729 /10   --->172

172 %10 ---> 2
172 / 10 --- > 17

17 %10 ---> 7
17 / 10  ---> 1

1%10 --->  1
1/ 10 ---> 0
*/


int DigitSum(int num) {


	while (num > 0) {

		return  (num % 10) + DigitSum(num / 10);

	}

	return 0;
}

#include <stdio.h>

int main() {

	int ret;
	int num;
	printf("������һ���Ǹ���������������������ÿһλ֮��\n");
	scanf("%d", &num);

	ret = DigitSum(num);
	printf("�������ÿһλ֮��Ϊ��%d\n", ret);

	return 0;
}

/*

�ݹ�ʵ��n��k�η�

��ҵ����
��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�

12                             6
12 *12                         5
12 * 12 * 12                   4
12 * 12 * 12 * 12              3
12 * 12 * 12 * 12 * 12         2
12 * 12 * 12 * 12 * 12 * 12    1

*/

//int power(int n,int k) {
//	
//	int ret = 0;
//	if (k >= 1) {
//		return n * power(n, --k);
//	}
//	return 1;
//
//}
//
//#include <stdio.h>
//
//int main() {
//
//	/*int ret = 0;
//	ret = power(25, 5);
//	printf("%d", ret);*/
//
//	int ret = 0;
//	int n = 0;
//	int k = 0;
//	scanf("%d %d",&n,&k);
//	ret = power(n,k);
//	printf("%d ��  %d �η� Ϊ�� %d \n",n,k,ret);
//	
//	return 0;
//
//}


/*
��ҵ����(681)
����쳲�������

��ҵ����
�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������

���磺

���룺5  �����5

���룺10�� �����55

���룺2�� �����1


1 1 2 3 5 8 13 21 34 55.....

*/

//int Fib(int num) {//����ǲ��õݹ���ʵ�����n��쳲��������ĺ���
//	int i = 0;
//	int x = 1;
//	int y = 1;
//	int ret = 0;
//	int tmp = 0;
//	
//	if (num <= 2) {
//	
//		return 1;
//	}
//
//
//	for (int i = 0; i < (num - 2); i++) {
//
//		ret = (x + y);
//		y = x;
//		x = ret;
//	}
//
//	return ret;
//
//}
//
//#include <stdio.h>
//
//int main() {
//
//	int num = 0;
//	int ret = 0;
//	printf("���������������һ��쳲�������\n");
//	scanf("%d", &num);
//
//	ret  = Fib(num);
//	printf("���쳲�������Ϊ�� %d ", ret);
//
//	return 0;
//}



//int Fib(int num) {//�����ʹ���˵ݹ��������n��쳲��������ĺ���
//	int i = 0;
//	int x = 1;
//	int y = 1;
//	int ret = 0;
//	int tmp = 0;
//	
//	if (num <= 2) {
//	
//		return 1;
//	}
//
//
//	for (int i = 0; i < (num - 2); i++) {
//
//		ret = (x + y);
//		y = x;
//		x = ret;
//	}
//
//	return Fib(num - 1) + Fib(num - 2);
//
//}
//
//#include <stdio.h>
//
//int main() {
//
//	int num = 0;
//	int ret = 0;
//	printf("���������������һ��쳲�������\n");
//	scanf("%d", &num);
//
//	ret  = Fib(num);
//	printf("���쳲�������Ϊ�� %d ", ret);
//
//	return 0;
//}