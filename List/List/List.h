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

//初始化链表
ListNode* InitList();

//创建一个新节点
ListNode* addListNode(LTDataType x);

//尾插
void ListNodePushBack(ListNode* phead, LTDataType x);

//头插
void ListNodePushFront(ListNode* phead, LTDataType x);

//头删
void ListNodePopFront(ListNode* phead);

//尾删
void ListNodePopBack(ListNode* phead);

//打印链表
void PrintListNode(ListNode* phead);

//在pos位置之前插入新节点
void ListInsert(ListNode* pos, LTDataType x);

//删除pos位置的节点
void ListErase(ListNode* pos);

//判断链表是否为空
bool ListEmpty(ListNode* phead);





