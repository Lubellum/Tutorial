#include "tutorial.h"

void Tutorial05_06()
{
	int win = 0;
	int lose = 0;

	int battleScore = 0;

	std::cout << "���s����͂��Ă�������\n";
	std::cout << "0:�����@1:����\n";

	for (int i = 0; i < 10; i++)
	{
		std::cout << i + 1 << "���\n";
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

	std::cout << "0:��������" << lose << "\n";
	std::cout << "1:��������" << win << "\n";

}