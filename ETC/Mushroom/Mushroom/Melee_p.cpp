#include "Melee_p.h"


Melee_p::Melee_p(MovingObject* caster)
{
	SetCaster(caster);
	Direct dir = caster->GetDirect();
	SetDirect(dir);
	SetPosition(caster->GetPosition() + dir);
	SetColor(caster->GetColor());
	SetSpeed(300);

	if (dir.x == 1)
		SetShape("��");
	else if (dir.x == -1)
		SetShape("��");
	else if (dir.y == 1)
		SetShape("��");
	else if (dir.y == -1)
		SetShape("��");

	Draw();
}