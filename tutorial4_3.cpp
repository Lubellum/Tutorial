#include "tutorial.h"

void tutorial4_3()
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