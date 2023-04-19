#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void* my_memmove(void * dest,const void* src,size_t num) {//模拟实现memmove
//
//	char* s1 = (char*)dest;
//	char* s2 = (char*)src;
//
//	while (num) {
//		
//		if (s2 < s1) {//源字串的位置小于目标字串的位置且相交
//			*s1 = *s2;
//			s1++;
//			s2++;
//			num--;
//		}
//		else if (s2 > s1) {//源字串的位置大于目标字串的位置且相交
//			*(s1 + num) = *(s2 + num);
//			num--;
//
//		}
//		
//		//如果不相交，则以上两种方法任意都行，就把所有情况考虑到了都
//	}
//
//}
//
//int main() {
//	//模拟实现memmove
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


