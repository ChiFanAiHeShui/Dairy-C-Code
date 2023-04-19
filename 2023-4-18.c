#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//char* my_strstr(const char* str1, const char* str2) {
//
//	char* s1 = str1;
//	char* s2 = str2;
//
//	char* cur = str1;
//
//	while (*cur) {
//
//		s1 = cur;
//		s2 = str2;
//		
//		while(*s1 == *s2 && *s1 && *s2 ) {
//			s1++;
//			s2++;
//		}
//
//		if (*s2 == '\0') {
//			return (char*)cur;
//		}
//
//		cur++;
//	}
//
//	return NULL;
//}
//
//int main() {
//	//模拟实现strstr
//
//	char arr1[20] = "aadfadabcdeakfa";
//	char arr2[] = "abcde";
//
//	char* ret = my_strstr(arr1, arr2);
//
//	printf("%s", ret);
//
//
//	return 0;
//}



//模拟实现strcat

//void my_strcat(char* dest, const char* src) {
//
//	while (*dest != '\0') {
//		dest++;
//	}
//
//	while (*src != '\0') {
//
//		*dest = *src;
//		dest++;
//		src++;
//	}
//}
//
//int main() {
//
//	char str1[200] = "adafdfer";
//	char str2[] = "cdkdgh";
//
//	my_strcat(str1, str2);
//	
//	printf("%s", str1);
//	return 0;
//}


//模拟实现strcmp

//int my_strcmp(const char* str1, const char* str2) {
//
//		while (*str1 == *str2) {
//			
//			str1++;
//			str2++;
//
//		}
//
//	return *str1 - *str2;
//
//}
//
//int main() {
//
//	char str1[] = "abcdh";
//	char str2[] = "abcj";
//
//	int ret = my_strcmp(str1,str2);
//
//	if (ret > 0) {
//
//		printf("str1字符串更大\n");
//
//	}
//	else if (ret < 0) {
//
//		printf("str2字符串更大\n");
//
//	}
//	else {
//
//		printf("两个字符串一样大\n");
//
//	}
//	return 0;
//}


//模拟实现strcpy

//void  my_strcpy(char* dest, const char* src) {
//	
//	while (*dest++ = *src++) {
//		;
//	}
//}
//
//int main() {
//
//	char str1[100] = "afavadsfast";
//	char str2[] = "cafadfa";
//
//	my_strcpy(str1, str2);
//	
//	printf("%s", str1);
//
//	return 0;
//}

//模拟实现strlen

int my_strlen(char* str) {
	
	int count = 0;
	while (*str != '\0') {
		str++;
		count++;
	}

	return count;
}

int main() {

	char str1[] = "adfadfad";

	int ret = my_strlen(str1);

	printf("这个字符串的长度为：%d\n", ret);

	return 0;
}