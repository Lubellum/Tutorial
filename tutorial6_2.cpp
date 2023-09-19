#include "tutorial.h"

void tutorial6_2()
{
	//int numbers[10];
	std::vector<int> numbers;
	numbers.resize(10);

	for (int i = 0; i < numbers.size(); i++)
	{
		std::cout << "”’l‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B(" << i + 1 << "‰ñ–Ú)\n";
		std::cin >> numbers[i];
	}

	for (int i = 0; i < numbers.size(); i++)
	{
		size_t index = numbers.size() - i;
		std::cout << std::setw(2) << index << "‰ñ–ÚF" << numbers[index - 1] << "\n";
	}
}