#include "Add.h"


template <typename Type>
Add<Type>::Add()
{
}

template <typename Type>
void Add<Type>::Input()
{
	cout << "���� ���� �Է��ϼ��� : ";
	cin >> m_tType;
}

template <typename Type>
void Add<Type>::add()
{
	cout << "�� 1 ����" << endl;
	m_tType++;
}

template <typename Type>
void Add<Type>::Print()
{
	cout << "������ �� : " << m_tType << endl;
}

template <typename Type>
Add<Type>::~Add()
{
}
