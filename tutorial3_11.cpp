#include "tutorial.h"

void tutorial3_11()
{
	int x, y;

	printf_s("1�ڂ̐��l����͂��Ă�������\n");
	scanf_s("%d", &x);

	printf_s("2�ڂ̐��l����͂��Ă�������\n");
	scanf_s("%d", &y);

	int	average = (x + y) / 2;

	std::cout << "���ϒl�F" << average << "\n";
}