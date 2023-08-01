#define _CRT_SECURE_NO_WARNINGS

#include "Queue.h"

void QueueInit(Queue* pq) {
	assert(pq);
	pq->head = NULL;
	pq->tail = NULL;
}
void QueueDestory(Queue* pq) {
	
	assert(pq);

	QNode* cur = pq->head;

	while (cur) {
		
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}
	pq->head = pq->tail = NULL;

}
void QueuePush(Queue* pq,QDataType x) {

	assert(pq);
	QNode* newnode = (QNode*)malloc(sizeof(QNode));//�����½ڵ㣬׼������
	
	if (newnode == NULL) {
		printf("malloc fail");
		exit(-1);
	}

	newnode->data = x;
	newnode->next = NULL;



	if (pq->tail == NULL) {//������Ϊ��
		pq->tail = pq->head = newnode;
	}
	else {//�����в�Ϊ��
		pq->tail->next = newnode;
		pq->tail = newnode;
	}
}
void QueuePop(Queue* pq) {

	assert(pq);
	assert(!QueueEmpty(pq));//Ϊ�յ�ʱ������ɾ����

	//ֻ��һ���ڵ��
	if (pq->head->next == NULL) {
		free(pq->head);
		pq->head = NULL;
		pq->tail = NULL;
	}
	else {//�ж���ڵ��
		QNode* tmp = pq->head->next;
		free(pq->head);
		pq->head = tmp;
	}


}
QDataType QueueFront(Queue* pq) {
	assert(pq);
	assert(!QueueEmpty(pq));
	return pq->head->data;
}

QDataType QueueBack(Queue* pq) {
	assert(pq);
	assert(!QueueEmpty(pq));
	return pq->tail->data;
}


bool QueueEmpty(Queue* pq) {
	
	assert(pq);
	return (pq->head == NULL);//Ϊ�յĻ���ôtail��head
	                          //������һ��Ϊ�գ�head����tail������
}

int QueueSize(Queue* pq) {
	
	assert(pq);
	QNode* cur = pq->head;
	int size = 0;
	while (cur) {

		++size;
		cur = cur->next;
	}
	return size;
}



