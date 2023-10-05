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