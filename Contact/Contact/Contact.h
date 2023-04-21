#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include <assert.h>

#define contact_MAX 1000
#define name_MAX 100
#define sex_MAX 5
#define tel_MAX 12
#define add_MAX 100

enum {

	EXIT,
	ADD,
	DEL,
	MOD,
	SEARCH,
	SORT,
	PRINT
};

//������
typedef struct PeoInfo{
	
	char name[name_MAX];
	char sex[sex_MAX];
	int age;
	char tel[tel_MAX];
	char add[add_MAX];

}PeoInfo;

//����ͨѶ¼
typedef struct Contact {

	PeoInfo data[contact_MAX];
	int num; //��¼ͨѶ¼�е�����

}Contact;


//��ʼ��ͨѶ¼
void InitContact(Contact* pc);


//����
void AddContact(Contact* pc);

//��ӡ
void PrintContact(Contact* pc);

//ɾ��
void DelContact(Contact* pc);

//��ѯ
void SearchContact(Contact* pc);