#include "tutorial.h"

void Tutorial05_23()
{

	int num[20];

	num[0] = 0;
	num[1] = 1;

	for (int i = 2; i < 20; i++)
	{
		num[i] = num[i - 2] + num[i - 1];
	}

	for (int i = 0; num[i] < 1000; i++)
	{
		std::cout << num[i] << "\n";
	}

}