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
	QNode* newnode = (QNode*)malloc(sizeof(QNode));//创建新节点，准备插入
	
	if (newnode == NULL) {
		printf("malloc fail");
		exit(-1);
	}

	newnode->data = x;
	newnode->next = NULL;



	if (pq->tail == NULL) {//当队列为空
		pq->tail = pq->head = newnode;
	}
	else {//当队列不为空
		pq->tail->next = newnode;
		pq->tail = newnode;
	}
}
void QueuePop(Queue* pq) {

	assert(pq);
	assert(!QueueEmpty(pq));//为空的时候不能再删除了

	//只有一个节点的
	if (pq->head->next == NULL) {
		free(pq->head);
		pq->head = NULL;
		pq->tail = NULL;
	}
	else {//有多个节点的
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
	return (pq->head == NULL);//为空的话那么tail和head
	                          //至少有一个为空，head或者tail都可以
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



