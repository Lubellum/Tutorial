#include "tutorial.h"

void Ttutorial03_11()
{
	float x, y;

	printf_s("1�ڂ̐��l����͂��Ă�������\n");
	scanf_s("%f", &x);

	printf_s("2�ڂ̐��l����͂��Ă�������\n");
	scanf_s("%f", &y);

	float average = (x + y) / 2.0f;

	std::cout << "���ϒl�F" << average << "\n";
}