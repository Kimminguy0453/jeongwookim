#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;

class Study
{
private:
	int m_iDay;
	int m_iHour;
	int m_iMinute;
public:
	Study()
	{
		m_iHour = 0;
		m_iMinute = 0;
		m_iDay = 1;
	}
	Study(int hour, int minute)
	{
		m_iHour = hour;
		m_iMinute = minute;
		while (m_iMinute >= 60)
		{
			m_iHour++;
			m_iMinute -= 60;
		}
		m_iDay = 1;
	}
	void ShowTime()
	{
		cout << " �� ���� �ð� : " << m_iHour << " : " << m_iMinute << endl;
		cout << "=====���� �ð� ���� ���α׷�(" << m_iDay << "Day)=====" << endl;
	}
	Study operator + (Study today);
};

Study Study::operator+(Study today)
{
	today.m_iHour += this->m_iHour;
	today.m_iMinute += this->m_iMinute;
	today.m_iDay += this->m_iDay;
	while (today.m_iMinute >= 60)
	{
		today.m_iHour++;
		today.m_iMinute -= 60;
	}
	return today;
}

void main()
{
	Study total;
	Study* today;
	int Select = 0;
	int hour;
	int minute;

	while (1)
	{
		system("cls");
		total.ShowTime();
		cout << "		1.�ð� ���" << endl;
		cout << "		2.����" << endl;
		cout << "		�Է� : ";
		cin >> Select;

		switch (Select)
		{
		case 1:
			cout << "�ð� : ";
			cin >> hour;
			cout << "�� : ";
			cin >> minute;
			today = new Study(hour, minute);
			total = total + *today;
			delete today;
			break;
		case 2:
			return;
		}
	}
}