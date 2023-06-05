#include "tutorial.h"

void tutorial4_8()
{
	int middleTestScore = 0;
	int endTestScore = 0;

	std::cout << "中間テストの点数を入力してください\n";
	scanf_s("%d", &middleTestScore);

	std::cout << "期末テストの点数を入力してください\n";
	scanf_s("%d", &endTestScore);

	int totalScore = middleTestScore + endTestScore;

	if ((middleTestScore >= 60) && (endTestScore >= 60))
	{
		std::cout << "合格です\n";
	}
	else if (totalScore >= 130)
	{
		std::cout << "合格です\n";
	}
	else if ((totalScore >= 100) && (middleTestScore >= 90 || endTestScore >= 90))
	{
		std::cout << "合格です\n";
	}
	else
	{
		std::cout << "不合格です\n";
	}
}