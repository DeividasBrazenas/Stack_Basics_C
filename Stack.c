#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <conio.h>
#include "Stack.h"
#include "UserDataType.h"

tNode* CreateStack()
{
	return NULL;
}

void RemoveStack(tNode *top)
{
	tNode *temp;

	while(top != NULL)
	{
		temp = top;
		top = top->next;
		free(temp);
	}
}

void Push(tNode **top, UserDataType data)
{
	tNode *temp = (tNode*)malloc(sizeof(tNode));
	temp->data = data;  

	temp->next = (*top);
	(*top) = temp;

}

UserDataType Pop(tNode **top)
{
	UserDataType data;
	tNode *temp = (*top);

	if((*top) == NULL)
	{
		printf("Stack is empty");
		return -1;
	}

	data = (*top)->data;
	(*top) = (*top)->next;
	free(temp);

	return data;
}

bool IsEmpty(tNode *top)
{
	if(top == NULL)
		return true;

	else
		return false;
}

bool IsFull()
{
	if((tNode*)malloc(sizeof(tNode)) == NULL)
		return true;

	return false;
}

UserDataType Peek(tNode *top)
{
	if(top == NULL)
	{
		printf("Stack is empty");
		return 0;
	}

	return top->data;
}

char* ConcatenateWithPlaceholder(const char *s1)
{
	char *result = malloc(strlen(s1)+strlen(Placeholder)+1);
	strcpy(result,s1);
	strcat(result,Placeholder);

	return result;
}