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

	printf_s("��������͂��Ă�������(2��)\n");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);

	int average = CalculateAverage(num1, num2);

	printf_s("���ϒl��%d�ł��B", average);
}