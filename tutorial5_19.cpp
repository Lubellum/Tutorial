#include "tutorial.h"

void tutorial5_19()
{
	int num = 0;
	int sum = 0;

	while (true)
	{
		std::cout << "��������͂��Ă�������\n";
		std::cin >> num;

		if (num != 0)
		{
			sum += num;
			std::cout << "���v�l�F" << sum << "\n";
		}
		else
		{
			std::cout << "���v�l�F" << sum << "\n";
			break;
		}

	}
}