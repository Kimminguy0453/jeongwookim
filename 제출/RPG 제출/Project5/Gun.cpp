#include "Gun.h"



Gun::Gun()
{
	SetType("��");
}

STATUS Gun::Attack()
{
	int check = rand() % 3;

	if (check == 0)
		return STATUS_CRIT;
	else
		return STATUS_NORMAL;
}

Gun::~Gun()
{
}
