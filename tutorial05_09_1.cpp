#include "tutorial.h"

void Tutorial05_09_1()
{
	int num = 0;
	int max = 0;
	int min = 0;

	for (int i = 0; i < 10; i++)
	{
		std::cout << "正の整数を入力してください(" << i + 1 << "番目)\n";
		scanf_s("%d", &num);

		if (max < num)
		{
			max = num;
		}

		if (min > num)
		{
			min = num;
		}
	}

	std::cout << "最大値は" << max << "です\n";
	std::cout << "最小値は" << min << "です\n";
}