#include "Weapon.h"



Weapon::Weapon()
{
	m_pParent = NULL;
}

void Weapon::SetName(string name)
{
	m_strName = name;
}

void Weapon::SetType(string type)
{
	m_strType = type;
}

void Weapon::SetAtk(int atk)
{
	m_iAtk = atk;
}

void Weapon::SetPrice(int price)
{
	m_iPrice = price;
}

void Weapon::SetParent(Weapon* weapon)
{
	m_pParent = weapon;
}

void Weapon::ShowInfo_Shop(int line)
{
	DrawManager.DrawMidText("���� : " + to_string(m_iPrice) + " ����Ÿ�� : " + m_strType, WIDTH, line++);
	DrawManager.DrawMidText("�����̸� : " + m_strName + " ���ݷ� : " + to_string(m_iAtk), WIDTH, line);
}

void Weapon::ShowInfo(int line)
{
	DrawManager.DrawMidText("����Ÿ�� : " + m_strType + " �����̸� : " + m_strName + " ���ݷ� : " + to_string(m_iAtk), WIDTH, line);
}

void Weapon::Clear()
{
}



Weapon::~Weapon()
{
}


void WpList::AddWeapon(Weapon* wp)
{
	m_Weapon.push_back(wp);
}

void WpList::RemoveWeapon(Weapon* wp)
{
	list<Weapon*>::iterator remove = find(m_Weapon.begin(), m_Weapon.end(), wp);

	if (remove != m_Weapon.end())
	{
		m_Weapon.erase(remove);
		delete wp;
	}

}