#include "tutorial.h"

double NumberToPower(int aNumber)
{
	return std::pow(aNumber, 2);
}

void tutorial09_01()
{
	double number = 0;

	printf_s("��������͂��Ă�������\n");
	//scanf_s("%d", number);
	std::cin >> number;

	number = NumberToPower(number);
	printf_s("%lf", number);
}