#pragma once
#include"CardList.h"
#include<string.h>

bool Search(List* list, LData* data, char name[])
{
	if (LFirst(list, data))
	{
		if (NameCompare(*data, name))
			return true;
		else
		{
			while (LNext(list, data))
			{
				if (NameCompare(*data, name))
					return true;
			}
		}
	}
	return false;
}

void main()
{
	CardList* Cl = new CardList;
	ListInit(Cl);

	NameCard* tmp;
	int num;
	char name[NAME_LEN];
	char phone[PHONE_LEN];

	cout << "������ �����Ϸ��� �ο� ���� �Է��Ͻÿ� : ";
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		system("cls");
		cout << i << "��° ���� �Է�" << endl;
		cout << "�̸� : ";
		cin >> name;
		cout << "��ȭ��ȣ : ";
		cin >> phone;

		LInsert(Cl, MakeNameCard(name, phone));
	}

	system("cls");

	cout << "ã�����ϴ� �̸��� �Է��Ͻÿ� : ";
	cin >> name;

	if (Search(Cl, &tmp, name))
		ShowNameCardInfo(tmp);
	else
	{
		cout << "�ش��ϴ� �̸��� ã�� �� �����ϴ�." << endl;
		system("pause");
	}
	system("cls");

	cout << "������ ������ ����� �̸��� �Է��Ͻÿ� : ";
	cin >> name;

	if (Search(Cl, &tmp, name))
	{
		cout << "��ȭ��ȣ�� �Է��Ͻÿ� : ";
		cin >> phone;
		ChangePhoneNum(tmp, phone);

		ShowNameCardInfo(tmp);
	}
	else
	{
		cout << "�ش��ϴ� �̸��� ã�� �� �����ϴ�." << endl;
		system("pause");
	}

	system("cls");

	cout << "������ ����� �̸��� �Է��Ͻÿ� : ";
	cin >> name;

	if (Search(Cl, &tmp, name))
	{
		LRemove(Cl);
		cout << "������ ���� �Ϸ�" << endl;
		system("pause");
	}
	else
	{
		cout << "�ش��ϴ� �̸��� ã�� �� �����ϴ�." << endl;
		system("pause");
	}

	if (LFirst(Cl, &tmp))
	{
		ShowNameCardInfo(tmp);

		while (LNext(Cl, &tmp))
			ShowNameCardInfo(tmp);
	}


	while (LCount(Cl) > 0)
	{
		LFirst(Cl, &tmp);
		LRemove(Cl);
	}
}