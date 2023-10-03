#include "tutorial.h"

void tutorial5_22()
{
	int num = 0;
	std::cin >> num;

	for (int x = 0; x < num; x++)
	{

		for (int y = 0; y < num; y++)
		{
			
			if ( (x == y) || (y == num - x - 1))
			{
				std::cout << "œ";
			}
			else
			{
				std::cout << "›";
			}
		}

		std::cout << "\n";
	}
}