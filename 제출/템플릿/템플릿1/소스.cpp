#pragma once
#include"Add.h"
#include"Max.h"
#include"Min.h"
#include <conio.h>

template <typename Type>
void main()
{
	Add<Type> add;
	Min<Type> min;
	Max<Type> max;

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