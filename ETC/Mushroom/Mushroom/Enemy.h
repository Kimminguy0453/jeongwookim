#pragma once
#include"Character.h"
class Enemy : public Character
{
private:
	Character* m_Target;
	Position m_DestPos;
	int m_iSight;
public:
	Enemy();
	void Chase();
	Position Navigate();
	Position CheckTargetInSight();
};


//�þ߿� ������ �߰�
//�þ� ������ ������ ���� ������ ��ġ���� �ν�
//5�ʰ� ��ã���� ��׷� ����