#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//int my_strlen(const char* arr) {
//
//	int count = 0;
//
//	while(*(arr++) != '\0') {
//	
//		count++;
//	}
//
//	return count;
//}
//
//
//int main() {
//
//
//	char arr[] = "abcdef";
//
//	int ret = 0;
//
//    ret = my_strlen(arr);
//   
//	printf("这个字符串的长度为：%d\n",ret);
//	return 0;
//
//}



//#include<stdio.h>
//#include<assert.h>
//
//char* my_strcpy(char* dest,const char* src){
//	assert(dest && src);
//	
//	char* ret = dest;
//	
//	while(*src != '\0') {
//
//		*dest++ = *src++;
//	}
//
//	*dest = *src;
//
//	return ret;
//}
//
//
//int main() {
//	
//	char arr1[20] = "abcdefg";
//	char arr2[] = "Hello";
//
//	char* ret = my_strcpy(arr1, arr2);
//
//	printf("拷贝后的字符串为：%s", ret);
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//
//void my_strcat(char* dest, const char* src) {
//
//	assert(dest && src);
//	
//	while (*dest != '\0') {//找到目标字符串的结束位置
//		dest++;
//	}
//
//	while (*dest++ = *src++) {//相当于使用了strcpy函数将源字符串从目标字符串的结束位置开始拷贝
//		;
//	}
//
//}
//
//
//int main() {
//	
//	char arr1[20] = "abcdefghij";
//	char arr2[] = "Hello World!";
//
//	my_strcat(arr1, arr2);
//	printf("%s", arr1);
//
//
//	return 0;
//}



//int my_strcmp(const char* dest, const char* src) {
//      
// 
//   assert(dest && stc);
//	while ((*dest == *src) && (*dest) != '\0' && (*src != '\0')) {
//		src++;
//		dest++;
//	}
//
//	
//	if (*dest > *src) {
//		return 1;
//	}
//	else if (*dest < *src) {
//		return -1;
//	}
//	else {
//		return 0;
//	}
//}
//
//#include<stdio.h>
//#include<assert.h>
//
//int main() {
//
//	char arr1[20] = "abcdaafadsdf";
//	char arr2[20] = "j";
//
//	int ret = my_strcmp(arr1,arr2);
//
//	if (ret > 0) {
//
//		printf("arr1字符串更大");
//	}
//	else if (ret < 0) {
//		printf("arr2字符串更大");
//	}
//	else {
//		printf("两个字符串相等");
//	}
//
//	return 0;
//
//}

//#include <stdio.h>
////查找字串的函数
//char* my_strstr(const char* str1, const char* str2) {
//	
//		
//		char* start1 = str1;
//		char* start2 = str2;
//
//		char* cur = str1;
//
//		while (*cur) 
//		{
//			start1 = cur;
//			start2 = str2;
//
//			while (*start1 && *start2 && (*start1 == *start2)) {
//				start1++;
//				start2++;
//			}
//
//			if (*start2 == '\0') {
//
//				return (char*)cur;
//			}
//			cur++;
//		}
//	return NULL;
//}
//
//int main() {
//
//	char arr1[200] = "abadafafttabcdadrdf";
//	char arr2[] = "abcd";
//
//	char * ret = my_strstr(arr1, arr2);
//	printf("%s", ret);
//
//  return 0;
//}