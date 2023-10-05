#include "tutorial.h"

void Tutorial05_12()
{
	int magicNumber = 100;

	for (int i = 0; i < magicNumber; i++)
	{
		double threePower = std::pow(3, i + 1);

		if (threePower <= 10000)
		{
			std::cout << "3‚Ì" << i + 1 << "æ‚ÍF " << threePower << "\n";
		}
		else
		{
			break;
		}
	}
}