#define _CRT_SECURE_NO_WARNINGS

/*

����ˮ����

��ҵ����
����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���

   ��ˮ: 20  soda

   ��ƿ��20  bottle

   �ܹ��������������Ǹտ�ʼ��Ǯ�����ˮ
   Ȼ���������Щ��������ˮ�Ŀ�ƿ���ɵ���ˮ�ܺ;��С�



��ƿ����ˮ��

 20����ƿ       10ƿ��ˮ

 10����ƿ       5ƿ��ˮ

 5����ƿ        2ƿ��ˮ��һ����ƿ

 3����ƿ         1ƿ��ˮ��1����ƿ

 2����ƿ          1ƿ��ˮ

 1����ƿ           ����ˮ��


        ����ƿֻʣ��һ��ʱ��ѭ��ֹͣ��

20 + ����ƿ��������ˮ��
*/
//#include <stdio.h>
//int main() {
//
//    int money = 20;
//    int soda = money;
//    int bottle = soda;
//    int sum = 0;
//
//    while (bottle != 1) {
//
//        if (0 == (bottle % 2)) {
//            bottle = bottle / 2;
//            sum += bottle;
//        }
//        else {
//            sum += bottle / 2;
//            bottle = (bottle / 2) + (bottle % 2);
//        }
//
//    }
//
//    soda += sum;
//
//    printf("�ܹ����Ժȵ���%d ƿ���ϡ�", soda);
//
//    return 0;
//}


//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//
//	scanf("%d", &money);
//
//	//����2
//	if (money <= 0)
//	{
//		total = 0;
//	}
//	else
//	{
//		total = money * 2 - 1;
//	}
//	printf("total = %d\n", total);
//
//
//	return 0;
//}

/*
ģ��ʵ�ֿ⺯��strlen
*/

//#include <stdio.h>
//
//int my_strlen(char* arr) {
//
//    int count = 0;
//    while (*arr != '\0') {
//        arr++;
//        count++;
//    }
//
//    return count;
//
//}
//
//int main() {
//
//    char arr[] = "Hello World!";
//    int ret = 0;
//
//    ret = my_strlen(arr);
//    printf("����ַ����ĳ����ǣ�%d",ret);
//
//    return 0;
//}


/*
ģ��ʵ�ֿ⺯��strcpy

���������
   1.�������ַ����ĳ�����ȵ�ʱ��
	   ��򵥣�ֱ�ӽ�ÿ���ַ����໥����λ�ü���

   2.�������ַ����ĳ��Ȳ���ȵ�ʱ��
	  ��1��Դ�ַ����ĳ���С�ڱ��������ַ����ĳ���
			  afdaf
			  dsfadfadfa

	  ��2��Դ�ַ����ĳ��ȴ��ڱ��������ַ����ĳ���

			afdafdfadfas
			adfa
*/

//#include <stdio.h>
//
//int my_strlen(char* arr) {
//
//    int count = 0;
//    while (*arr != '\0') {
//        arr++;
//        count++;
//    }
//
//    return count;
//}
//
//void my_strcpy(char* arr2,const char* arr1) {
//
//	int len1 = my_strlen(arr1);//��Դ�ַ����ĳ���
//	int len2 = my_strlen(arr2);//�󱻿������ַ����ĳ���
//
//	if (len1 <= len2) {//��Դ�ַ����ĳ���С�ڻ��ߵ�����Ҫ���������ַ����ĳ���
//		int i = 0;
//		for (i = 0; i < len1; i++) {
//			arr2[i] = arr1[i];
//		}
//	}
//	else {//Դ�ַ����ĳ��ȴ�����Ҫ���������ַ����ĳ���
//		int i = 0;
//		for (i = 0; i < len2; i++) {
//			arr2[i] = arr1[i];
//		}
//	}
//}
//
//
//int main() {
//	char arr1[] = "asfkd";
//	char arr2[] = "afsg";
//
//
//
//	my_strcpy(arr2, arr1);
//
//	printf("%s\n", arr2);
//
//    return 0;
//}



/*
��������ʹ����ȫ����λ��ż��ǰ�档

��Ŀ��

����һ���������飬ʵ��һ��������

�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�

����ż��λ������ĺ�벿�֡�

*/

//#include <stdio.h>
//
//void order_odd_even(int arr[] ,int len) {
//
//	int left = 0;
//	int right = len - 1;
//	while (left < right) {
//
//		if (arr[left] % 2 == 0) {
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			right--;
//		}
//		else {
//			left++;
//		}
//	}
//
//}
//
//
//int main() {
//
//	int i = 0;
//	int len = 0;
//	int arr[] = { 25,25,65,58,45,22,35,38,64,5552,42,355 };
//	len = sizeof(arr) / sizeof(arr[0]);
//
//	order_odd_even(arr,len);
//
//
//	for (i = 0; i < len; i++) {
//		printf("%d ", arr[i]);
//	}
// 
//
//	return 0;
//}

