#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main() {
//
//	printf("15��ȥ37�Ľ����%d\n", 15 - 37);
//
//	return (0);
//}

//int main() {
//
//
//	printf("��\n��\n��\nɽ\n");
//	return (0);
//}

//int main() {
//
//
//	printf("ι��\n���ã�\n\n�ټ���");
//	return (0);
//}

//int main() {
//
//	int no;
//	printf("������һ��������");
//	scanf("%d", &no);
//	printf("����������10�Ľ����%d\n", no + 10);
//
//	return 0;
//}


//int main() {
//
//	int no;
//	printf("������һ��������");
//	scanf("%d", &no);
//
//	printf("��������ȥ10�Ľ���ǣ�%d\n", no - 10);
//
//	return (0);
//}

//int main() {
//
//
//	puts("��\n��\n��\nɽ");
//	return (0);
//}

//int main() {
//
//	int m, n;
//
//	puts("����������������");
//	printf("����1��");  scanf("%d", &m);
//	printf("����2��");  scanf("%d", &n);
//
//	printf("���ǵĳ˻��� %d",m*n);
//
//	return (0);
//}



//int main() {
//
//	int m, n, x;
//
//	puts("����������������");
//	printf("����1:"); scanf("%d", &m);
//	printf("����2:"); scanf("%d", &n);
//	printf("����3:"); scanf("%d", &x);
//
//	printf("���ǵĺ��� %d", m + n + x);
//
//	return (0);
//}



//int main() {
//
//	int m, n;
//	
//	puts("����������������");
//	printf("����A��"); scanf("%d", &m);
//	printf("����B��"); scanf("%d", &n);
//
//	int result = ((float)m / n) * 100;//���m��ֵ��n�İٷ�ֵ�Ķ���
//
//	printf("A��ֵ��B��%d%%", result);
//
//
//	return (0);
//}


//int main() {
//
//	int m, n;
//
//	puts("����������������");
//	printf("����A:"); scanf("%d", &m);
//	printf("����B:"); scanf("%d", &n);
//
//	printf("���ǵĺ��� %d,���� %d", m + n, m * n);
//	
//	return (0);
//}

//int main(){
//
//	double f;
//
//	printf("������һ��ʵ����"); scanf("%lf", &f);
//	printf("��������ǣ�%f", f);
//
//	return (0);
//}


//int main() {
//
//	int m, n;
//
//	puts("����������������");
//	printf("����A��"); scanf("%d", &m);
//	printf("����B��"); scanf("%d", &n);
//
//	����ע����Ҫ�Ȱ�mת���ɸ��������У�����������һ�������ض�Ϊ����
//	printf("A��B��%f%%��", ((double)m / n )* 100 );
//	return (0);
//}


//int main() {
//
//	int high;
//
//	printf("������������ߣ�"); scanf("%d", &high);//ȡ����ߵ�����λ����int������
//	printf("���ı�׼������%.1f���", (high - 100) * 0.9);
//
//	return (0);
//}

//int main() {
//
//	int m, n;
//
//	puts("����������������");
//	printf("����A��"); scanf("%d", &m);
//	printf("����B��"); scanf("%d", &n);
//
//	if (m % n ) 
//       puts("B����A��Լ����");
//	else 
//	   puts("B��A��Լ����");
//
//	return 0;
//}


//int main() {
//
//	double m, n;
//
//	puts("��������������");
//	printf("��һ������"); scanf("%lf", &m);
//	printf("�ڶ�������"); scanf("%lf", &n);
//
//	printf("��һ������ڶ���������ȹ�ϵ�����������Ϊ��%d\n", m == n);
//	printf("��һ������ڶ������Ĵ��ڵ��ڹ�ϵ�����������Ϊ��%d\n", m >= n);
//	printf("��һ������ڶ�������С�ڵ��ڹ�ϵ�����������Ϊ��%d\n", m <= n);
//
//
//
//	return (0);
//}


//int main() {
//
//	int m;
//
//	printf("������һ��������");  scanf("%d",&m);
//
//	if (m > 0)
//		printf("����ֵ��%d", m);
//	else
//		printf("����ֵ��%d", -m);
//	
//	return (0);
//}


//int main() {
//
//	int m, n;
//
//	puts("����������������");
//	printf("����A��"); scanf("%d", &m);
//	printf("����B��"); scanf("%d", &n);
//
//	if (m > n)
//		puts("A����B");
//	else if (m < n)
//		puts("AС��B");
//	else
//		puts("A��B���");
//
//
//	return 0;
//}


//int main() {
//
//	int x,y,z, min;
//
//	puts("����������������");
//	printf("��һ��������"); scanf("%d", &x);
//	printf("�ڶ���������"); scanf("%d", &y);
//	printf("������������"); scanf("%d", &z);
//
//	min = x;
//    if (y < min)
//		min = y;
//    if (z < min)
//		min = z;
//
//	printf("��������������С���Ǹ����ǣ�%d\n", min);
//
//
//
//
//	return (0);
//}


//int main() {
//
//	int n1, n2, n3, n4, max;
//    
//	puts("�������ĸ�������");
//	printf("��һ��������"); scanf("%d", &n1);
//	printf("�ڶ���������"); scanf("%d", &n2);
//	printf("������������"); scanf("%d", &n3);
//	printf("���ĸ�������"); scanf("%d", &n4);
//
//	max = n1;
//
//	if (n2 > max)
//		max = n2;
//	if (n3 > max)
//		max = n3;
//	if (n4 > max)
//		max = n4;
//
//	printf("���ĸ��������ֵΪ��%d", max);
//
//	return (0);
//}


//int main() {
//
//	int n1, n2,result;
//
//	puts("����������������");
//	printf("����1��");  scanf("%d", &n1);
//	printf("����2��");  scanf("%d", &n2);
//
//         
//	if (n1 > n2)
//		result = n1 - n2;
//	else if (n1 < n2)
//		result = n2 - n1;
//	else
//		result = 0;
//	
//	printf("���ǵĲ��ǣ�%d\n",result);
//
//	return(0);
//}


//int main() {
//
//
//	int num;
//
//	puts("������һ��������"); scanf("%d", &num);
//
//	num == 0 ? (printf("��������0\n")) : (printf("����������0\n"));
//
//	return (0);
//}

//int main() {
//
//	int n1, n2, n3;
//
//	puts("����������������");
//	printf("����A��"); scanf("%d", &n1);
//	printf("����B��"); scanf("%d", &n2);
//	printf("����C��"); scanf("%d", &n3);
//
//	if ((n1 == n2) && (n2 == n3))
//		puts("����ֵ�����\n");
//    else if ((n1 == n2) || (n2 == n3))
//		puts("������ֵ���\n");
//	else
//		puts("����ֵ�������\n");
//
//	return (0);
//}

//int main() {
//
//	int n1, n2, result;
//
//	puts("����������������");
//	printf("����A��"); scanf("%d", &n1);
//	printf("����B��"); scanf("%d", &n2);
//
//	result = n1 - n2;
//
//	if (result < 10 || result == 10)
//		puts("���ǵĲ�С�ڵ���10");
//	else
//		puts("���ǵĲ���ڵ���11");
//
//	return (0);
//}


int main() {



	return (0);
}