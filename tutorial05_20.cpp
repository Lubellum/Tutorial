#include "tutorial.h"

void Tutorial05_20()
{
	int num = 0;
	int sum = 0;
	int i = 0;

	//for (int i = 0; i < 1000; i++)
	while(true)
	{

		std::cout << "数字を入力してください\n";
		std::cin >> num;

		if (num != 0)
		{
			sum += num;
			std::cout << "合計値：" << sum << "\n";
		}
		else
		{
			int average = sum / i;
			std::cout << "合計値：" << sum << "\n";
			std::cout << "平均値：" << average << "\n";
			break;
		}

		++i;
	}
}