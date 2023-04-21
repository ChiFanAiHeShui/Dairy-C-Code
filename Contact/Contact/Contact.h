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

//定义人
typedef struct PeoInfo{
	
	char name[name_MAX];
	char sex[sex_MAX];
	int age;
	char tel[tel_MAX];
	char add[add_MAX];

}PeoInfo;

//定义通讯录
typedef struct Contact {

	PeoInfo data[contact_MAX];
	int num; //记录通讯录中的人数

}Contact;


//初始化通讯录
void InitContact(Contact* pc);


//增加
void AddContact(Contact* pc);

//打印
void PrintContact(Contact* pc);

//删除
void DelContact(Contact* pc);

//查询
void SearchContact(Contact* pc);