#pragma once
#include "ArrayList.h"
#include<iostream>
using namespace std;

void main()
{
	List* list = new List;
	LData num;
	int sum = 0;

	ListInit(list);

	for (int i = 1; i <= 9; i++)
		LInsert(list, i);

	if (LFirst(list, &num))
	{
		sum += num;

		while (LNext(list, &num))
			sum += num;
	}

	cout << "����Ʈ ��ü ���� �� : " << sum << endl;

	if (LFirst(list, &num))
	{
		if (num % 2 == 0 || num % 3 == 0)
			LRemove(list);

		while (LNext(list, &num))
		{
			if (num % 2 == 0 || num % 3 == 0)
				LRemove(list);
		}
	}


	cout << "����Ʈ ��ü ������ ���" << endl;

	if (LFirst(list, &num))
	{
		cout << num << endl;

		while (LNext(list, &num))
			cout << num << endl;
	}

	delete list;
}