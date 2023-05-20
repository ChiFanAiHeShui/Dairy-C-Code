#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLTDataType;//链表中的数据是什么类型就改成什么类型

typedef struct SListNode {

	SLTDataType data;
	struct SListNode* next;
	
}SLTNode;

//链表打印
void SListPrint(SLTNode* phead);

//创建一个链表节点
SLTNode* CreateSListNode(SLTDataType x);

//链表尾插
void SListPushBack(SLTNode** pphead, SLTDataType x);

//链表头插
void SListPushFront(SLTNode** pphead,SLTDataType x);


//链表尾删
void SListPopBack(SLTNode** pphead);

//链表头删
void SListPopFront(SLTNode** pphead);

//查找元素
SLTNode* SListFind(SLTNode* phead,SLTDataType x);

//在pos位置之前插入
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);

//删除pos位置的值
void SListErase(SLTNode** pphead, SLTNode* pos);




