#include "tutorial.h"

void tutorial6_8()
{
	const int limit = 10;
	int numbers[limit];
	int i = 0;
	int j = i + 1;

	for (i = 0; i < limit; i++)
	{
		std::cout << "��������͂��Ă�������(" << i + 1 << "���)\n";
		std::cin >> numbers[i];
	}

	for (i = 0; i < limit; i++)
	{
		for (j = i + 1; j < limit; j++)
		{
			if (numbers[i] > numbers[j])
			{
				int k = numbers[j];
				numbers[j] = numbers[i];
				numbers[i] = k;
			}

		}
	}

	for (i = 0; i < limit; i++)
	{
		std::cout << numbers[i] << " ";
	}
}