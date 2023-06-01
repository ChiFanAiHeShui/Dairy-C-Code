#define _CRT_SECURE_NO_WARNINGS
#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

typedef  int  LTDataType;

typedef struct ListNode {

	LTDataType val;
	struct ListNode* prev;
	struct ListNode* next;

}ListNode;

//��ʼ������
ListNode* InitList();

//����һ���½ڵ�
ListNode* addListNode(LTDataType x);

//β��
void ListNodePushBack(ListNode* phead, LTDataType x);

//ͷ��
void ListNodePushFront(ListNode* phead, LTDataType x);

//ͷɾ
void ListNodePopFront(ListNode* phead);

//βɾ
void ListNodePopBack(ListNode* phead);

//��ӡ����
void PrintListNode(ListNode* phead);

//��posλ��֮ǰ�����½ڵ�
void ListInsert(ListNode* pos, LTDataType x);

//ɾ��posλ�õĽڵ�
void ListErase(ListNode* pos);

//�ж������Ƿ�Ϊ��
bool ListEmpty(ListNode* phead);





