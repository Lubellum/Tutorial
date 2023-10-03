#include "tutorial.h"

void tutorial5_19()
{
	int num = 0;
	int sum = 0;

	while (true)
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
			std::cout << "合計値：" << sum << "\n";
			break;
		}

	}
}