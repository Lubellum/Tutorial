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
		std::cout << "�X�g���C�N�Ȃ�1�A�{�[���Ȃ�2�A�t�@�E���Ȃ�3����͂��Ă��������B\n";
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
			std::cout << "1��2����͂��Ă��������B\n";
		}

		std::cout << "�X�g���C�N�F" << strike << "\n";
		std::cout << "�{�[��    �F" << ball << "\n";
	}
}