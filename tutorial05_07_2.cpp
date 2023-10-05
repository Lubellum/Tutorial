#include "tutorial.h"

void Tutorial05_07_2()
{
	
	int giantsTotalScore = 0;
	int tigersTotalScore = 0;

	for (int i = 0; i < 9; i++)
	{
		int giantsScore = 0;
		int tigersScore = 0;

		std::cout << i + 1 << "回表　巨人の得点は？\n";
		scanf_s("%d", &giantsScore);
		giantsTotalScore += giantsScore;

		std::cout << i + 1 << "回裏　阪神の得点は？\n";
		scanf_s("%d", &tigersScore);
		tigersTotalScore += tigersScore;
	}

	int i = 10;
	while (giantsTotalScore == tigersTotalScore)
	{
		int giantsScore = 0;
		int tigersScore = 0;

		std::cout << i << "回表　巨人の得点は？\n";
		scanf_s("%d", &giantsScore);
		giantsTotalScore += giantsScore;

		std::cout << i << "回裏　阪神の得点は？\n";
		scanf_s("%d", &tigersScore);

		++i;
	}

	std::cout << "試合終了\n";
	std::cout << "巨人：" << giantsTotalScore << "点\n";
	std::cout << "阪神：" << tigersTotalScore << "点\n";
	if (giantsTotalScore > tigersTotalScore)
	{
		std::cout << "巨人の勝ち\n";
	}
	else if (giantsTotalScore < tigersTotalScore)
	{
		std::cout << "阪神の勝ち\n";
	}
	else
	{
		std::cout << "引き分け\n";
	}

}