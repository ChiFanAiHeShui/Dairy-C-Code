#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void print(int num) {

	int i = 0;
	printf("����λ\n");
	for(int i = 30; i >= 0; i -= 2) {
		printf("%d ",(num >> i)&1);

	}
	printf("\n");
	printf("ż��λ\n");
	for (int i = 31; i >= 1; i -= 2) {
		printf("%d ", (num >> i) & 1);
	}
}
int main() {

	int num = 0;
	printf("������һ��������\n");
	scanf("%d",&num);
	print(num);

	return 0;
}
//int get_bit_num(int num) {//����
//
//	int count = 0;
//
//	while (num) {
//		num = num & (num - 1);
//		count++;
//	}
//	return count;
//}
//
//
//int count_differ_num(int num1,int num2) {
//	int tem = (num1 ^ num2);
//	return get_bit_num(tem);
//
//}
//
//int main() {
//	int count = 0;
//	int num1 = 0;
//	int num2 = 0;
//	printf("�����������ͬ���������Ӷ���������������������в�ͬλ�ĸ�����\n");
//	scanf("%d%d",&num1,&num2);
//	count = count_differ_num(num1,num2);
//	printf("�����������ڶ������в�ͬλ�ĸ���Ϊ: %d",count);
//	return 0;
//}


//int get_bit_num(int num) {//����
//
//	int count = 0;
//
//	while (num) {
//		num = num & (num -1);
//		count++;
//	}
//	return count;
//}
//
//int get_bit_num(int num) {//���Ű�
//	int count = 0;
//	int i = 0;
//	for (int i = 0; i < 32; i++) {
//		if (1 == ((num >> i) & 1)){
//
//			count++;
//		}
//	}
//	return count;
//}
//
////int get_bit_num(unsigned int num) {//������
////	int count = 0;
////	while (num) {
////		if (num % 2 == 1) {
////			count++;
////		}
////		num = num / 2;
////	}
////	return count;
////	
////}
//
//int main() {
//	
//	int num = 0;
//	printf("������һ��������\n");
//	scanf("%d",&num);
//	int count = get_bit_num(num);
//	
//	printf("��������ڶ�������1�ĸ���Ϊ��%d\n",count);
//
//	return 0;
//}


//int main() {
//	int a, b, c;
//	a = 5;
//	c = ++a;// c=6,a=6
//	b = ++c, c++, ++a, a++;//��Ϊ '=' �����ȼ����� ',' ���ԣ����Ƚ�++c��ֵ����b���ٽ��д������ҽ��ж������㡣���b=7,a=8,c=8
//	b += a++ + c;//���� + ���ȼ� ���� +=�����Ե��Ƚ���+=�ұ߼Ӻ����㡣���ս��Ϊ�� a=9 b=23 c=8
//	printf("a = % b = %d c = %d\n",a,b,c);
//	return 0;
//}

//int i = 0;//ȫ�ֱ���-����ʼ����Ĭ��ֵΪ0
//
//int main() {
//
//	i--;
//	//-1
//	//10000000000000000000000000000001 -ԭ��
//	//11111111111111111111111111111110 -����
//	//11111111111111111111111111111111 -����
//
//	if ( i > sizeof(i)) {//sizeof()-�������/������ռ�ڴ��С ����>=0��Ϊ�޷�����
//		printf(">\n");
//	}
//	if (i  < sizeof(i)) {
//
//		printf("<\n");
//	}
//	return 0;
//}

//int main() {
//
//	int a = 0x11223344;
//	char* pc = (char*)&a; //�洢���ڴ���Ϊ 44 33 22 11 �������ʱ�ᵹ�����
//	*pc = 0;//����ָ������Ϊcharʱ������ֻ�ı���һ���ֽڵ�ֵ��Ҳ���ǽ� 44 ��Ϊ 00 
//	printf("%x\n",a);//������Ϊ�� 11 22 33 00 
//
//	return 0;
//}

//void Print(int arr[], int sz) {
//	int i = 0;
//	for (int i = 0; i < sz; i++) {
//		printf("%d  ", arr[i]);
//	}
//	printf("\n");
//}
//
//
//int main() {
//	int i = 0;
//	int arr1[4] = {1,3,5,7};
//	int arr2[4] = {2,4,6,8};
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	
//	for (int i = 0; i < sz; i++) {
//		int tem = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tem;
//	}
//
//	Print(arr1,sz);
//	Print(arr2,sz);
//
//	
//	return 0;
//
//}

//void init(int arr[],int sz) {
//
//	int i = 0; 
//	for (int i = 0; i < sz; i++) {
//	      
//		arr[i] = 0;
//	}
//}
//
//void Print(int arr[],int sz) {
//	int i = 0;
//	for (int i = 0; i < sz;i++) {
//		printf("%d  ",arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[],int sz) {
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right) {
//		int tem = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tem;
//		left++;
//		right--;
//	}
//}
//
//int main() {
//    
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr,sz);
//	Print(arr, sz);
//
//	reverse(arr,sz);
//	Print(arr, sz);
//	return 0;
//}