#include "Max.h"


template <typename Type>
Max<Type>::Max()
{
}

template <typename Type>
void Max<Type>::Input()
{
	cout << "(�ִ밪) ���� �� ���� �Է��ϼ��� : ";
	cin >> m_tType1 >> m_tType2 >> m_tType3;
}

template <typename Type>
void Max<Type>::Calc()
{
	Type tmp = m_tType1;

	if (tmp < m_tType2)
		tmp = m_tType2;
	if (tmp < m_tType3)
		tmp = m_tType3;

	cout << "�ִ밪 : " << tmp << endl;
}

template <typename Type>
Max<Type>::~Max()
{
}
