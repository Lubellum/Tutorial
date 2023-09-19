#include "tutorial.h"

void tutorial5_12()
{
	int MagicNumber = 100;

	for (int i = 0; i < MagicNumber; i++)
	{
		double ThreePower = std::pow(3, i + 1);

		if (ThreePower <= 10000)
		{
			std::cout << "3‚Ì" << i + 1 << "æ‚ÍF " << ThreePower << "\n";
		}
		else
		{
			break;
		}
	}
}