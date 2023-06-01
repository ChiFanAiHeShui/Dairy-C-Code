#define _CRT_SECURE_NO_WARNINGS
#include "List.h"


ListNode* InitList(){
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));

	if (newnode) {
		newnode->next = newnode;
		newnode->prev = newnode;
	}
	else {
		perror("malloc fail");
		return NULL;
	}

	return newnode;
	
}


ListNode* addListNode(LTDataType x) {

	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	
	if (newnode) {
		newnode->next = NULL;
		newnode->prev = NULL;
		newnode->val = x;
	}
	else {

		perror("malloc fail");
		return NULL;
	}
	
	return newnode;

}


void ListNodePushBack(ListNode* phead, LTDataType x) {
	

	//ֱ�������ڱ�λ�ҵ�β�ڵ���롣
	//��������Ϊ�յ�ʱ��Ҳ����ֱ�Ӳ���
	ListNode* newnode = addListNode(x);
	ListNode* tmp = phead->prev;
	phead->prev = newnode;
	newnode->next = phead;
	newnode->prev = tmp;
	tmp->next = newnode;


	/*
	* //���ҵ����һ���ڵ���β��
	ListNode* newnode = addListNode(x);
	
	struct ListNode* tail = phead;
	
	while (tail->next != phead) {
		
		tail = tail->next;

	}

	newnode->next = phead;
	phead->prev = newnode;
	newnode->prev = tail;
	tail->next = newnode;*/

}


void PrintListNode(ListNode* phead) {

	struct ListNode* cur = phead->next;

	while (cur->next != phead) {

		printf("%d-->", cur->val);
		cur = cur->next;

	}
	printf("%d-->NULL", cur->val);
}


void ListNodePushFront(ListNode* phead, LTDataType x) {
	
	//phead����ͷ�ڵ㣬���ڱ�λ��
	
	ListNode* newnode = addListNode(x);
	newnode->next = phead->next;
	phead->next->prev = newnode;
	phead->next = newnode;
	newnode->prev = phead;
	        
}

bool ListEmpty(ListNode* phead) {
	assert(phead);

	return phead->next == phead;
}


void ListNodePopFront(ListNode* phead) {
	
	assert(phead);
	assert(!ListEmpty(phead));

	ListNode* tmp = phead->next;//�Ƚ���Ҫɾ���Ľڵ㱣��
	
	//�ٽ��ڱ�λ��ͷ�ڵ����һ���ڵ�����
	phead->next = phead->next->next;
	phead->next->next->prev = phead;

	free(tmp);//������Ҫɾ���Ľڵ�

}

void ListNodePopBack(ListNode* phead) {
	assert(phead);
	assert(!ListEmpty(phead));

	
	ListNode* tail = phead->prev;//���ҵ�β�ڵ�

	phead->prev = tail->prev;//�޸��ڱ�λ��prevָ��β�ڵ��ǰһ���ڵ�

	tail->prev->next = phead;//�޸�β�ڵ��ǰһ���ڵ��nextָ��

	free(tail);//��ʱ��ɾ��β�ڵ㡣

}


void ListInsert(ListNode* pos, LTDataType x){
	
	assert(pos);


	
	ListNode* newnode = addListNode(x);
	ListNode* prev = pos->prev;//prev��posλ��֮ǰ��һ���ڵ�
	                           //��Ϊ��˫���������Բ���Ҫ������posλ�õ�ǰһ���ڵ㣬����ܶ�

	prev->next = newnode;
	newnode->prev = prev;

	newnode->next = pos;
	pos->prev = newnode;

}


void ListErase(ListNode* pos) {
	
	assert(pos);

	ListNode* prev = pos->prev;
	ListNode* tail = pos->next;

	prev->next = tail;
	tail->prev = prev;
	free(pos);

}
