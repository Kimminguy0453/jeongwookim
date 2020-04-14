#include "LinkedList.h"



void LRead(Node* head)
{
	if (head == NULL)
	{
		printf("����� �ڿ����� �������� �ʽ��ϴ�. \n");
	}
	else
	{
		Node* cur = head;
		cout<< cur->data;
		while (cur->next != NULL)
		{
			cur = cur->next;
			cout << cur->data;
		}
		cout << endl;
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