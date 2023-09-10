#include "tutorial.h"

void tutorial7_6()
{
	const int length = 30;
	char string[length] = {};
	int count = 0;

	//std::cin >> string;

	scanf_s("%s", string, length);

	for (int i = 0; i < length; i++)
	{
		//printf_s("%d\n", string[i]);

		if (string[i] != '\0')
		{
			++count;
		}
		else
		{
			break;
		}
	}

	printf_s("%d\n", count);
}