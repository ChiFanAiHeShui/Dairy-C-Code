#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>




int main() {

	int i = 0;
	char password[30] = {0};
	for (int i = 1; i < 4;i++) {
		printf("��������������\n");
		scanf("%s",password);
		if (strcmp(password,"123456" ) ==0 ) {
			printf("��ϲ����������ȷ��\n");
			break;
		}
	}
	if (i == 3) {
		printf("�����������������Ѿ��ﵽ���ޣ��˻��ѱ����ᣡ\n");
	}
	return 0;
}
//#include <string.h>
//#include <windows.h>
//
//
//int main() {
//    char arr1[30] = "Welcome to the World!";
//    char arr2[30] = "###################";
//
//    int left = 0;
//      //int right = (sizeof(arr1)/sizeof(arr[0])-2); ���У�
//     //����2��ԭ������Ϊ�ַ�����β��Ҫ��'\0'����ַ�.����ȫ����������������ֻ��һ��
//    int right = strlen(arr1)-1;//strlen���������ַ����ĳ��ȵĺ�������Ҫ��string����
//
//    while (left < right) {//��arr1���鸲��arr2����
//
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        printf("%s\n", arr2);
//        Sleep(1000);//�ó���������ͣ��һ�룬��������ĵ�λ�Ǻ��롣����Ҫ����window����
//        left++;
//        right--;
//    }
//    return 0;
//}

//int main() {//���ö��ַ����ҳ�һ�������е�ĳһ�����ҵ������±�
//	int arr1[20] = {0,1,2,3,4,5,6,7,8,9,10};
//	int j = 7;
//
//	int left = 0;
//	int right = (sizeof(arr1) / sizeof(arr1[0]) -1);
//
//	while (left <= right) {//ѭ����������left<=rightʱ��˵�������±�û�������
//		int mid = (left + right) / 2 ;//���ַ���Ҫ��������������mid�м�ֵ�����ң���ֵ����ѭ�����ϸ��¡�
//		                             //�ŵ㣺���Լ����ҹ���
//		
//		if (mid > j) {
//			right = mid - 1;
//		}
//		else if (mid < j) {
//			left = mid + 1;
//		}
//		else {
//			printf("�ҵ��ˣ���������±�Ϊ�� ---> %d\n", mid);//����ӡ�±���Ϊ7.
//			break;
//		}
//	}
//	if (left > right) {//˵�������±�����ˣ���������������û���ҵ����ҵ���
//		printf("û���ڸ��������ҵ���Ҫ�ҵ�������ȷ�Ϻ��ٴβ��ң�\n");
//	}
//	return 0;
//}


//int main() {
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int ret = 1;
//	for ( j = 1; j <= 3; j++) {//j<= 3 ����˼Ϊ��1�Ľ׳˼���2�Ľ׳˼���3�Ľ׳�
//		 ret = 1;//ÿ����ѭ�������󣬽�ret��ֵ���¸�ֵ��
//		 for (int i = 1; i <= j; i++) {
//				ret =(ret * i);
//		 } 
//		 sum = sum + ret;
//	}
//	printf("%d",sum);//���������Ϊ��9��Ϊ1�Ľ׳˼���2�Ľ׳˼���3�Ľ׳ˡ�
//	return 0;
//}
//
//
//int main() {
//	int i = 0;
//	do {
//		printf("%d ",i);//������Ϊ0 1 2 3 4 5 6 7 8 9
//		i++;
//	} while (i < 10);
//	return 0;
//}
// 

