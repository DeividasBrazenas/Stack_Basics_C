#ifndef STACK
#define STACK

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include "UserDataType.h"

typedef struct Node
{
	UserDataType data;
	struct Node *next;
} tNode;

tNode* CreateStack();
void RemoveStack(tNode *top);
void Push(tNode **top, UserDataType data);
UserDataType Pop(tNode **top);
bool IsEmpty(tNode *top);
bool IsFull();
UserDataType Peek(tNode *top);
char* ConcatenateWithPlaceholder(const char *s1);

#endif