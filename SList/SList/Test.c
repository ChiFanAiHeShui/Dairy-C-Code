#define _CRT_SECURE_NO_WARNINGS

#include "SList.h"

void Test1(){

	SLTNode* n1 = (SLTNode*)malloc(sizeof(SLTNode));
	assert(n1);
	SLTNode* n2 = (SLTNode*)malloc(sizeof(SLTNode));
	assert(n2);
	SLTNode* n3 = (SLTNode*)malloc(sizeof(SLTNode));
	assert(n3);
	SLTNode* n4 = (SLTNode*)malloc(sizeof(SLTNode));
	assert(n4);

	n1->data = 1;
	n2->data = 2;
	n3->data = 3;
	n4->data = 4;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;

	SListPrint(n1);

}

void Test2() {

	SLTNode* plist = NULL;//当链表最初为空的时候，进行插入函数操作时需要传二级指针。
	SListPushBack(&plist, 5);
	SListPushBack(&plist, 4);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 1);
	SListPrint(plist);
}

void Test3()
{

	SLTNode* plist = NULL;
	SListPushFront(&plist, 5);
	SListPushFront(&plist, 4);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 1);
	SListPrint(plist);

}

void Test4() {
	SLTNode* plist = NULL;
	SListPushFront(&plist, 5);
	SListPushFront(&plist, 4);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 1);
	SListPrint(plist);



	SListPopBack(&plist);
	SListPrint(plist);
	SListPopBack(&plist);
	SListPrint(plist);





}

int main() {


	Test4();

	return 0;
}