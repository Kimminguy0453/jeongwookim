#pragma once
#include"List.h"
#include"BSTree.h"
#include"AllChamp.h"
#include"AllObj.h"
class StageManage
{
private:
	int m_istage;
	Position m_Goal;
	Player* m_Player;
	List<Enemy*> m_Enemy;
	List<Projectile*> m_Projectile;
	BSTree m_Block;
	BSTree m_Bush;
	BSTree m_Switch;
	BSTree m_Trap;
	BSTree m_Door;
public:
	StageManage(int stage);
	void TimeProgress();
	void MoveCheck();
	void StatusCheck();
	void SwitchCheck();
	void TrapCheck();
	void HitCheck();
	void EndCheck();
	void Restoration(Object* target);
	~StageManage();
};

//������ �÷����� ������ ����ġ �۵� ����
//����ġ - �ڽ��� ��ǥ�� ������Ʈ�� �����ϴ°� üũ?