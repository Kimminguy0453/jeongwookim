#include <conio.h>
#include"Add.h"
#include"Max.h"
#include"Min.h"
#include"Add.cpp"
#include"Max.cpp"
#include"Min.cpp"


void main()
{
	int num1, num2, num3;
	cout << "���� ���� �Է��ϼ��� : ";
	cin >> num1;

	Add<int> add(num1);

	cout << "���ϰ� ���� ��ŭ <Enter> Ű�� �����ּ��� (�ٸ� Ű�� ������ ����˴ϴ�.)" << endl;

	while (getch() == 13)
	{
		add.add();

		add.Print();
	}

	cout << "(�ּҰ�) ���� �� ���� �Է��ϼ��� : ";
	cin >> num1 >> num2;

	Min<int> min(num1, num2);

	min.Calc();


	cout << "(�ִ밪) ���� �� ���� �Է��ϼ��� : ";
	cin >> num1 >> num2 >> num3;

	Max<int> max(num1, num2, num3);

	max.Calc();
}

//�������� �� �� ��� ������ �߻��Ѵ�.
//�̴� ���ø� Ŭ������ ���� �ٸ� �ҽ����Ͽ� ����ֱ� �����ε�,
//����� �ҽ��� ���ϴ����� �������ϸ鼭 ���� �����ϰ� ���� �ʾ� ������ �߻��Ѵ�.
//�ذ�å���δ� '����� ���ø� Point�� �����ڿ� ����Լ��� ���Ǹ� ��� �ִ´�' �� �� ����� �� �� �ְ�,
//�̰��� �ȴٸ� main �ҽ� ���Ͽ� #include ���� �ϳ� �� �߰��Ͽ� Point ���ø� Ŭ������ �ҽ�(.cpp) ������ �����;� �Ѵ�.
//������ ����� ���� �̻��� �� ������, ���ø��� ��쿡�� ��� ������ �ҽ����Ͽ� �����ؾ� �ϱ� ������ �׷��� �ؾ� �Ѵ�.