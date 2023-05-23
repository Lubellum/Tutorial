#include "tutorial.h"

void tutorial4_5()
{
	unsigned int x;

	scanf_s("%u", &x);

	if (x % 2 == 0)
	{
		std::cout << x << "‚Í‹ô”‚Å‚·\n";
	}
	else
	{
		std::cout << x << "‚ÍŠï”‚Å‚·\n";
	}
}