#pragma once
#include"LinkedList.h"
#include<Windows.h>

void main()
{
	Node* head = NULL;
	Node* tail = NULL;

	int num = -1;

	while (num != 0)
	{
		system("cls");
		printf("����� ������\n");
		LRead(head);

		printf("�����ϰ��� �ϴ� ���ڸ� �Է��Ͻÿ�(0�� �Է��ϸ� ����) : ");
		scanf_s("%d", &num);

		if (num != 0)
			LInsert(&head, &tail, num);
	}

	system("cls");
	printf("����� ������\n");
	LRead(head);
	system("pause");

	system("cls");
	LRemove(head, tail);
}