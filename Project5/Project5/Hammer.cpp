#include "Hammer.h"



Hammer::Hammer()
{
	SetType("�ظ�");
}

STATUS Hammer::Attack()
{
	int check = rand() % 6;

	if (check == 0)
		return STATUS_STUN;
	else
		return STATUS_NORMAL;
}

Hammer::~Hammer()
{
}
