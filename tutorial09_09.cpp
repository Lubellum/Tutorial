#include "tutorial.h"

void Tutorial09_09()
{
	int num0 = 0;
	//int num1 = 5;
	//int num2 = 10;

	//int* pNum0 = 0;
	//int* pNum1 = 0;
	//int* pNum2 = 0;

	//pNum0 = &num0;
	//pNum1 = &num1;
	//pNum2 = &num2;

	//*pNum0 = num1;
	//*pNum1 = num2;
	//*pNum2 = num0;

	const int count = 10;
	int numbers[count] = {};

	for (int i = 0; i < count; i++)
	{
		scanf_s("%d", &numbers[i]);
	}

	for (int i = 0; i < count - 1; i++)
	{
		for (int j = 0; j < count - 1; j++)
		{
			if (numbers[j] > numbers[j + 1])
			{
				num0 = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = num0;
			}
		}
	}

	for (int i = 0; i < count; i++)
	{
		std::cout << numbers[i] << "\n";
	}
}