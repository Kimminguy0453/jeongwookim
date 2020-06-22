#include "Garen.h"


Garen::Garen(Position pos) : Enemy(pos)
{
	m_strShape = "��";
	m_iColor = BLUE;
	m_iAtk = 100;
	m_iHealth = 600;
	m_iAtkSpeed = 120;
	m_iSpeed = 100;
	SetRange(RANGE_CLOSE);
	Draw();
}