#include "tutorial.h"

void tutorial4_10()
{
	int x = 0;
	int y = 0;

	std::cout << "�@x�ɐ��l�������Ă�������\n";
	scanf_s("%d", &x);

	std::cout << "�Ay�ɐ��l�������Ă�������\n";
	scanf_s("%d", &y);

	int xEven     = (x % 2 == 0);
	int xOdd      = (x % 2 == 1);
	int xPositive = (x >= 0);
	int xNegarive = (x < 0);

	int yEven     = (y % 2 == 0);
	int yOdd      = (y % 2 == 1);
	int yPositive = (y >= 0);
	int yNegarive = (y < 0);

	if (x < y && xEven && yEven)
	{
		std::cout << "x��y��菬�����A���Ax��y�͋��ɋ����ł���B\n";
	}
	else if (x == y && xNegarive)
	{
		std::cout << "x��y�͓������A���A���̐��ł���B\n";
	}
	else if (x < y || xEven)
	{
		std::cout << "x��y��菬�����A�܂��́Ax�͋����ł���B\n";
	}
	else if ((x <= 10 || x >= 100) && (y >= 10 && y <= 100)) // (10 <= y <= 100)
	{
		std::cout << "x��10�ȉ��܂���100�ȏ�ŁA���Ay��10�ȏォ��100�ȉ��ł���B\n";
	}
	else if (!(xNegarive && yNegarive))
	{
		std::cout << "�ux��y���ǂ�������̐��v�ł͂Ȃ�\n";
	}
	else
	{
		std::cout << "(_�L�D�M)�~~�¶ڰ\n";
	}
}