#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 


int main() {

	int a = 10;     //aΪint����������һ��10���ڴ��ַ����Ϊ0x0018ff44
	int* pa = &a;   //paΪָ�������һ��ָ�룩������a�ĵ�ַ0x0018ff44��pa�������ڴ��е�ַ����Ϊ0x0018ff40
	int** ppa = &pa;//ppaΪ����ָ�룬����pa�ĵ�ַ0x0018ff40�����������ڴ���Ҳ�е�ַ��
	/*
	���ڶ���ָ��������У�
	   1. *ppa ͨ����ppa�еĵ�ַ���н����ã������ҵ�����pa�� *ppa��ʵ���ʵľ���pa��
	           int b = 20;
		       *ppa = &b;//�ȼ��� pa = &b
		  
	  
	   2. **ppa ��ͨ�� *ppa �ҵ�pa��Ȼ���pa���н����ò�����*pa���������ҵ����� a

	        **ppa = 30��
	         //�ȼ��� *pa=30
	         //�ȼ��� a = 30
	*/
	return 0;
}

//#define N_VALUES 5
//int main() {//ָ��Ĺ�ϵ����
//	float value[N_VALUES];
//	float *vp = &value;
//	for (vp = &value[N_VALUES]; vp > &value[0];){
//		*--vp = 0;
//	}
//
//	for(vp = &value[N_VALUES -1];vp >= &value[0];vp--){
//		*vp = 0;
//	}//���д�������һ�д���ִ������ͬ�����ã���Ӧ�ñ�������д��������c�����﷨
//	return 0;
//
//	/*
//	��׼�涨��
//	����ָ������Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚϣ�����
//	��������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽϡ�
//	*/
//}


#include <stdio.h>
//int my_strlen(char* str) {//����ָ�����ָ������ԣ�������һ�����ַ������ȵĺ���
//	char* start = str;
//	char* end = str;
//	while (*end != '\0') {
//	 
//		end++;
//	}
//	return end - start;
//}
//int main() {//ָ���ָ��
//
//	char arr[] = "Hello World!";
//	int len = my_strlen(arr);
//	printf("����ַ����ĳ���Ϊ��%d \n",len);
//
//	//char ch[5] = { 0 };
//	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//printf("%d\n",&arr[0] - &arr[9]);//�ɴ˿�֪��ָ���ָ��Ľ��Ϊ����ָ��֮����ַ�����
//	//printf("%d\n", &arr[9] - &ch[0]);//err
//	return 0;
//}


//#include <stdio.h>
//int main() {//ָ��+-����
//
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[0];
//
//	for (int i = 0; i < sz; i++) {
//		*p = 0;
//		p++; 
//	}
//	for (int i = 0; i < sz; i++) {
//		printf("%d  ",arr[i]);
//	}
//	return 0;