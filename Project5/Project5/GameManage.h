#pragma once
#include"Mecro.h"
#include"MapDraw.h"
#include"Character.h"


class GameManage
{
private:
	Character m_Player;
	Character* m_Monster;
	int m_iMonsterNum;
	MapDraw DrawManager;
public:
	GameManage();
	void Start();
	void NewGame();
	bool LoadGame();
	void ReadDefaultPlayer();
	void ReadDefaultMonster();
	void ReadPlayer(int num);
	void ReadMonster(int num);
	void ReadWeapon();
	void Menu();
	void PlayerInfo();
	void MonsterInfo();
	void ClearWindow();
	~GameManage();
};

