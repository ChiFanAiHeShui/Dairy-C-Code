#define _CRT_SECURE_NO_WARNINGS

#include "SList.h"

void SListPrint(SLTNode* phead) {

	assert(phead);
	SLTNode* cur = phead;

	while (cur->next != NULL) {
		printf("%d-->", cur->data);
		cur = cur->next;
	}
	printf("%d-->", cur->data);
	printf("NULL\n");

}

SLTNode* CreateSListNode(SLTDataType x){

	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	assert(newnode);
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}

void SListPushBack(SLTNode** pphead, SLTDataType x) {//如果函数的操作需要改变指针的话，需要使用二级指针。
	
	SLTNode* newnode = CreateSListNode(x);

	if (*pphead == NULL) {//链表为空时候的尾插
		*pphead = newnode;
	}
	else {

		SLTNode* tail = *pphead;

		while (tail->next != NULL) {
			tail = tail->next;
		}

		tail->next = newnode;
	}
}

void SListPushFront(SLTNode** pphead, SLTDataType x) {

	SLTNode* newnode = CreateSListNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}

void SListPopFront(SLTNode** pphead) {

	assert(*pphead);

	SLTNode* tmp = (*pphead)->next;
	free(*pphead);
	*pphead = tmp;

}


void SListPopBack(SLTNode** pphead) {
	 
	assert(*pphead);

	if ((*pphead)->next == NULL) {//一个节点的尾删
		
		free(*pphead);
		*pphead = NULL;

	}
	else {//多个节点的尾删
		
		SLTNode* tail = *pphead;
		while ((tail->next)->next != NULL) {
			tail = tail->next;
		}
		free(tail->next);//将尾节点中的内容删除

		tail->next = NULL;//将尾节点的地址赋值为null,防止再次被引用成为野指针。

	}
}


SLTNode* SListFind(SLTNode* phead, SLTDataType x) {
	
	
	SLTNode* tmp = phead;
	while (tmp) {

		if (tmp->data == x) {
			return tmp;
		  }
		tmp = tmp->next;
	}
	return NULL;
}