#include "tutorial.h"

void DrawTriangle(int aNum)
{
	for (int y = 0; y < aNum; ++y)
	{

		for (int x = 0; x < y + 1; ++x)
		{
			std::cout << "$";
		}

		std::cout << "\n";
	}
	std::cout << "\n";
}

void Tutorial09_04()
{
	DrawTriangle(3);
	DrawTriangle(4);
	DrawTriangle(5);
}