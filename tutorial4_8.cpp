#include "tutorial.h"

void tutorial4_8()
{
	int MiddleTestScore = 0;
	int EndTestScore = 0;

	std::cout << "中間テストの点数を入力してください\n";
	scanf_s("%d", &MiddleTestScore);

	std::cout << "期末テストの点数を入力してください\n";
	scanf_s("%d", &EndTestScore);

	int TotalScore = MiddleTestScore + EndTestScore;

	if ((MiddleTestScore >= 60) && (EndTestScore >= 60))
	{
		std::cout << "合格です\n";
	}
	else if (TotalScore >= 130)
	{
		std::cout << "合格です\n";
	}
	else if ((TotalScore >= 100) && (MiddleTestScore >= 90 || EndTestScore >= 90))
	{
		std::cout << "合格です\n";
	}
	else
	{
		std::cout << "不合格です\n";
	}
}