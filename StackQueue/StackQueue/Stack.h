#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>


typedef int STDataType;

typedef struct Stack {

	STDataType* a;
	int top;
	int capacity;

}ST;

void StackInit(ST* ps);

void StackDestory(ST* ps);

void StackPush(ST* ps,STDataType x);

void StackPop(ST* ps);

STDataType StackTop(ST* ps);

bool StackEmpty(ST* ps);

int StackSize(ST* ps);

void StackPrint(ST* ps);
