#include "tutorial.h"

void tutorial3_8()
{
	int x = 0;

	printf_s("���l����͂��Ă�������\n");
	scanf_s("%d", &x);

	x++;
	std::cout << "�C���N�������g:" << x << "\n";

	x--;
	std::cout << "�f�N�������g  :" << x << "\n";
}