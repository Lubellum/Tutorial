#include "tutorial.h"

//int division(int x, int y)
//{
//	std::cout << "���F " << x / y << "\n";
//	std::cout << "�]�F " << x % y << "\n";
//}

void tutorial3_7()
{
	int x = 0;
	int y = 0;

	std::cout << "�@ ���l����͂��Ă�������\n";
	scanf_s("%d", &x);

	std::cout << "�A �@�������������l����͂��Ă�������\n";
	scanf_s("%d", &y);


	if (x > y)
	{
		//division(x, y);
		std::cout << "���F " << x / y << "\n";
		std::cout << "�]�F " << x % y << "\n";
	}
	else if(x <= y)
	{
		std::cout << "�A�̐��l�͇@��菬��������I�����Ă�������\n";
		tutorial3_7();
	}
	else
	{
		std::cout << "���l����͂��Ă�������\n";
		tutorial3_7();
	}
}