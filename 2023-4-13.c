#define _CRT_SECURE_NO_WARNINGS

//��ϰʹ�ÿ⺯����qsort����������͵�����

//#include<stdio.h>
//#include<stdlib.h>
//#include <string.h>
//
//struct Stu {
//	int id;
//	char name[20];
//	char sex[5];
//	float score;
//};
//
//
//int compare_int(const void* e1,const void* e2) {
//
//	return  *(int*)e1 - *(int*)e2;
//}
//
//int compare_char(const void* e1, const void* e2) {
//	return *(char*)e1 - *(char*)e2;
//}
//
//int compare_struct(const void* e1, const void* e2) {
//
//	return (((struct Stu*)e1)->id - ((struct Stu*)e2)->id);
//}
//
//int main() {
//
//	char arr1[18] = "safdndsadsfaevadf";
//	int arr2[9] = {12,3,2,5,455,42,35,25,354};
//	struct Stu arr3[3] = { {01,"����","��",85.5},{02,"����","��",20.2},{03,"С��","Ů",100.25}};
//
//	compare_int(arr2,arr2+1);
//	int len2 = sizeof(arr2) / sizeof(arr2[0]);
//	qsort(arr2, len2, sizeof(arr2[0]), compare_int);
//	int i = 0;
//	for (i = 0; i < len2; i++) {
//		printf("%d ", arr2[i]);
//	}
//	
//	printf("\n");
//
//	compare_char(arr1, arr1 + 1);
//	int len1 = strlen(arr1);
//	qsort(arr1, len1, sizeof(arr1[0]), compare_char);
//	for (i = 0; i < len1; i++) {
//		printf("%c ",arr1[i]);
//	}
//
//	printf("\n");
//	int len3 = 3;
//	compare_struct(arr3,arr3+1);
//	qsort(arr3, len3, sizeof(arr3[0]), compare_struct);
//
//	for (i = 0; i < len3; i++) {
//		printf("%d %s %s %lf\n", arr3[i].id, arr3[i].name, arr3[i].sex, arr3[i].score);
//	}
//	
//
//	return 0;
//}



//�ж������ַ����Ƿ���һ��������һ���ַ��������õ���

//#include <stdio.h>
//#include <string.h>
//
//void leftRound(char* src, int time)
//{
//	int len = strlen(src);
//	int pos = time % len; //�Ͽ�λ�õ��±�
//	char tmp[256] = { 0 }; //��׼ȷ�Ļ�����ѡ��malloc len + 1���ֽڵĿռ��������tmp
//
//	strcpy(tmp, src + pos); //�Ƚ������ȫ��������
//	strncat(tmp, src, pos); //Ȼ��ǰ�漸������
//	strcpy(src, tmp); //��󿽻�ȥ
//}
//
//int is_left_revolve(char* arr1, char* arr2) {
//
//	int len = strlen(arr1);
//	int i = 0;
//	for (i = 1; i <= len; i++) {
//		leftRound(arr1, i);
//		if (strcmp(arr1, arr2) == 0) {
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main() {
//
//	char arr1[] = "ABCDEF";
//	char arr2[] = "BCDEF"; 
//	
//
//	int ret = is_left_revolve(arr1, arr2);
//
//
//	if (ret == 1) {
//		printf("�����������\n");
//	}
//	else {
//		printf("�������������\n");
//	}
//	return 0;
//
//}

