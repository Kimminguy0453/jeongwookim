#include "Min.h"


template <typename Type>
Min<Type>::Min()
{
}

template <typename Type>
void Min<Type>::Input()
{
	cout << "(�ּҰ�) ���� �� ���� �Է��ϼ��� : ";
	cin >> m_tType1 >> m_tType2;
}

template <typename Type>
void Min<Type>::Calc()
{
	cout << "�ּҰ� : ";
	if (m_tType1 <= m_tType2)
		cout << m_tType1 << endl;
	else
		cout << m_tType2 << endl;
}

template <typename Type>
Min<Type>::~Min()
{
}
