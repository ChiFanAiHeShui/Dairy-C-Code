#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main() {
//
//	int no;
//	puts("������һ��������");
//	scanf("%d", &no);
//
//	switch (no % 2) {
//
//	case 1: puts("��������������"); break;
//
//	case 0: puts("��������ż����"); break;
//
//	}
//
//	return (0);
//}


//int main() {
//
//	int month;
//	
//	puts("�������·ݣ�");
//
//	scanf("%d", &month);
//
//	switch (month) {
//	case 1: puts("�Ƕ���"); break;
//
//	case 2: puts("�Ƕ���"); break;
//
//	case 3: puts("�Ǵ���"); break;
//
//	case 4: puts("�Ǵ���"); break;
//
//	case 5: puts("�Ǵ���"); break;
//
//	case 6: puts("������"); break;
//
//	case 7: puts("������"); break;
//
//	case 8: puts("������"); break;
//
//	case 9: puts("������"); break;
//
//	case 10: puts("������"); break;
//
//	case 11: puts("������"); break;
//
//	case 12: puts("�Ƕ���"); break;
//
//	default:puts("������·ݲ����ڣ�");
//	}
//
//	return (0);
//}


//int main() {
//	
//	int num;
//
//	do {
//		puts("������һ���Ǹ�������\n");
//		scanf("%d", &num);
//		if (num < 0) {
//			puts("�벻Ҫ���븺������\n");
//		}
//	} while (num < 0);
//
//	printf("%d������ʾ�Ľ���ǣ�", num);
//
//	do {
//		printf("%d", num % 10);
//		num = num / 10;
//	} while (num > 0);
//	puts("��");
//
//	return (0);
//}

//int main() {
//
//	int num;
//	int dig;
//	int tmp;
//
//	do {
//		printf("������һ���Ǹ�������\n");
//		scanf("%d", &num);
//     	if (num < 0) {
//			puts("\a�벻Ҫ���븺������\n");
//		}
//	} while (num < 0);
//
//	dig = 0;
//	tmp = num;
//
//	do {
//		num = num / 10;
//		dig = dig + 1;
//	} while (num > 0);
//
//	printf("%d������λ����%d��\n", tmp, dig);
//
//
//	return (0);
//}

//int main() {
//
//	int num1 =0, num2, min,max,sum,tmp;
//
//	puts("����������������");
//	printf("����1��"); scanf("%d", &num1);
//	printf("����2��"); scanf("%d", &num2);
//
//	min = (num1 > num2) ? num2 : num1;
//	max = (num1 > num2) ? num1 : num2;
//	sum = 0;
//	tmp = min;
//
//	do{
//		sum += min;
//		min += 1;
//
//	} while (min <= max);
//
//	printf("���ڵ���%dС�ڵ���%d�����������ĺ���%d��\n", tmp, max, sum);
//
//	return (0);
//}

//int main() {
//
//	int num;
//
//	do {
//		printf("������һ���Ǹ�������");
//		scanf("%d", &num);
//		if (num < 0) {
//			puts("�벻Ҫ���븺������");
//		}
//	} while (num < 0);
//
//	printf("������������ʾ�Ľ���ǣ�");
//	do {
//		printf("%d", num % 10);
//		num /= 10;
//	} while (num > 0);
//
//	puts("��");
//
//	return (0);
//}

//int main() {
//
//	int num;
//	int dig;
//
//	do{
//
//		printf("������һ���Ǹ�������");
//		scanf("%d", &num);
//		if (num < 0) {
//			puts("\a�벻Ҫ���븺������");
//		}
//
//	}while (num < 0);
//
//		dig = 0;
//		do {
//			num /= 10;
//			dig++;
//		} while (num > 0);
//
//		printf("��������λ����%d��\n", dig);
//
//
//	return (0);
//}

//int main() {
//
//	int no;
//
//	printf("������һ��������");
//	scanf("%d", &no);
//
//	while (no >= 0) {
//		printf("%d", no);
//		no--;
//	}
//
//	if (no >= 0) {
//		putchar("\n");
//	}
//	return (0);
//}

//int main() {
//
//	int no;
//	
//	printf("������һ����������");
//	scanf("%d", &no);
//
//	while (no >= 1) {
//		printf("%d ", no--);
//	}
//	putchar('\n');
//
//	return (0);
//}

//int main() {
//
//	int i, no;
//	
//	do {
//		printf("������һ����������");
//		scanf("%d", &no);
//	} while (no < 0);
//
//	i = 1;
//	while (i <= no) {
//		printf("%d ", i++);
//	}
//	putchar('\n');
//
//	return (0);
//}

//int main() {
//
//	int no,i;
//
//	printf("������һ��������");
//	scanf("%d", &no);
//
//	i = 2;
//	while (i < no) {
//		printf("%d ", i);
//		i += 2;
//	}
//
//	return (0);
//}

//int main() {
//	
//	int no, i,j;
//
//	printf("������һ��������");
//	scanf("%d", &no);
//
//	i = 2;
//	j = 2;
//	while (i < no) {
//		printf("%d ", i);
//		i *= j;
//	}
//
//	return (0);
//}



int main() {

	int no;

	printf("������һ��������");
	scanf("%d", &no);

	while (no-- > 0) {
		printf("*\n");
	}

	return (0);
}