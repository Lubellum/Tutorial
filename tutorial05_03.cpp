#include "tutorial.h"

void Tutorial05_03()
{

	// ++i 効率が良い                       i += 1
	// i++ 代入してしまっているので、無駄。 i = i + 1
	for (int i = 1; i <= 8; ++i)
	{
		double x = std::pow(2, i);
		std::cout << x << "\n";
		int j = i;
		std::cout << ++  j << "\n";
	}
}