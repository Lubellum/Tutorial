#include "tutorial.h"

bool IsPrimeNumber(int aNum)
{
	int factorCount = 0;

	for (int i = 2; i < aNum; ++i)
	{
		if (aNum % i == 0)
		{
			++factorCount;
		}
	}

	if (factorCount > 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}


// 多分合ってる…！！？

void Tutorial09_08()
{
	//int minNum = 2;
	int minNum = 10000;
	//int maxNum = 100;
	int maxNum = 10100;
	int primeNumberCount = 0;
	
	for (int i = minNum; i < maxNum; i++)
	{
		primeNumberCount += IsPrimeNumber(i);
	}

	printf_s("%d", primeNumberCount);
}