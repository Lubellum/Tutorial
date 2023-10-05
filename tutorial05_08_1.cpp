#include "tutorial.h"

void Tutorial05_08_1()
{
	int num = 0;
	int numGroup[10];
	int A = 33;
	int B = 100;

	for (int i = 0; i < 10; i++)
	{
		std::cout << "³‚Ì®”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢(" << i + 1 << "”Ô–Ú)\n";
		scanf_s("%d", &num);

		numGroup[i] = num;
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout << numGroup[i] << "\n";
	}

	//int max = __std_max_element(&numGroup[0], &numGroup[10]);
	int max = *std::max_element(&numGroup[0], &numGroup[10]);
	std::cout << "Å‘å’l‚Í" << max << "‚Å‚·\n";
}