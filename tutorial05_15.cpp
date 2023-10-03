#include "tutorial.h"

int countAtStrike(const int strike)
{
	return strike + 1;
}

int countAtBall(const int ball)
{
	return ball + 1;
}

int countAtFoul(const int strike)
{
	if (strike >= 2)
	{
		return 2;
	}
	else
	{
		return (strike + 1);
	}
}

void tutorial5_15()
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
			strike = countAtStrike(strike);
		}
		else if (judge == 2)
		{
			ball = countAtBall(ball);
		}
		else if (judge == 3)
		{
			strike = countAtFoul(strike);
		}
		else
		{
			std::cout << "1か2を入力してください。\n";
		}

		std::cout << "ストライク：" << strike << "\n";
		std::cout << "ボール    ：" << ball << "\n";
	}
}