#include "tutorial.h"

void CaliculateMultiplicationTable2(int aNum)
{
	for (int x = 0; x < 9; x++)
	{
		int y = aNum * (x + 1);
		printf_s("%3d", y);
	}
}

void Tutorial09_06_2()
{
	int num = 0;
	scanf_s("%d", &num);
	CaliculateMultiplicationTable2(num);
	printf_s("\n\n");


	printf_s("‹ã‹ã•\\n");
	for (int y = 0; y < 9; y++)
	{
		CaliculateMultiplicationTable2(y + 1);
		printf_s("\n");
	}
}