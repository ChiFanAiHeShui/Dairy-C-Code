#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void* my_memmove(void * dest,const void* src,size_t num) {//ģ��ʵ��memmove
//
//	char* s1 = (char*)dest;
//	char* s2 = (char*)src;
//
//	while (num) {
//		
//		if (s2 < s1) {//Դ�ִ���λ��С��Ŀ���ִ���λ�����ཻ
//			*s1 = *s2;
//			s1++;
//			s2++;
//			num--;
//		}
//		else if (s2 > s1) {//Դ�ִ���λ�ô���Ŀ���ִ���λ�����ཻ
//			*(s1 + num) = *(s2 + num);
//			num--;
//
//		}
//		
//		//������ཻ�����������ַ������ⶼ�У��Ͱ�����������ǵ��˶�
//	}
//
//}
//
//int main() {
//	//ģ��ʵ��memmove
//
//	char str[100] = "abcdef";
//
//	my_memmove(str+2,str,4);
//	puts(str);
//
//
//	return 0;
//}

//#include <stdio.h>
//#include<stdlib.h>
//
//void* my_memcpy(void* dest,const void* src,size_t num) {
//
//	char* s1 = (char*)dest;
//	char* s2 = (char*)src;
//	
//	while (num) {
//		
//		*s1 = *s2;
//		s1++;
//		s2++;
//		num--;
//	}
//
//}
//
//int main() {
//
//	char str1[100] = "aadgavad";
//	char str2[] = "asdfadsf";
//
//	my_memcpy(str1,str2,4);
//
//	puts(str1);
//
//	return 0;
//}


