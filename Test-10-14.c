#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//�����������֪���ĵڼ���쳲���������
int count = 0;

int Fib(int n) {
	//if (n == 3) {//�������������쳲��������ļ������
	//	count++;
	//}
	//if (n <= 2) {
	//	return 1;
	//}
	//else {
	//	return Fib(n -1) + Fib(n -2);//����������������ƣ�ֻ�ܼ����С��쳲���������
	//}


	//��ѭ���ķ�ʽ������n��쳲�������
	int a = 1;
	int b = 1;
	int c = 1;

	while (n > 2) {
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;

}
int main() {
	int n = 0;
	int ret = 0;
	printf("����������֪���ĵڼ���쳲�������>;");
	scanf("%d",&n);

	ret = Fib(n);
	printf("ret = %d\n",ret);
	printf("������쳲��������ļ������Ϊ�� %d\n",count);//������Ϊ�� 39088169
	return 0;
}

//int Fac(int x) {
//	//int i = 0;
//	//int sum = 1;
//	//for (int i = 1; i<=x; i++) {
//	//	sum = sum * i;
//	//}
//	//return sum;//����ѭ���ķ�ʽ����һ�����Ľ׳�
//
//	
//	//���õݹ�ķ�������һ�����Ľ׳�
//	if (x <= 1) {
//		return 1;
//	}
//	else {
//		return x * Fac(x-1);
//	}
//}
//int main() {
//	int num = 0;
//	int ret = 0;
//	printf("������������׳˵���>:\n");
//	scanf("%d",&num);
//	ret = Fac(num);
//	printf("%d",ret);
//	return 0;
//}
//
//int print_str(char* p) {
//	if (*p != '\0')
//		return 1 + print_str(p + 1);
//	else
//		return 0;
//}
//
////�Լ�����һ��������ģ��strlen�����Ĺ��ܣ��������ַ������ȡ�
//int main() {
//	int ret = 0;
//	char arr[] = "Hello!";
//    ret = print_str(arr);
//	printf("�ַ����ĳ���Ϊ ----> %d",ret);
//	return 0;
//}

////�������Ϊ��������һ������(Ϊ������)֮��ϵͳ���Զ���ӡ��������������֡�
// void print(int x) {
//     if (x > 9) {
//         print(x/10);
//     }
//     printf("%d  ", x%10);
//}
//int main() {
//    //�ݹ�������Ҫ������1.���������������������������������ʱ�򣬵ݹ�Ͳ��ټ�����
//    //                  2.ÿ�εݹ���ú�Խ��Խ�ӽ��������������
//
//   unsigned int a = 0;
//   printf("�����������ӡ������>:\n");
//    scanf("%d",&a);
//    print(a);
//    return 0;
//}