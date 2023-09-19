#include "tutorial.h"

void tutorial08_03()
{
	const int count = 10;
	int number[count] = {};
	int* p;
	
	p = &number[count];
	
	//int x;
	//int y;
	//int z;

	//char alphabet[3] = {'x', 'y' ,'z'};

	for (int i = 0; i < count; i++)
	{
		std::cout << "”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢(" << i + 1 << "”Ô–Ú)\n";
		std::cin >> *(p + i);
		//std::cin >> number[i];
	}

	for (int i = 0; i < count; i++)
	{
		std::cout << *(p - i - 1) << "\n";
	}
}