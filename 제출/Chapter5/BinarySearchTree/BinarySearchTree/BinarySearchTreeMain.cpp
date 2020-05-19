#pragma once
#include"BinarySearchTree.h"

void main()
{
	BTreeNode* Bt;
	BSTData data;

	BSTMakeAndInit(&Bt);

	cin >> data;

	while (data != 0)
	{
		BSTInsert(&Bt, data);
		cin >> data;
	}

	cout << "------" << endl;

	cin >> data;

	while (data != 0)
	{
		if (BSTSearch(Bt, data) == NULL)
			cout << "����� �������� �ʽ��ϴ�." << endl;
		else
			cout << "Ž����." << endl;

		cin >> data;
	}

	DeleteNode(&Bt);
}