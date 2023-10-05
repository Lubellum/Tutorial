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

	// 何故かストライクが3になってもwhileループを抜けない →　「||」を「&&」にすることで解決
	//while (strike < 3 && ball < 4)

	// 条件が2つ以上なら関数化したほうが良い
	while ( IsContinue(strike, ball) )
	{
		std::cout << "ストライクなら1、ボールなら2を入力してください。\n";
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
			std::cout << "1か2を入力してください。\n";
		}

		std::cout << "ストライク：" << strike << "\n";
		std::cout << "ボール    ：" << ball << "\n";
	}
}