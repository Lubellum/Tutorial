#include "tutorial.h"

//int division(int x, int y)
//{
//	std::cout << "商： " << x / y << "\n";
//	std::cout << "余： " << x % y << "\n";
//}

void tutorial3_7()
{
	int x = 0;
	int y = 0;

	std::cout << "① 数値を入力してください\n";
	scanf_s("%d", &x);

	std::cout << "② ①よりも小さい数値を入力してください\n";
	scanf_s("%d", &y);


	if (x > y)
	{
		//division(x, y);
		std::cout << "商： " << x / y << "\n";
		std::cout << "余： " << x % y << "\n";
	}
	else if(x <= y)
	{
		std::cout << "②の数値は①より小さい数を選択してください\n";
		tutorial3_7();
	}
	else
	{
		std::cout << "数値を入力してください\n";
		tutorial3_7();
	}
}