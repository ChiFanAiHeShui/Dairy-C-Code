#define _CRT_SECURE_NO_WARNINGS
int main() {//��ӡ�žų˷���
	int i = 0;
	for (int i = 1; i < 10; i++) {
		int j = 0;
		for (int j = 1; j <= i; j++) {
			printf("%d*%d=%-2d ", i, j, (i * j));
		}
		printf("\n");
	}

	return 0;
}
//int main() {//�ҳ�һ�����������е�������
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int max = arr[0];//���ﲻҪ��max��ֵΪ0����Ϊ����������ȫΪ�����Ļ��������������ֻ����0��
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz;i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	 }
//	printf("max = %d\n",max);
//
//	return 0;
//}

//����1 - 1/2 + 1/3 - 1/4 .........
//int main() {
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (int i = 1; i <= 100; i++) {
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n",sum);
//	return 0;
//}



//����100-200֮�������
//#include <stdio.h>
//#include <math.h>
//int main() {
//	int i = 0;
//	for (int i = 100; i <= 200; i++) {
//		int j = 0;
//		for (int j = 2; j <= sqrt(i);j++ ) {
//			if (i % j ==0) {
//				break;
//			}
//		}
//		if (j > sqrt(i)) {
//			printf("%d", i);
//		}
//	}
//	return 0;
//}

//
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("���������������������\n");
//	scanf("%d %d %d",&a,&b,&c);
//
//	if (a < b) {//���a С�� b �����a��b��ֵ������
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	if ( a < c ) {//���a С�� c�����a��c��ֵ������
//		int temp = a;
//		a = c;
//		c = temp;
//	}//������Ϊֹ��aһ��Ϊ���ֵ
//	if (b < c ) {//�ж�b��c�Ĵ�С�����bС��c��������ǵ�ֵ������ʹ֮�����԰���a��b��cֱ�������
//		int temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d",a,b,c);
//	return 0;
//}

//��ӡ��1000��2000��֮������ꡣ
//int main() {
//	int year = 0;
//	for (int year = 1000; year <= 2000; year++) {//����1000-2000��֮������
//		if (year % 4 == 0 && year % 100 != 0) {// �������4  ��  100 �� 400ȡģʱΪ0����������Ϊ���ꡣ
//
//			printf("%d  ", year);
//		}
//	  if ( year % 400 == 0) {
//			printf("%d  ",year);
//		}
//	
//	}
//	return 0;
//}