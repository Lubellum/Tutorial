#include "tutorial.h"


bool IsContinue(int strike, int ball)
{
	if (strike >= 3)
	{
		return false;
	}
	else if(ball >= 4)
	{
		return false;
	}
	else
	{
		return true;
	}
}

void Tutorial05_14()
{
	int judge = 0;

	int strike = 0;
	int ball = 0;

	// ���̂��X�g���C�N��3�ɂȂ��Ă�while���[�v�𔲂��Ȃ� ���@�u||�v���u&&�v�ɂ��邱�Ƃŉ���
	//while (strike < 3 && ball < 4)

	// ������2�ȏ�Ȃ�֐��������ق����ǂ�
	while ( IsContinue(strike, ball) )
	{
		std::cout << "�X�g���C�N�Ȃ�1�A�{�[���Ȃ�2����͂��Ă��������B\n";
		scanf_s("%d", &judge);

		if (judge == 1)
		{
			++strike;
		}
		else if (judge == 2)
		{
			++ball;
		}
		else
		{
			std::cout << "1��2����͂��Ă��������B\n";
		}

		std::cout << "�X�g���C�N�F" << strike << "\n";
		std::cout << "�{�[��    �F" << ball << "\n";
	}
}