//int main() {
//	 //����ѭ��Ҫѭ�����ٴΣ�
//	int i = 0;
//	int j = 0;
//	                                    //��Ϊѭ��������ʹ���Ǹ�ֵ��������
//                                        //�жϣ��Ӷ�����k��ֵΪ0��Ϊ�٣��Ӷ������ж�ͨ�����ˣ��޷�ѭ����
//	for (int i = 0, k = 0; k = 0; i++,k++)//�𰸣�ѭ��0��
//		k++;
//	    return 0;
//}
//int main() {
//	int num1 = 0;
//	int num2 = 0;
//	for ( num1 = 0; num1 < 10; num1++) {
//		for (; num2 < 10; num2++ ) {//��д�˸���ʼ��num2�����bug
//			printf("Hello World!");//���ֻ�����ʮ�Σ�������һ�ٴΡ���Ϊ����ѭ��ѭ����һ�κ�
//			                       //num2��ֵΪ10��������ѭ��������ƥ�䡣
//		}
//	}
//	return 0;
//}
//
//
//int main() {
//	for (int i = 1; i < 10; i++){// forѭ�������е����������� ��ʼ��  �ж�  ���� 
//		if (i = 5) {//ע�⣺�����i�������жϣ����Ǹ�ֵ�����Իᵼ����ѭ����
//			continue;
//		}
//		printf("%d  ", i);//����ִ�в����ģ�����ѭ����
//	}
//	return 0;
//}
//
//int main() 
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF) {
//		if (ch < '0' || ch > '9') {
//			continue;
//			putchar(ch);//�������getchar���յ����ַ�
//		}
//	}
//	return 0;
//}

//int main() {//getchar�����ļ�Ӧ��
//	printf("�������������>:\n");
//	int ret = 0;
//	int num1 = 0;
//	int password[20] = {0};
//	scanf("%d",&password);
//	while ((num1 = getchar()) != '\n') {//getchar��������������һ���ַ��ġ�
//		;
//	}//���ã��������scanf���뺯�������Ҫ�õĻس����ķ���'\n'����Ȼ�����ret��������յ�'\n'
//	   //���»�ֱ����������ִ���жϡ�
//	printf("��ȷ���������룺(Y/N)>:");
//	ret = getchar();
//	if (ret == 'Y') {
//		printf("��ϲ����ȷ�ϳɹ���");
//	}
//	else if (ret == 'N') {
//	 printf("������˼��ȷ��ʧ�ܣ�");
//    }
//	return 0;
//}

//int main() {
//	int arr1[] = {1,2,3,4,5,6,7,8,9,10};
//	int j = 7;
//	
//	int left = 0;
//	int right = (sizeof(arr1) / sizeof(arr1[0])) - 1;
//	
//	
//	while (left <= right) {
//		
//		int mid = (left + right) / 2;
//		
//		if (arr1[mid] > j) {
//			right = mid - 1;
//		}
//		else if (arr1[mid] < j) {
//			left = mid + 1;
//		}
//		else {
//			printf("�ҵ��ˣ�j���±�Ϊ ---> %d\n ", mid);
//			break;
//		}
//	}
//
//	if (left > right ) {
//		printf("û���ҵ�������������������\n");
//	}
//
//	return 0;
//}
//int main() {//����������Ľ׳˲�������ĳ���
//    int i = 0;
//    int num1 = 0;
//    int sum = 1;
//    printf("������������׳˵���\n");
//    scanf("%d",&num1);
//    for (int i = 1; i <= num1; i++) {
//        sum = (sum * i);
//    }
//    printf("����Ľ��Ϊ��%d", sum);
//    return 0;
//}



//int main() {//����for������ӡ����1-10
//	int i = 0;
//	for (i = 1; i <= 10; i++) {
//
//
//		if (5 == i) {
//		
//			continue;//��ʾ��iΪ5ʱ�����������ѭ����Ȼ��ص�forѭ���ı������������ܷ����ѭ����
//			         //���ӡ���Ϊ��1 2 3 4 6 7 8 9 10
//		}
//
//		//if (5 == i) {
//		//	break;//��ʾ��iΪ5ʱ��ѭ��ֱ�ӽ��������Ҵ�ӡ���Ϊ1 2 3 4.
//		//}
//		printf("%d ", i);
//
//	}
//	return 0;
//}