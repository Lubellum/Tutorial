#include "tutorial.h"

void tutorial5_4()
{
	int x = 7;
	long sum = 1;

	for (int i = 0; i < x; i++)
	{
		//x* (x - 1)* (x - 2)* (x - 3)* (x - 4);
		
		long y = x - i;
		sum *= y;
		std::cout << sum << "\n";
	}
}