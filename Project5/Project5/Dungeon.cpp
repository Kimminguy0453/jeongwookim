#include "Dungeon.h"



Dungeon::Dungeon()
{
}

void Dungeon::Menu(Character* player, Character Monster[], int MonsterNum)
{
	int Margin = 2;
	int Select = 0;
	int line;

	while (Select != MonsterNum + 1)
	{
		line = 0;

		DrawManager.ClearWindow();

		DrawManager.DrawMidText("=====���� �Ա�=====", WIDTH, HEIGHT / 5);

		for (int i = 0; i < MonsterNum; i++)
		{
			DrawManager.DrawMidText(to_string(i + 1) + "�� ���� : [" + Monster[i].GetName() + "]", WIDTH, HEIGHT / 3 + (Margin*line++));
		}

		DrawManager.DrawMidText("���ư���", WIDTH, HEIGHT / 3 + (Margin*line++));

		Select = DrawManager.MenuSelectCursor(MonsterNum + 1, Margin, WIDTH / 4, HEIGHT / 3);
	}
}

void Dungeon::Stage(Character* player, Character* Monster)
{
	int status = PLAY_BATTLE;
	char key;
	DrawManager.ClearWindow();
	while (status == PLAY_BATTLE)
	{
		YELLOW
			player->ShowInfo(HEIGHT / 7);
		DrawManager.DrawMidText("���� :1	���� : 2	�� : 3", WIDTH, HEIGHT / 3);
		ORIGINAL

			Monster->ShowInfo(HEIGHT - 5);
		RED
			DrawManager.DrawMidText("--------------------------- vs ---------------------------", WIDTH, HEIGHT / 2);
		ORIGINAL

			key = getch();
		DrawManager.ClearWindow();
		status = Battle(player, Monster, key);
	}
}

Dungeon::~Dungeon()
{
}
