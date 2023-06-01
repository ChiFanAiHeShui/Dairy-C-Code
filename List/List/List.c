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
	

	//直接利用哨兵位找到尾节点插入。
	//就算链表为空的时候也可以直接插入
	ListNode* newnode = addListNode(x);
	ListNode* tmp = phead->prev;
	phead->prev = newnode;
	newnode->next = phead;
	newnode->prev = tmp;
	tmp->next = newnode;


	/*
	* //先找到最后一个节点再尾插
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
	
	//phead不是头节点，是哨兵位。
	
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

	ListNode* tmp = phead->next;//先将需要删除的节点保存
	
	//再将哨兵位与头节点的下一个节点链接
	phead->next = phead->next->next;
	phead->next->next->prev = phead;

	free(tmp);//销毁需要删除的节点

}

void ListNodePopBack(ListNode* phead) {
	assert(phead);
	assert(!ListEmpty(phead));

	
	ListNode* tail = phead->prev;//先找到尾节点

	phead->prev = tail->prev;//修改哨兵位的prev指向尾节点的前一个节点

	tail->prev->next = phead;//修改尾节点的前一个节点的next指针

	free(tail);//这时，删除尾节点。

}


void ListInsert(ListNode* pos, LTDataType x){
	
	assert(pos);


	
	ListNode* newnode = addListNode(x);
	ListNode* prev = pos->prev;//prev是pos位置之前的一个节点
	                           //因为是双向链表，所以不需要遍历找pos位置的前一个节点，方便很多

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
