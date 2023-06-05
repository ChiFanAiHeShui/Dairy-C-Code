#define _CRT_SECURE_NO_WARNINGS
#include "Stack.h"

void StackInit(ST* ps) {
	
	assert(ps);
	ps->a = NULL;
	ps->top = 0;//top如果是从0开始，那么每次top指向的是插入节点的后一个位置处
	ps->capacity = 0;

}

void StackDestory(ST* ps) {
	
	assert(ps);
	free(ps->a);//初始化ps->a数组里面存储的数组
	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;

}

void StackPush(ST* ps, STDataType x) {

	assert(ps);

	if (ps->capacity == ps->top) {

		int newcapacity = (ps->capacity == 0) ? 4 : ps->capacity * 2;
		STDataType* tmp = (STDataType*)realloc(ps->a, newcapacity * sizeof(STDataType));
		if (tmp == NULL) {
			printf("realloc fail");
			exit(-1);
		}
		else {
			ps->a = tmp;
			ps->capacity = newcapacity;
		}

	}
	
		ps->a[ps->top] = x;
		ps->top++;
	

}

void StackPop(ST* ps) {
	
	assert(ps);
	assert(!StackEmpty(ps));

	ps->top--;

}

STDataType StackTop(ST* ps) {
	
	assert(ps);
	assert(!StackEmpty(ps));

	
    return ps->a[ps->top-1];

}

bool StackEmpty(ST* ps) {

	assert(ps);
	return ps->top == 0;
}

int StackSize(ST* ps) {
	assert(ps);
	return ps->top;
}

void StackPrint(ST* ps){
	
	assert(ps);

	while (ps->top != 0) {
		ps->top--;
		printf("%d ", ps->a[ps->top]);

	}

}