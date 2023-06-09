#include "tutorial.h"

void tutorial5_7_1()
{
	int Giants = 0;
	int GiantsScore = 0;
	int Tigers = 0;
	int TigersScore = 0;

	for (int i = 0; i < 9; i++)
	{
		std::cout << i + 1 << "回表　巨人の得点は？\n";
		scanf_s("%d", &Giants);
		GiantsScore += Giants;

		std::cout << i + 1 << "回裏　阪神の得点は？\n";
		scanf_s("%d", &Tigers);
		TigersScore += Tigers;
	}

	std::cout << "試合終了\n";
	std::cout << "巨人：" << GiantsScore << "点\n";
	std::cout << "阪神：" << TigersScore << "点\n";
	if (GiantsScore > TigersScore)
	{
		std::cout << "巨人の勝ち\n";
	}
	else if (GiantsScore < TigersScore)
	{
		std::cout << "阪神の勝ち\n";
	}
	else
	{
		std::cout << "引き分け\n";
	}
}