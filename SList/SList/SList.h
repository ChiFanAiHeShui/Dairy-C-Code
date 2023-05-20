#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLTDataType;//�����е�������ʲô���;͸ĳ�ʲô����

typedef struct SListNode {

	SLTDataType data;
	struct SListNode* next;
	
}SLTNode;

//�����ӡ
void SListPrint(SLTNode* phead);

//����һ������ڵ�
SLTNode* CreateSListNode(SLTDataType x);

//����β��
void SListPushBack(SLTNode** pphead, SLTDataType x);

//����ͷ��
void SListPushFront(SLTNode** pphead,SLTDataType x);


//����βɾ
void SListPopBack(SLTNode** pphead);

//����ͷɾ
void SListPopFront(SLTNode** pphead);

//����Ԫ��
SLTNode* SListFind(SLTNode* phead,SLTDataType x);

//��posλ��֮ǰ����
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);

//ɾ��posλ�õ�ֵ
void SListErase(SLTNode** pphead, SLTNode* pos);




