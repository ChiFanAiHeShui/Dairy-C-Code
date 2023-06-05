#define _CRT_SECURE_NO_WARNINGS

#include "Stack.h"
#include "Queue.h"

void Test1() {
	ST st;
	StackInit(&st);
	StackPush(&st, 5);
	StackPush(&st, 4);
	StackPush(&st, 3);
	StackPush(&st, 2);
	StackPush(&st, 1);

	StackPrint(&st);

	/*while(!StackEmpty(&st)){
		printf("%d ", StackTop(&st));
		
		StackPop(&st);
	}*/


	
	StackDestory(&st);

}

void Test2() {
	Queue pq;
	QueueInit(&pq);
	QueuePush(&pq, 12);
	QueuePush(&pq, 10); 
	QueuePush(&pq, 11);

	printf("%d\n", QueueFront(&pq));
	printf("%d\n", QueueBack(&pq));
	

	
	


}

int main() {

	//Test1();
	Test2();

	return 0;
}