#include "LinkedList.h"


void LInsert(Node** head, Node** tail, int Data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = Data;
	newNode->next = NULL;
	if (*tail == NULL)
		*tail = newNode;
	else
		newNode->next = *head;
	*head = newNode;
}

void LRead(Node* head)
{
	if (head == NULL)
	{
		printf("����� �ڿ����� �������� �ʽ��ϴ�. \n");
	}
	else
	{
		Node* cur = head;
		printf("%d ", cur->data);
		while (cur->next != NULL)
		{
			cur = cur->next;
			printf("%d ", cur->data);
		}
		printf("\n");
	}
}

int LRemove(Node* head, Node* tail)
{
	if (head == NULL)
	{
		return 0;
	}
	else
	{
		Node* delNode = head;
		Node* delNextNode = head->next;
		printf("%d��(��) �����մϴ�. \n", head->data);
		free(delNode); // ù ��° Node����
		while (delNextNode != NULL) // �� ��° ���� Node ����
		{
			delNode = delNextNode;
			delNextNode = delNextNode->next;
			printf("%d��(��) �����մϴ�. \n", delNode->data);
			free(delNode);
		}
	}
}