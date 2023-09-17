#include "tutorial.h"

void tutorial08_03()
{
	const int count = 10;
	int number[count] = {};
	int* p;
	
	p = &number[count];

	for (int i = 0; i < count; i++)
	{
		std::cout << "”Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢(" << i + 1 << "”Ô–Ú)\n";
		std::cin >> number[i];
	}

	for (int i = 0; i < count; i++)
	{
		std::cout << *(p - i - 1) << "\n";
	}
}