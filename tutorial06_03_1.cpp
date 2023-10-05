#include "tutorial.h"

void Tutorial06_03_1()
{

	//int numbers[10];
	//int numbersEven[10];
	//int numbersOdd[10];

	std::vector<int> numbers;
	numbers.resize(10);

	std::vector<int> numbersEven;
	std::vector<int> numbersOdd;

	for (int i = 0; i < numbers.size(); i++)
	{
		std::cout << "数値を入力してください。(" << i + 1 << "回目)\n";		
		std::cin >> numbers[i];
	}

	for (int i = 0; i < numbers.size(); i++)
	{
		if (numbers[i] % 2 == 0)
		{
			numbersEven.push_back(numbers[i]);
		}
		else
		{
			numbersOdd.push_back(numbers[i]);
		}
	}

	std::cout << "偶数：";
	for (int i = 0; i < numbersEven.size(); i++)
	{
		std::cout << numbersEven[i] << " ";
	}

	std::cout << "奇数：";
	for (int i = 0; i < numbersOdd.size(); i++)
	{
		std::cout << numbersOdd[i]  << " ";
	}
}