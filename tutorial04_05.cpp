#include "tutorial.h"

void Tutorial04_05()
{
	unsigned int x;

	scanf_s("%u", &x);

	if (x % 2 == 0)
	{
		std::cout << x << "�͋����ł�\n";
	}
	else
	{
		std::cout << x << "�͊�ł�\n";
	}
}