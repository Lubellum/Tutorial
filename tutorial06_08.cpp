#include "tutorial.h"

void Tutorial06_08()
{
	const int limit = 10;
	int numbers[limit];
	int i = 0;
	int j = i + 1;

	for (i = 0; i < limit; i++)
	{
		std::cout << "”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢(" << i + 1 << "‰ñ–Ú)\n";
		std::cin >> numbers[i];
	}

	for (i = 0; i < limit; i++)
	{
		for (j = i + 1; j < limit; j++)
		{
			for (int l = 0; l < limit; l++)
			{
				std::cout << numbers[l] << " ";
			}
			printf_s("(i = %d, j = %d)" ,i ,j);
			std::cout << "\n";

			if (numbers[i] > numbers[j])
			{
				int k = numbers[j];
				numbers[j] = numbers[i];
				numbers[i] = k;
			}
		}
	}

	for (i = 0; i < limit; i++)
	{
		std::cout << numbers[i] << " ";
	}
}