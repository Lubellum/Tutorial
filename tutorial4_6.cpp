#include "tutorial.h"

void tutorial4_6()
{
	int x = 0;
	
	std::cout << "���l����͂��Ă�������\n";

	scanf_s("%d", &x);

	if (x == 0)
	{
		std::cout << x << "�ł�\n";
	}
	else if ((x > 0) && (x % 2 == 0))
	{
		std::cout << x << "�͐��̋����ł�\n";
	}
	else if (x > 0)
	{
		std::cout << x << "�͐��̊�ł�\n";
	}
	else if ((x < 0) && (x % 2 == 0))
	{
		std::cout << x << "�͕��̋����ł�\n";
	}
	else
	{
		std::cout << x << "�͕��̊�ł�\n";
	}

	//if (x == 0)
	//{
	//	std::cout << x << "�ł�\n";
	//}
	//else if (x > 0)
	//{
	//	if (x % 2 == 0)
	//	{
	//		std::cout << x << "�͐��̋����ł�\n";
	//	}
	//	else
	//	{
	//		std::cout << x << "�͐��̊�ł�\n";
	//	}
	//}
	//else if (x < 0)
	//{
	//	if (x % 2 == 0)
	//	{
	//		std::cout << x << "�͕��̋����ł�\n";
	//	}
	//	else
	//	{
	//		std::cout << x << "�͕��̊�ł�\n";
	//	}
	//}
}