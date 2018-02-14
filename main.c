#include "Stack.h"
#include "UserDataType.h"

int main()
{
	tNode *top = CreateStack();
	int CaseNumber;
	UserDataType data;

	printf("Choose the next operation:\n0 - Exit\n1 - Push\n2 - Pop\n3 - Check if Stack is empty\n4 - Check if Stack is full\n5 - Look at the value of top element without pop'ing it\n");

	scanf("%d",&CaseNumber);
	while(CaseNumber != 0)
	{
		switch(CaseNumber)
		{
			case 1:
				printf("Enter data to be pushed\n");
				scanf(Placeholder,&data);
				Push(&top,data);
				break;

			case 2:
				if(IsEmpty(top) != true)
				{
	
					data = Pop(&top);
					printf(ConcatenateWithPlaceholder("You just pop'ed "),data);
					printf("\n");
				}

				else
					printf("You are pop'ing from an empty stack!\n");
				break;

			case 3:
				if(IsEmpty(top))
					printf("Stack is empty!\n");
				else
					printf("Stack isn't empty!\n");
				break;

			case 4:
				if(IsFull())
					printf("Stack is full!\n");
				else
					printf("Stack isn't full!\n");
				break;
			case 5:
				if(IsEmpty(top) != true)
				{
					data = Peek(top);
					printf(ConcatenateWithPlaceholder("Data at the top of the Stack is "),data);
					printf("\n");					
				}

				else
					printf("Stack is empty!\n");

				break;
		}

		printf("Choose the next operation: ");
		scanf("%d",&CaseNumber);
		printf("\n");
	}

	RemoveStack(top);

	return 0;
}