#include "tutorial.h"

void tutorial5_5()
{
	int num[10];
	int sum = 0;

	for (int i = 0; i < 10; i++)
	{
		std::cout << i + 1 << "こ目\n";
		std::cin >> num[i];

		sum += num[i];
	}

	int avarage = sum / 10;
	std::cout << "平均値は" << avarage << "です\n";
}