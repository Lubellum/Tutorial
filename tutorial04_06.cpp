#include "tutorial.h"

void Tutorial04_06()
{
	int x = 0;
	
	std::cout << "数値を入力してください\n";

	scanf_s("%d", &x);

	if (x == 0)
	{
		std::cout << x << "です\n";
	}
	else if ((x > 0) && (x % 2 == 0))
	{
		std::cout << x << "は正の偶数です\n";
	}
	else if (x > 0)
	{
		std::cout << x << "は正の奇数です\n";
	}
	else if ((x < 0) && (x % 2 == 0))
	{
		std::cout << x << "は負の偶数です\n";
	}
	else
	{
		std::cout << x << "は負の奇数です\n";
	}

	//if (x == 0)
	//{
	//	std::cout << x << "です\n";
	//}
	//else if (x > 0)
	//{
	//	if (x % 2 == 0)
	//	{
	//		std::cout << x << "は正の偶数です\n";
	//	}
	//	else
	//	{
	//		std::cout << x << "は正の奇数です\n";
	//	}
	//}
	//else if (x < 0)
	//{
	//	if (x % 2 == 0)
	//	{
	//		std::cout << x << "は負の偶数です\n";
	//	}
	//	else
	//	{
	//		std::cout << x << "は負の奇数です\n";
	//	}
	//}
}