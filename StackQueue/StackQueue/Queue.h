#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int QDataType;

typedef struct QueueNode {//���еĶ��壬��ָ��������
	
	QDataType data;
	struct QueueNode* next;

}QNode;

typedef struct Queue {//ֱ�����⽨������ָ������ָ����еĶ�ͷ�Ͷ�β��
	                  //�����˺ܶ࣬����ͷ���ͷɾ���Լ����Ҷ�ͷ�Ͷ�βԪ�ض��������
	                  //�����˱�������
	QNode* head;
	QNode* tail;
}Queue;

//���еĳ�ʼ��
void QueueInit(Queue* pq);

//���е�����
void QueueDestory(Queue* pq);

//���еļ����ݣ�ֻ��β�壩
void QueuePush(Queue* pq, QDataType x);

//���е�ɾ���ݣ�ֻ��ͷɾ��
void QueuePop(Queue* pq);

//�Ҷ�ͷ�Ľڵ�
QDataType QueueFront(Queue* pq);

//�Ҷ�β�Ľڵ�
QDataType QueueBack(Queue* pq);

//�ж϶����Ƿ�Ϊ��
bool QueueEmpty(Queue* pq);

//������еĽڵ����
int QueueSize(Queue* pq);
