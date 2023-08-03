#include "tutorial.h"

void tutorial5_18()
{

	for (int x = 1; x <= 9; x++)
	{

		for (int y = 1; y <= 9; y++)
		{
			std::cout << std::setw(3) << x * y;
		}

		//printf_s("%2d", x);
		//std::cout << std::setw(2) << x << "\n";
		std::cout << "\n";

	}
}