#include "tutorial.h"

int CountAtStrike(const int aStrike)
{
	return aStrike + 1;
}

int CountAtBall(const int aBall)
{
	return aBall + 1;
}

int CountAtFoul(const int aStrike)
{
	if (aStrike >= 2)
	{
		return 2;
	}
	else
	{
		return (aStrike + 1);
	}
}

void Tutorial05_15()
{
	int judge = 0;

	int strike = 0;
	int ball = 0;

	while (strike < 3 && ball < 4)
	{
		std::cout << "ストライクなら1、ボールなら2、ファウルなら3を入力してください。\n";
		scanf_s("%d", &judge);

		if (judge == 1)
		{
			strike = CountAtStrike(strike);
		}
		else if (judge == 2)
		{
			ball = CountAtBall(ball);
		}
		else if (judge == 3)
		{
			strike = CountAtFoul(strike);
		}
		else
		{
			std::cout << "1か2を入力してください。\n";
		}

		std::cout << "ストライク：" << strike << "\n";
		std::cout << "ボール    ：" << ball << "\n";
	}
}