#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<stdlib.h>


int main() {
	const int x = 20;
	int i = 10;
	
	
	/*const int* p = &i;
	*p = 2;//*p不能变了，也就相当于i的值不能变了
	p = &x;
	   
	
	*/

	int* const p = &i;
	*p = 2;
	p = &x;//指针变量不能变了


	//结论：
	 /*
	 const放在指针变量* 的左边时，修饰的时*p，也就是说：不能通过p来改变*p（num）的值
	 const放在指针变量的*的右边时，修饰的时指针变量本身，p不能被改变了
	 */

	return 0;
}

//void my_strcpy( char* dest,char* src){
//     
//	while (*src != '\0') {
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}
//
//void my_strcpy(char* dest, char* src) {
//
//	while (*dest++ = *src++) {
//
//		;
//	}
//}
//

//#include <assert.h>
//char*  my_strcpy(char* dest, const char* src) {
//
//	assert(src != NULL);//断言，如果括号内成立则报错，使用时需导包
//	assert(dest != NULL);//断言，如果括号内成立则报错
//	while (*dest++ = *src++) {
//
//		;
//	}
//
//}
//int main() {
//
//	char arr1[] = "*****************";
//	char arr2[] = "Hello";
//	my_strcpy(arr1, NULL);
//	printf("%s\n", my_strcpy(arr1,arr2));
//
//	return 0;
//}



//int main(){
//
//	char arr1[] = "*****************";
//	char arr2[] = "Hello";
//	my_strcpy(arr1,NULL);
//	printf("%s\n",arr1);
//
//	return 0;
//}

//int main() {
//
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12;i++) {
//	   
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	/*system("pause");*/
//	return 0;
//}
//int main() {
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d",&n);
//	for (i = 1; i <= n;i++) {
//		ret = 1;
//		int j = 0;
//		for (j = 1; j <= i;j++) {
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n",sum);
//	return 0;
//}