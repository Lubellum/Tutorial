#include "tutorial.h"

void tutorial5_21()
{
	int num = 0;
	scanf_s("%d", &num);

	for (int y = 0; y < num; ++y)
	{
		
		for (int x = 0; x < y + 1; ++x)
		{
			std::cout << "$";
		}

		std::cout << "\n";
	}
}