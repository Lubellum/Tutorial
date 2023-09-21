#include "tutorial.h"

int CalculateAverage(int aNum1, int aNum2)
{
	int average = (aNum1 + aNum2) / 2;
	return average;
}

void tutorial09_02()
{
	int num1 = 0;
	int num2 = 0;

	printf_s("”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢(2‰ñ)\n");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);

	int average = CalculateAverage(num1, num2);

	printf_s("•½‹Ï’l‚Í%d‚Å‚·B", average);
}