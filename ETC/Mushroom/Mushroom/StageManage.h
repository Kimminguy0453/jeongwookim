#pragma once
#include"List.h"
#include"BSTree.h"
#include"AllChamp.h"
#include"AllObj.h"
class StageManage
{
private:
	int m_istage;
	Player* m_Player;
	List<Enemy*> m_Enemy;
	List<Projectile*> m_Projectile;
	BSTree m_Block;
	BSTree m_Bush;
	BSTree m_Switch;
	BSTree m_Trap;
public:
	StageManage(int stage);
	void TimeProgress();
	void MoveCheck();
	void StatusCheck();
	void SwitchCheck();
	void TrapCheck();
	~StageManage();
};

//������ �÷����� ������ ����ġ �۵� ����
//����ġ - �ڽ��� ��ǥ�� ������Ʈ�� �����ϴ°� üũ?