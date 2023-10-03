#include "tutorial.h"

void tutorial5_4()
{
	int x = 7;
	long product = 1;

	for (int i = 0; i < x; ++i)
	{
		//x* (x - 1)* (x - 2)* (x - 3)* (x - 4);
		
		product *= x - i;
		std::cout << product << "\n";
	}

	//product = 1;

	//for (int i = x; i >= 1; --i)
	//{
	//	product *= i;
	//	std::cout << product << "\n";
	//}
}