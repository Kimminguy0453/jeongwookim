#pragma once
#include"Add.h"
#include"Max.h"
#include"Min.h"
#include <conio.h>

void main()
{
	Add<int> add;
	Min<int> min;
	Max<int> max;

	add.Input();

	cout << "���ϰ� ���� ��ŭ <Enter> Ű�� �����ּ��� (�ٸ� Ű�� ������ ����˴ϴ�.)" << endl;

	while (getch() != 13)
		add.add();

	add.Print();

	min.Input();
	min.Calc();

	max.Input();
	max.Calc();
}