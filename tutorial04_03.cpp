#include "tutorial.h"

void Tutorial04_03()
{
	int x, y;

	scanf_s("%d", &x);
	scanf_s("%d", &y);

	if (x > y)
	{
		std::cout << x << "\n";
	}
	else if (x < y)
	{
		std::cout << y << "\n";
	}
	else
	{
		std::cout << "xとyは同じ数値です\n";
	}

}