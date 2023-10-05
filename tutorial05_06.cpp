#include "tutorial.h"

void Tutorial05_06()
{
	int win = 0;
	int lose = 0;

	int battleScore = 0;

	std::cout << "勝敗を入力してください\n";
	std::cout << "0:負け　1:勝ち\n";

	for (int i = 0; i < 10; i++)
	{
		std::cout << i + 1 << "回目\n";
		scanf_s("%d", &battleScore);

		if (battleScore == 0)
		{
			++lose;
		}
		else if (battleScore == 1)
		{
			++win;
		}
		else 
		{
			// donothing
		}
	}

	std::cout << "0:負け総数" << lose << "\n";
	std::cout << "1:勝ち総数" << win << "\n";

}