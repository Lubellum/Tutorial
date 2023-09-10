#include "tutorial.h"

void tutorial7_3_2()
{
	char alphabet = 'a';

	int range = 'z' - 'a';


	int number;

	std::cin >> number;

	for (int i = 0; i <= range; i++)
	{
		std::cout << alphabet << " ";

		if ((i + 1) % number == 0)
		{
			std::cout << "\n";
		}

		++alphabet;
	}
}