#include "Dagger.h"



Dagger::Dagger()
{
	SetType("���");
}

STATUS Dagger::Attack()
{
	int check = rand() % 3;

	if (check == 0)
		return STATUS_POISON;
	else
		return STATUS_NORMAL;
}

Dagger::~Dagger()
{
}
