#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//��ӡ�������
 
//int main() {
//
//	int n = 0;
//	printf("������һ�����֣����ǻ��ӡ��Ӧ�������������\n");
//	scanf("%d", &n);
//
//
//	int i = 0;
//	int arr1[30] = { 0 };
//	int arr2[30] = { 1,1 };//ע�⣬�Ǵӵ����п�ʼ��ӡarr2������ǰ�����е���ǰ����
//
//	for (i = 1; i <= n; i++) {
//
//		int j = 0;
//
//		int k = 0;
//		int left = 0;
//		int right = i - 1;
//		arr1[left] = 1;
//		arr1[right] = 1;
//
//
//
//		while ((right - left) >= 2) {//�ӵ����п�ʼ����arr1ǰ����������ӷŵ�arr2����
//			arr2[right] = 1;
//			arr2[++left] = arr1[k] + arr1[k + 1];
//			k++;
//		}
//
//		for (j = 0; j < i; j++) {//��arr2��������ݸ��µ�arr1��ȥ�������´θ�arr2��ֵ
//			arr1[j] = arr2[j];
//		}
//
//
//		for (j = 0; j < i; j++) {
//			printf("%d ", arr2[j]);
//		}
//
//		printf("\n");
//
//	}
//
//	return 0;
//}



/*
�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����

����Ϊ4�����ɷ��Ĺ���:

A˵�������ҡ�

B˵����C��

C˵����D��

D˵��C�ں�˵

��֪3����˵���滰��1����˵���Ǽٻ���

�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
*/
//
//#include<stdio.h>
//int main()
//{
//    int killer = 0;
//    //�ֱ����������a,b,c,d,��˭������ʱ����3����˵���滰��һ����˵�˼ٻ�
//    for (killer = 'a'; killer <= 'd'; killer++)
//    {
//        if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//            printf("�����ǣ�%c", killer);
//    }
//    return 0;
//}
//



