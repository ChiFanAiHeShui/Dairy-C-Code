#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<stdlib.h>


int main() {
	const int x = 20;
	int i = 10;
	
	
	/*const int* p = &i;
	*p = 2;//*p���ܱ��ˣ�Ҳ���൱��i��ֵ���ܱ���
	p = &x;
	   
	
	*/

	int* const p = &i;
	*p = 2;
	p = &x;//ָ��������ܱ���


	//���ۣ�
	 /*
	 const����ָ�����* �����ʱ�����ε�ʱ*p��Ҳ����˵������ͨ��p���ı�*p��num����ֵ
	 const����ָ�������*���ұ�ʱ�����ε�ʱָ���������p���ܱ��ı���
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
//	assert(src != NULL);//���ԣ���������ڳ����򱨴�ʹ��ʱ�赼��
//	assert(dest != NULL);//���ԣ���������ڳ����򱨴�
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