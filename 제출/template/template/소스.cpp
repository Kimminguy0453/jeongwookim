#pragma once
#include <conio.h>
#include"Add.h"
#include"Max.h"
#include"Min.h"


void main()
{
	int num1, num2, num3;
	cout << "���� ���� �Է��ϼ��� : ";
	cin >> num1;

	Add<int> add(num1);

	cout << "���ϰ� ���� ��ŭ <Enter> Ű�� �����ּ��� (�ٸ� Ű�� ������ ����˴ϴ�.)" << endl;

	while (getch() != 13)
		add.add();

	add.Print();

	cout << "(�ּҰ�) ���� �� ���� �Է��ϼ��� : ";
	cin >> num1 >> num2;

	Min<int> min(num1, num2);

	min.Calc();


	cout << "(�ִ밪) ���� �� ���� �Է��ϼ��� : ";
	cin >> num1 >> num2 >> num3;

	Max<int> max(num1, num2, num3);

	max.Calc();
}