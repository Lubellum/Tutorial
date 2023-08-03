#include "tutorial.h"

void tutorial5_9_1()
{
	int num = 0;
	int max = 0;
	int min = 0;

	for (int i = 0; i < 10; i++)
	{
		std::cout << "³‚Ì®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢(" << i + 1 << "”Ô–Ú)\n";
		scanf_s("%d", &num);

		if (max < num)
		{
			max = num;
		}

		if (min > num)
		{
			min = num;
		}
	}

	std::cout << "Å‘å’l‚Í" << max << "‚Å‚·\n";
	std::cout << "Å¬’l‚Í" << min << "‚Å‚·\n";
}