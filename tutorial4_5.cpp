#include "tutorial.h"

void tutorial4_5()
{
	unsigned int x;

	scanf_s("%u", &x);

	if (x % 2 == 0)
	{
		std::cout << x << "は偶数です\n";
	}
	else
	{
		std::cout << x << "は奇数です\n";
	}
}