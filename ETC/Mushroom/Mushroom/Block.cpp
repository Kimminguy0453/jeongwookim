#include "Block.h"


Block::Block(Position pos)
{
	SetShape('��');
	SetColor(DARK_BLUE);
	SetPosition(pos);
	Draw();
}