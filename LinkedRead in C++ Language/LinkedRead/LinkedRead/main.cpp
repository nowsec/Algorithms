#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
	int data;
	struct _node * next;
} Node;

int main()
{
	Node* head = NULL;
	Node* tail = NULL;
	Node* cur = NULL;

	Node* newNode = NULL;
	int readData;

	// Data Input Process//
	while (1)
	{
		printf("Input Number : ");
		scanf_s("%d", &readData);
		if (readData < 1)
			break;

		newNode = (Node*)malloc(sizeof(Node));
		newNode->data = readData;
		newNode->next = NULL;

		if (head == NULL)
			head = newNode;
		else
			tail->next = newNode;

		tail = newNode;
	}
	printf("\n");

	printf("Print All Data! \n");
	if (head == NULL)
	{
		printf("There is no values");
	}
	else
	{
		cur = head;
		printf("%d ", cur->data);

		while (cur->next != NULL)
		{
			cur = cur->next;
			printf("%d ", cur->data);
		}
	}
	printf("\n\n");

	// Free Melory ///////
	if (head == NULL)
	{
		return 0;
	}
	else
	{
		Node * delNode = head;
		Node * delNextNode = head->next;

		printf("%d will be deleted \n", head->data);
		free(delNode);

		while (delNextNode != NULL)
		{
			delNode = delNextNode;
			delNextNode = delNextNode->next;

			printf("%d will be deleted \n", delNode->data);
			free(delNode);
		}
	}
	return 0;
}