#pragma once
#include"Character.h"
#include"Queue.h"
class Enemy : public Character
{
private:
	Character* m_Target;
	Queue<Position> m_DestPos;
	int m_iSight;
public:
	Enemy(Position pos);
	bool MoveCheck();
	void Chase();
	void Navigate();
	Position CheckTargetInSight();
};


//�þ߿� ������ �߰�
//�þ� ������ ������ ���� ������ ��ġ���� �ν�
//5�ʰ� ��ã���� ��׷� ����