#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include<assert.h>
//#include <limits.h>
//#include<ctype.h>
//
//enum Status {
//	VALID,
//	INVALID
//}status = INVALID;
//
//
//
//int my_atoi(const char* str) {
//
//	int flag = 1;
//
//	//arrΪ��ָ��
//	assert(str);
//
//	//�Ƿ��ǿ��ַ�
//	if (*str == '\0') {
//		return 0;
//	}
//
//	//�հ��ַ�
//	while (isspace(*str)) {
//
//		str++;
//	}
//
//	//������
//	if (*str == '+') {
//		flag = 1;
//		str++;
//	}
//	else if (*str == '-') {
//		flag = -1;
//		str++;
//	}
//
//	long long n = 0;
//	while (*str != '\0') {
//
//		if (isdigit(*str)) {
//			n = n * 10 + flag * (*str - '0');
//
//			if (n < INT_MIN || n > INT_MAX) {
//
//				n = 0;
//				break;
//			}
//		}
//		else {
//			break;
//		}
//
//		str++;
//	}
//
//	if (*str == '\0') {
//
//		status = VALID;
//	}
//
//	return n;
//}
//
//
//int main() {//ģ��ʵ��atoi����
//
//	char arr[100] = "-1234";
//	int ret = my_atoi(arr);
//
//	if (status == VALID) {
//		printf("����ת����%d", ret);
//	}
//	else {
//		printf("�Ƿ�ת����%d", ret);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//char* my_strncat(char* str1, const char* str2, size_t num) {
//
//	assert(str1 && str2);
//	
//	
//
//	while (*str1 != '\0') {
//		str1++;
//	}
//	
//	char* tmp = str1;
//
//	while ((*tmp++ = *str2++) && num--);
//	*tmp= '\0';
//	
//	return str1;
//
//}
//
//int main() {//ģ��ʵ��strncat
//	char arr1[100] = "My life is ok!";
//	char arr2[] = "but just not enough happy!";
//
//	char* ret = my_strncat(arr1, arr2, 27);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}


// ģ��ʵ��strncpy
//#include <stdio.h>
//#include <assert.h>
//
//char* My_strncpy(char* dest, const char* src, size_t n)
//{
//    assert(dest);
//
//    assert(src);
//
//    char* ret = dest;
//    while (n--)
//    {
//        *dest++ = *src++;
//    }
//    return ret;
//}
//
//
//int main() {
//
//    char arr1[100] = "Everything is cute!";
//    char arr2[] = "include me!";
//
//    char* ret = My_strncpy(arr1, arr2, 5);
//
//    printf("%s\n", ret);
//
//    return 0;
//}



////дһ���꣬���Խ�һ�������Ķ�����λ������λ��ż��λ������
//
//#include <stdio.h>
//
//
//#define exchange_odd_even(n) (n=((n&0xaaaaaaaa)>>1)+((n&0x55555555)<<1))
//
//int main(){
//		int a = 10;
//		//00000000000000000000000000001010 ->10
//	    // ����żλ������� ��
//		//00000000000000000000000000000101 ->5
//		exchange_odd_even(a);
//		printf("a=%d\n", a);
//	return 0;
//}



//offsetof���ʵ��

#include <stdio.h>

typedef struct Student {
	char name[20];
	char id[15];
	char sex[5];
	int age;

}student;

#define num_offsetof(s,m)  ((size_t)&(((s*)0)->m))
                             //���ṹ�����Ԫ�ص�ַ��Ϊ0��
                             //��Ϊԭ����ƫ������ student->id - student
                             //�����student����(student*)0
                             //��ô����ʽ�Ӿͳ��� student->id - 0�ˡ�
int main() {
	
	
	printf("%d",(size_t)num_offsetof(student,id));

	return 0;
}