#include "tutorial.h"

void tutorial5_7_2()
{
	
	int GiantsTotalScore = 0;
	int TigersTotalScore = 0;

	for (int i = 0; i < 9; i++)
	{
		int GiantsScore = 0;
		int TigersScore = 0;

		std::cout << i + 1 << "回表　巨人の得点は？\n";
		scanf_s("%d", &GiantsScore);
		GiantsTotalScore += GiantsScore;

		std::cout << i + 1 << "回裏　阪神の得点は？\n";
		scanf_s("%d", &TigersScore);
		TigersTotalScore += TigersScore;
	}

	int i = 10;
	while (GiantsTotalScore == TigersTotalScore)
	{
		int GiantsScore = 0;
		int TigersScore = 0;

		std::cout << i << "回表　巨人の得点は？\n";
		scanf_s("%d", &GiantsScore);
		GiantsTotalScore += GiantsScore;

		std::cout << i << "回裏　阪神の得点は？\n";
		scanf_s("%d", &TigersScore);

		++i;
	}

	std::cout << "試合終了\n";
	std::cout << "巨人：" << GiantsTotalScore << "点\n";
	std::cout << "阪神：" << TigersTotalScore << "点\n";
	if (GiantsTotalScore > TigersTotalScore)
	{
		std::cout << "巨人の勝ち\n";
	}
	else if (GiantsTotalScore < TigersTotalScore)
	{
		std::cout << "阪神の勝ち\n";
	}
	else
	{
		std::cout << "引き分け\n";
	}

}