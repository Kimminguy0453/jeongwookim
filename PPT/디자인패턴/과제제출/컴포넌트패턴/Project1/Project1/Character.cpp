#include "Character.h"



Character::Character()
{
	 attack = 5;
	 defence = 5;
	health= 5;
}

void Character::AddItem(Item* item)
{
	ItemList.push_back(item);
}

void Character::RemoveItem(Item* item)
{
	list<Item*>::iterator remove = find(ItemList.begin(), ItemList.end(), item);

	if (remove != ItemList.end())
	{
		ItemList.erase(remove);
	}
}

int Character::GetAttackPoint()
{
	int totalAttackPoint = attack;

	list<Item*>::iterator begin = ItemList.begin();
	list<Item*>::iterator end = ItemList.end();

	while (begin != end)
	{
		totalAttackPoint +=	(*begin)->GetAttackPoint();

		begin++;
	}
	return totalAttackPoint;
}

int Character::GetDefencePoint()
{
	int totalDefencePoint = defence;

	list<Item*>::iterator begin = ItemList.begin();
	list<Item*>::iterator end = ItemList.end();

	while (begin != end)
	{
		totalDefencePoint += (*begin)->GetDefencePoint();

		begin++;
	}
	return totalDefencePoint;
}

int Character::GetHealthPoint()
{
	int totalHealthPoint = health;

	list<Item*>::iterator begin = ItemList.begin();
	list<Item*>::iterator end = ItemList.end();

	while (begin != end)
	{
		totalHealthPoint += (*begin)->GetHealthPoint();

		begin++;
	}
	return totalHealthPoint;
}


bool Character::GetItemListempty()
{
	return ItemList.empty();
}

void Character::GetItemName(int x, int y)
{
	list<Item*>::iterator begin = ItemList.begin();
	list<Item*>::iterator end = ItemList.end();
	int i = 1;

	m_DrawManager.gotoxy(x, y);
	cout << "���� ������ : ";
	if (!ItemList.empty())
	{
		while (begin != end)
		{
			cout << (*begin)->GetName() << endl;

			begin++;
			i++;
		}
	}
	else
		cout << "����";
	
}

void Character::unworn(int x, int y)
{
	int key_value;
	while (1)
	{
		if (kbhit())
		{
			key_value = getch();
			if (key_value == 'd')
			{
				if (ItemList.empty() == false)
				{
					ItemList.pop_back();
					View(x, y);
				}
			}
			else if (key_value == 13)
				break;
		}
	}
}

void Character::View(int x, int y)
{
	m_DrawManager.BoxErase(WIDTH, HEIGHT);
	m_DrawManager.gotoxy(x, y);
	cout << "�̸� : " << name << endl;
	m_DrawManager.gotoxy(x, y + 1);
	cout << "���ݷ� :  " << GetAttackPoint() << "\t����� : " << GetHealthPoint() << endl;
	m_DrawManager.gotoxy(x, y + 2);
	cout << "���� :  " << GetDefencePoint() << endl;
	GetItemName(x, y + 3);
	m_DrawManager.gotoxy(x, y + 5);
	cout << "'d'Ű�� ������ ��� ���� �˴ϴ�.";
	unworn(x, y);
	
}


Character::~Character()
{
	ItemList.clear();
}
