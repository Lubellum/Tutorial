#include "tutorial.h"

//int division(int x, int y)
//{
//	std::cout << "商： " << x / y << "\n";
//	std::cout << "余： " << x % y << "\n";
//}

void Tutorial03_07()
{
	int x = 0;
	int y = 0;

	std::cout << "�@ 数値を入力してください\n";
	scanf_s("%d", &x);

	std::cout << "�A �@よりも小さい数値を入力してください\n";
	scanf_s("%d", &y);


	if (x > y)
	{
		//division(x, y);
		std::cout << "商： " << x / y << "\n";
		std::cout << "余： " << x % y << "\n";
	}
	else if(x <= y)
	{
		std::cout << "�Aの数値は�@より小さい数を選択してください\n";
		Tutorial03_07();
	}
	else
	{
		std::cout << "数値を入力してください\n";
		Tutorial03_07();
	}

	std::cout << "関数終わり\n";
}