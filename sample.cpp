#include "tutorial.h"

void sample()
{
	const int x = 5;
	const int y = 10;
	int kuku[y][x];

	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			kuku[i][j] = (i + 1) * (j + 1);
		}
	}

	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			std::cout << std::setw(3) << kuku[i][j];
		}
		std::cout << "\n";
	}
}