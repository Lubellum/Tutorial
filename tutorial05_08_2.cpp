#include "tutorial.h"

void Tutorial05_08_2()
{
	int num = 0;
	int max = 0;

	for (int i = 0; i < 10; i++)
	{
		std::cout << "³‚Ì®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n";
		scanf_s("%d", &num);

		if (max < num)
		{
			max = num;
		}
	}

	std::cout << max << "\n";
}