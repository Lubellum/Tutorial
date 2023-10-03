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
		std::cout << "�X�g���C�N�Ȃ�1�A�{�[���Ȃ�2�A�t�@�E���Ȃ�3����͂��Ă��������B\n";
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
			std::cout << "1��2����͂��Ă��������B\n";
		}

		std::cout << "�X�g���C�N�F" << strike << "\n";
		std::cout << "�{�[��    �F" << ball << "\n";
	}
}