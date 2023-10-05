#include "tutorial.h"

bool IsOverThreshold(const int limit, int * numbers)
{
	int sum = 0;

	for (int i = 0; i < limit; i++)
	{
		sum += numbers[i];
	}

	if (sum < 100)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool IsFinish(const int i, const int limit, int * numbers)
{
	if (i >= limit)
	{
		return true;
	}
	else if (IsOverThreshold(limit, numbers))
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Tutorial06_04_2()
{
	const int limit = 10;
	int numbers[limit] = {};
	int i = 0;

	while (IsFinish(i, limit, numbers) == false)
	{
		std::cout << "数値を入力してください。\n";
		std::cout << "※ 10回入力された場合、もしくは入力された数値の合計値が100を超えた場合、このプログラムは終了します。\n";
		std::cin >> numbers[i];

		++i;
	}

	for (int j = 0; j < i; j++)
	{
		std::cout << numbers[j] << "\n";
	}
}