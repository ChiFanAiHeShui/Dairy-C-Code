#define _CRT_SECURE_NO_WARNINGS

/*
���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��

��������:

1999 2299

�������:7
*/
//#include <stdio.h>
//int main() {
//
//	int num1 = 0;
//	int num2 = 0;
//	int count = 0;
//	int i = 0;
//	scanf("%d%d", &num1, &num2);
//	int num3 = (num1 ^ num2);
//	for (i = 0; i < 32; i++) {
//		//ע�⣬���ﲻ�������ơ���Ϊ��������ƵĻ�����ôcount��ֵ�ͺ�Ϊ0��
//		if ((1 == ((num3 >> i) & 1)) ) {
//			++count;
//		}
//	}
//
//	printf("%d", count);
//
//	return 0;
//}

/*��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������*/

//#include <stdio.h>
//
//int main() {
//
//	int i = 0;
//	int num = 0;
//	printf("������һ�������������ֱ��ӡ������Ķ����Ƶ�����λ��ż��λ\n");
//	scanf("%d", &num);
//	
//	for (i = 1; i < 32; i+=2) {
//		printf("%d ",((num >> i) & 1));
//	}
//	
//	printf("\n");
//
//	for (i = 0; i < 32; i += 2) {
//		printf("%d ", ((num >> i) & 1));
//	}
//
//
//	return 0;
//}

/*ͳ�ƶ�������1�ĸ���

��ҵ����
дһ���������ز����������� 1 �ĸ�����

���磺 15    0000 1111    4 �� 1

*/

//#include <stdio.h>
//
//int main() {
//
//	int num = 0;
//	int i = 0;
//	int count = 0;
//	
//	scanf("%d", &num);
//	
//
//	for (i = 0; i < 32; i++) {
//
//		if (((num >> i) & 1) == 1 ) {
//			count++;
//		}
//
//	}
//
//	printf("������ж�������1�ĸ���Ϊ��%d", count);
//	
//
//	return 0;
//}


/*

��ҵ����(704)
����������������������ʱ������

��ҵ����
����������ʱ������������������������


011   3 num1
110   5 num2
101     

011   num1
101   
110   num2

101   
110   num2
011   num1
*/
//#include <stdio.h>
//
//int main() {
//
//	int num1 = 25;
//	int num2 = 30;
//
//	num1 = num1 ^ num2;
//	num2 = num1 ^ num2;
//	num1 = num2 ^ num1;
//
//	
//	printf("%d %d ", num1, num2);
//	return 0;
//}