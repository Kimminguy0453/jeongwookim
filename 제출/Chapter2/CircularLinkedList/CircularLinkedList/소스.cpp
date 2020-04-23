#pragma once
#include"CircularLinkedList.h"
#include<stdlib.h>
#include<time.h>

void main()
{
	srand((unsigned)time(NULL));

	char name[NAMELEN];

	List* list = new List;
	ListInit(list);

	for (char i = 'a'; i <= 'd'; i++)
	{
		sprintf_s(name, "%c", i);
		LInsert(list, CreateEmp(i, name), TRUE);
	}

	LData data;
	cout << "���� ��ü ����" << endl;
	LFirst(list, &data);
	ShowEmp(data);

	for (int i = 1; i < LCount(list); i++)
	{
		LNext(list, &data);
		ShowEmp(data);
	}

	system("pause");
	system("cls");

	int check = FALSE;
	int num;
	cout << "�̸� �˻� : ";
	cin >> name;

	cout << "��¥ �Է� : ";
	cin >> num;

	LFirst(list, &data);
	if (strcmp(name, data->Name) == 0)
		check = TRUE;
	else
	{
		for (int i = 1; i < LCount(list); i++)
		{
			LNext(list, &data);
			if (strcmp(name, data->Name) == 0)
			{
				check = TRUE;
				break;
			}
		}
		
	}

	if (!check)
		cout << "ã���� �ϴ� ������ �����ϴ�.";
	else
	{
		for (int i = 0; i < num; i++)
			LNext(list, &data);

		cout << name << " ������ ���� �ٹ� " << num << "�� ���� ���� �ٹ��ڴ� " << data->Name << " ���� �Դϴ�." << endl;
	}

	while (LCount(list) > 0)
	{
		LFirst(list, &data);
		delete LRemove(list);
	}
}