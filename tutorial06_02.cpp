#include "tutorial.h"

void Tutorial06_02()
{
	//int numbers[10];
	std::vector<int> numbers;
	numbers.resize(10);

	for (int i = 0; i < numbers.size(); i++)
	{
		std::cout << "数値を入力してください。(" << i + 1 << "回目)\n";
		std::cin >> numbers[i];
	}

	for (int i = 0; i < numbers.size(); i++)
	{
		size_t index = numbers.size() - i;
		std::cout << std::setw(2) << index << "回目：" << numbers[index - 1] << "\n";
	}
}