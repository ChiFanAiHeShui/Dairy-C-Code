#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*���������������������������Լ��

���磺

���룺20 40

�����20*/
//#include <stdio.h>
//int main() {
//
//	int x;
//	int y;
//	int gcd_x;
//	int gcd_y;
//	printf("��������������\n");
//	scanf("%d %d", &x, &y);
//
//	for (int i = 1; i < x; i++) {
//		if (x % i == 0) {
//			gcd_x = i;
//		}
//	}
//
//	for (int i = 1; i < y; i++) {
//		if (y % i == 0) {
//			gcd_y = i;
//		}
//	}
//
//
//	if (gcd_x > gcd_y) {
//		printf("���������е����Լ��Ϊ��%d\n",gcd_x);
//	}
//	else if (gcd_x < gcd_y) {
//		printf("���������е����Լ��Ϊ�� % d\n", gcd_y);
//	}
//	else {
//		printf("���������е����Լ��Ϊ�� % d\n", gcd_y);
//	}
//
//
//	return 0;
//}

/*��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9*/
//
//#include <stdio.h>

//int main() {
//
//	int i = 0;
//	int count = 0;
//	for (i =1; i < 101; i++) {
//		
//		if (i < 10) {
//			if (i % 9 == 0) {
//				count++;
//			}
//		}
//		else {
//			if ((i % 10) == 9) {
//				count++;
//			}
//			else if ((i / 10) == 9) {
//				count++;
//			}
//		}
//	}
//	printf("%d \n",count);
//	return 0;
//
//}

/*����Ļ�����9*9�˷��ھ���*/

//int main() {
//
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++) {
//		for (j = 1; j < i+1;j++) {
//			printf("%d*%d=%d  ", i, j, (i * j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


/*��ҵ����(664)
���ֲ���

��ҵ����
��д������һ���������������в��Ҿ����ĳ����

Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����*/

//int main() {
//	
//	int num = 0;
//	int arr[10] = { 10,20,22,25,59,66,75,89,97,125 };
//	int left = 0;
//	int right = (sizeof(arr) / sizeof(arr[0])) - 1;
//
//	printf("������������ҵ�����\n");
//	
//	scanf("%d ", &num);
//
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		
//		if (num == arr[mid]) {
//			printf("�ҵ��ˣ�������������е��±�Ϊ��%d", mid);
//		}
//
//		if (num > arr[mid]) {
//			left = mid++;
//		}
//		else {
//			right = mid--;
//		}
//        
//	}
//
//	if (left > right) {
//		printf("��������û���ҵ������\n");
//	}
//
//
//	return 0;
//}

//
//int main() {
//	char x;
//	char y;
//	
//	scanf("%c%c", &x, &y);
//	printf("\n%c %c\n", x, y);
//	
//	return 0;
//
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;//�������в�����һ��
//	}
//	printf("%d\n", a);
//	return 0;
//}