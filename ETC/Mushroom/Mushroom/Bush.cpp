#include "Bush.h"


Bush::Bush(Position pos) : Object(pos)
{
	m_strShape = "��";
	m_iColor = GREEN;

	Draw();
}