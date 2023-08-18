#include "tutorial.h"

bool IsOverThreshold(std::vector<int> numbers)
{
	int sum = 0;

	for (int i = 0; i < numbers.size(); i++)
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

bool IsFinish(int i, std::vector<int> numbers)
{
	if (i >= 10)
	{
		return true;
	}
	else if (IsOverThreshold(numbers))
	{
		return true;
	}
	else
	{
		return false;
	}
}

void tutorial6_4_1()
{
	std::vector<int> numbers;
	numbers.resize(10);

	int i = 0;

	while ( IsFinish(i, numbers) == false )
	{
		std::cout << "���l����͂��Ă��������B\n";
		std::cout << "�� 10����͂��ꂽ�ꍇ�A�������͓��͂��ꂽ���l�̍��v�l��100�𒴂����ꍇ�A���̃v���O�����͏I�����܂��B\n";
		std::cin >> numbers[i];

		++i;
	}

	for (int j = 0; j < i; j++)
	{
		std::cout << numbers[j] << "\n";
	}
}