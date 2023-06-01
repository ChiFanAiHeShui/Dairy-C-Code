#define _CRT_SECURE_NO_WARNINGS

#include "List.h"


void Test1() {
	ListNode* pl = InitList();

	ListNodePushBack(pl, 5);
	ListNodePushBack(pl, 4);
	ListNodePushBack(pl, 3);
	ListNodePushBack(pl, 2);
	ListNodePushBack(pl, 2);


	PrintListNode(pl);

}

void Test2() {
	ListNode* pl = InitList();
	ListNodePushFront(pl, 5);
	ListNodePushFront(pl, 4);
	ListNodePushFront(pl, 3);
	ListNodePushFront(pl, 2);
	ListNodePushFront(pl, 1);

	ListNodePopFront(pl);

	PrintListNode(pl);
}

void Test3() {

	
}

int main() {


	//Test1();
	//Test2();
	Test3();
	return 0;
}







