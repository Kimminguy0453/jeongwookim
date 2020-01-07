#include "Weapon.h"



Weapon::Weapon()
{
	m_pNextWeapon = NULL;
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

void Weapon::SetNextWeapon(Weapon* weapon)
{
	m_pNextWeapon = weapon;
}

void Weapon::ShowInfo_Shop(int line)
{
	DrawManager.DrawMidText("���� : " + to_string(m_iPrice) + " ����Ÿ�� : " + m_strType, WIDTH, line);
	DrawManager.DrawMidText("�����̸� : " + m_strName + " ���ݷ� : " + to_string(m_iAtk), WIDTH, ++line);
}

void Weapon::ShowInfo(int line)
{
	DrawManager.DrawMidText(" ����Ÿ�� : " + m_strType + "�����̸� : " + m_strName + " ���ݷ� : " + to_string(m_iAtk), WIDTH, line);
}

void Weapon::Clear()
{
	delete m_pNextWeapon;
	m_pNextWeapon = NULL;
}
Weapon::~Weapon()
{
}
