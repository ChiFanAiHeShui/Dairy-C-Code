#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*���õݹ飬
�������һ���޷���������˳������ÿһλ��ӡ���*/
//void  print(int num) {
//
//	if (num > 9) {
//		
//		print(num / 10);
//
//	}
//	num = num % 10;
//	printf("%d ", num);
//
//}
//
//
//int main() {
//
//	int num = 0;
//	scanf("%d", &num);
//    
//    print(num);
//
//	return 0;
//}



/*��n�Ľ׳ˣ��õݹ�ͷǵݹ�ʵ��*/

//int fac(int num) {
//
//	if (1 == num) {
//		return 1;
//	}
//	else {
//		return num * fac(num - 1);
//	}
//
//}
//
//int main() {
//
//	int num = 0;
//	scanf("%d", &num);
//	int ret = 0;
//	
//	ret = fac(num);
//
//	printf("%d \n", ret);
//
//	return 0;
//}



//int main() {
//
//	int i = 0;
//	int num = 0;
//	scanf("%d", &num);
//	int ret = 1;
//
//	for (i = 1; i <= num; i++) {
//
//		ret = ret * i;
//
//	}
//
//	printf("������Ľ׳��ǣ�%d \n", ret);
//
//	return 0;
//}


/*
���õݹ�ͷǵݹ�ʵ��strlen����
*/

//int str_length(char* ps) {
//	
//	int count = 0;
//	while ((*ps) != '\0') {
//		ps++;
//		count++;
//	}
//	return count;
//}
//
//int main() {
//
//	char arr[] = "Hello World!";
//	int length ;
//
//    length = str_length(arr);
//
//	printf("����ַ����ĳ���Ϊ��%d \n", length);
//
//	return 0;
//}



//int str_length(char* ps) {
//	if ((*ps) == '\0') {
//		return 0;
//	}
//	else {//ע�⣬�����str_length()�е�ps����Ϊǰ��++����Ȼ�������ѭ����
//		return 1 + str_length(++ps);
//	}
//
//}
//
//int main() {
//
//	char arr[] = "Welcome to China!!!";
//	int ret;
//
//	ret = str_length(arr);
//	printf("����ַ����ĳ���Ϊ:%d \n", ret);
//
//	return 0;
//}