#include "tutorial.h"

void tutorial3_10()
{
	int x, y;

	printf_s("1�ڂ̐��l����͂��Ă�������\n");
	scanf_s("%d", &x);

	printf_s("2�ڂ̐��l����͂��Ă�������\n");
	scanf_s("%d", &y);

	std::cout << "�a�F�@" << x + y << "\n";
	std::cout << "���F�@" << x - y << "\n";
	std::cout << "�ρF�@" << x * y << "\n";
	std::cout << "���F�@" << x / y << "\n";
	std::cout << "�]�F�@" << x % y << "\n";
}