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

void SListPushBack(SLTNode** pphead, SLTDataType x) {//��������Ĳ�����Ҫ�ı�ָ��Ļ�����Ҫʹ�ö���ָ�롣
	
	SLTNode* newnode = CreateSListNode(x);

	if (*pphead == NULL) {//����Ϊ��ʱ���β��
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

	if ((*pphead)->next == NULL) {//һ���ڵ��βɾ
		
		free(*pphead);
		*pphead = NULL;

	}
	else {//����ڵ��βɾ
		
		SLTNode* tail = *pphead;
		while ((tail->next)->next != NULL) {
			tail = tail->next;
		}
		free(tail->next);//��β�ڵ��е�����ɾ��

		tail->next = NULL;//��β�ڵ�ĵ�ַ��ֵΪnull,��ֹ�ٴα����ó�ΪҰָ�롣

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