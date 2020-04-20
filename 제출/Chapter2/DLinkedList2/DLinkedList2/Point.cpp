#include "Point.h"


void SetPointPos(Point* ppos, int xpos, int ypos)
{
	ppos->xpos = xpos;
	ppos->ypos = ypos;
}

void ShowPointPos(Point* ppos)
{
	cout << "x ��ǥ : " << ppos->xpos << ", y ��ǥ : " << ppos->ypos << endl;
}

//-�� Point������ ��� xpos�� ������ 1
//- �� Point������ ��� ypos�� ������ 2
//- �� Point������ ����� ��� ������ 0
//- �� Point������ ����� ��� �ٸ��� - 1
int PointComp(Point* pos1, Point* pos2)
{
	/*if (pos1->xpos == pos2->xpos && pos1->ypos == pos2->ypos)
		return 0;
	else if (pos1->xpos == pos2->xpos)
		return 1;
	else if (pos1->ypos == pos2->ypos)
		return 2;
	else
		return -1;*/

	if (pos1->xpos != pos2->xpos)
	{
		if (pos1->xpos < pos2->xpos)
			return 0;
		else
			return 1;
	}
	else
	{
		if (pos1->ypos < pos2->ypos)
			return 0;
		else
			return 1;
	}
}