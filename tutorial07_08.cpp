#include "tutorial.h"

void tutorial7_8()
{
	const int length = 30;
	char string[length];

	scanf_s("%s", string, length);

	for (int i = 0; i < length; i++)
	{
		if (string[i] >= 'a')
		{
			string[i] -= 32;
		}
		else if (string[i] >= 'A' && string[i] <= 'Z')
		{
			string[i] += 32;
		}

	}

	//string[1] = 0;

	printf_s("%s", string);
}