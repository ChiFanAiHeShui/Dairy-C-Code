#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	/*int ch = getchar();
	putchar(ch);*/

	int ch = 0;
	//ʹ�� Ctrl + Z ��ֹѭ��
	//EOF ---end of file --> -1(����Ϊ-1)
	while ((ch = getchar()) != EOF) {//��ʹ�ڿ���̨��ӡEOFҲ�����������Ϊgetchar����ÿ��ֻ���ж�һ���ַ����൱��
		//��E �� EOF ��һ�Σ����� O���� EOF ��һ�Σ� ���� F �� EOF ��һ���ˡ�
		putchar(ch);
	}
	return 0;
}

//int main() {
//	int i = 1;
//	while (i <= 10) {
//
//
//		if (i == 5) {
//			continue;//����ѭ����������ת��while������ж����Ƿ��ܽ�����һ��ѭ����
//		}
//		printf("%d  ", i);//���Ϊ ��ѭ������ӡ��1 2 3 4����һֱѭ����
//		//��i++�ŵ�if���ǰ�����ӡ���Ϊ 1 2 3 4 6 7 8 9 10 
//		i++;
//	}   
//		return 0;
//	
//}
//
//int main() {
//    int i = 1;
//    while (i <= 10) {
//    
//        if (5 == i) {
//	break;//������ֹ����ѭ����ֱ�ӽ�����
//		}
//		printf("%d  ",i);//���Ϊ 1 2 3 4 
//		i++;
//    }
//    return 0;
//}

//int main() {
//
//  ����whileѭ����ӡ��1-10
//	int i = 1;
//	while (i <= 10) {   
//		printf("%d  ",i);//���Ϊ 1 2 3 4 5 6 7 8 9 10 
//		i++;
//	}
//	return 0;
//}








//С����С����
//int main(){
// 
//	int num = 0;
//	printf("��ӭ���ٱ�С����\n");
//	printf("��С������ʳ��1.���ȳ� 2.С��è�ɴ��� 3.��ܽ����˿���ɿ��� 4.��̳���ţ���� 5.������\n");
//	printf("����������Ӧ�������������Ӧ����Ʒ��лл������ϣ�\n");
//	scanf("%d",&num);
//	switch (num) {
//	   case 1:
//		  printf("�������Ļ��ȳ�����ëǮ��\n");
//		  break;
//	   case 2:
//		  printf("��������С��è�ɴ��棬����Ǯ��\n");
//		  break;
//	   case 3:
//		  printf("�������ĵ�ܽ����˿���ɿ��������Ǯ��\n");
//		  break;
//	   case 4:
//		  printf("����������̳���ţ���� �����Ǯ��\n");
//		  break;
//	   case 5:
//		  printf("�������������ǣ�һ��Ǯ��\n");
//		  break;
//	   default : 
//		   printf("���ã���С��û��������Ʒ����ȷ�Ϻ��ٴι���");
//		   break;
//	};
//	return 0;
//}
