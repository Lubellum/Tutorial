#include "tutorial.h"

void tutorial6_1()
{
	int numbers[10];
	
	for (int i = 0; i < 10; i++)
	{
		std::cout << "数値を入力してください。(" << i + 1 << "回目)\n";
		std::cin >> numbers[i];
	}

	for (int i = 0; i < 10; i++)
	{
		numbers[i] *= 2;
	}
	
	std::cout << "2倍された数は以下です。\n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << std::setw(2) << i + 1 << "番目：" << numbers[i] << "\n";
	}
}