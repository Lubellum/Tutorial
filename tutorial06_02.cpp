#include "tutorial.h"

void tutorial6_2()
{
	//int numbers[10];
	std::vector<int> numbers;
	numbers.resize(10);

	for (int i = 0; i < numbers.size(); i++)
	{
		std::cout << "���l����͂��Ă��������B(" << i + 1 << "���)\n";
		std::cin >> numbers[i];
	}

	for (int i = 0; i < numbers.size(); i++)
	{
		size_t index = numbers.size() - i;
		std::cout << std::setw(2) << index << "��ځF" << numbers[index - 1] << "\n";
	}
}