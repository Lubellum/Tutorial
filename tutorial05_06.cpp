#include "tutorial.h"

void tutorial5_6()
{
	int win = 0;
	int lose = 0;

	int BattleScore = 0;

	std::cout << "Ÿ”s‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n";
	std::cout << "0:•‰‚¯@1:Ÿ‚¿\n";

	for (int i = 0; i < 10; i++)
	{
		std::cout << i + 1 << "‰ñ–Ú\n";
		scanf_s("%d", &BattleScore);

		if (BattleScore == 0)
		{
			++lose;
		}
		else if (BattleScore == 1)
		{
			++win;
		}
		else 
		{
			// donothing
		}
	}

	std::cout << "0:•‰‚¯‘”" << lose << "\n";
	std::cout << "1:Ÿ‚¿‘”" << win << "\n";

}