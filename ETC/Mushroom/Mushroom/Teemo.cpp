#include "Teemo.h"


Teemo::Teemo()
{
	SetShape("��");
	SetColor(YELLOW);


	SetSpeed(90);
	SetPosition({ WIDTH / 4, HEIGHT / 2 });
	Draw();
}