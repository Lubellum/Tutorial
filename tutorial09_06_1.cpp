#include "tutorial.h"

void CaliculateMultiplicationTable(int aNum)
{
	for (int y = 0; y < 9; y++)
	{
		int x = aNum * (y + 1);
		printf_s("%d\n", x);
	}
}

void Tutorial09_06_1()
{
	int num = 0;
	scanf_s("%d", &num);

	for (int x = 0; x < 9; x++)
	{
		CaliculateMultiplicationTable(x + 1);
	}
}