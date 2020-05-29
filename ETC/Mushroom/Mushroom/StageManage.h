#pragma once
#include"List.h"
#include"BSTree.h"
#include"AllChamp.h"
#include"AllObj.h"
class StageManage
{
private:
	Player* m_Player;
	List<Enemy*> m_Enemy;
	BSTree m_Block;
	BSTree m_Bush;
	List<Switch*> m_Switch;
	List<Projectile*> m_Projectile;
	List<Trap*> m_Trap;
public:
	void TimeCheck();
	void MoveCheck();
	void SwitchCheck();
	void TrapCheck();
};

//������ �÷����� ������ ����ġ �۵� ����
//����ġ - �ڽ��� ��ǥ�� ������Ʈ�� �����ϴ°� üũ?