#include "tutorial.h"

void Tutorial05_12()
{
	int magicNumber = 100;

	for (int i = 0; i < magicNumber; i++)
	{
		double threePower = std::pow(3, i + 1);

		if (threePower <= 10000)
		{
			std::cout << "3��" << i + 1 << "��́F " << threePower << "\n";
		}
		else
		{
			break;
		}
	}
}