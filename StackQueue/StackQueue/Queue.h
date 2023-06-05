#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int QDataType;

typedef struct QueueNode {//队列的定义，用指针来创建
	
	QDataType data;
	struct QueueNode* next;

}QNode;

typedef struct Queue {//直接另外建立两个指针用来指向队列的队头和队尾。
	                  //方便了很多，比如头插和头删，以及查找队头和队尾元素都方便多了
	                  //减少了遍历次数
	QNode* head;
	QNode* tail;
}Queue;

//队列的初始化
void QueueInit(Queue* pq);

//队列的销毁
void QueueDestory(Queue* pq);

//队列的加数据（只能尾插）
void QueuePush(Queue* pq, QDataType x);

//队列的删数据（只能头删）
void QueuePop(Queue* pq);

//找队头的节点
QDataType QueueFront(Queue* pq);

//找队尾的节点
QDataType QueueBack(Queue* pq);

//判断队列是否为空
bool QueueEmpty(Queue* pq);

//计算队列的节点个数
int QueueSize(Queue* pq);
