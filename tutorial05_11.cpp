#include "tutorial.h"

void Tutorial05_11()
{
	int countNum = 0;

	std::cout << "�\�����鐔���̌�����͂��Ă�������\n";
	scanf_s("%d", &countNum);

	for (int i = 0; i < countNum; i++)
	{
		std::cout << i % 10;
	}
}