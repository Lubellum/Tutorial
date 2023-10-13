#include "tutorial.h"

void Tutorial09_11()
{
	const int count = 50;
	unsigned long long fibonacciNumbers[count] = {};

	fibonacciNumbers[0] = 0;
	fibonacciNumbers[1] = 1;

	for (int i = 0; i < count - 2; i++)
	{
		fibonacciNumbers[i + 2] = fibonacciNumbers[i] + fibonacciNumbers[i + 1];
	}

	for (int i = 0; i < count; i++)
	{
		printf_s("%lld\n", fibonacciNumbers[i]);
	}
}