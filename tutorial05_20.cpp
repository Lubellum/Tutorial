#include "tutorial.h"

void Tutorial05_20()
{
	int num = 0;
	int sum = 0;
	int i = 0;

	//for (int i = 0; i < 1000; i++)
	while(true)
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
			int average = sum / i;
			std::cout << "���v�l�F" << sum << "\n";
			std::cout << "���ϒl�F" << average << "\n";
			break;
		}

		++i;
	}
}