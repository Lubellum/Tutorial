#include "tutorial.h"

void Tutorial04_01()
{
	int x = 0;
	int y = 0;

	printf_s("1つ目の数値を入力してください\n");
	scanf_s("%d", &x);

	printf_s("2つ目の数値を入力してください\n");
	scanf_s("%d", &y);

	std::cout << x << "\n";
	std::cout << y << "\n";

	if (x > y)
	{
		std::cout << "1つ目は2つ目より大きいです\n";
	} 
	else if (x == y)
	{
		std::cout << "1つ目と2つ目は同じ数値です\n";
	}
	else if (x < y)
	{
		std::cout << "1つ目は2つ目より小さいです\n";
	}
	else
	{
		std::cout << "エラー\n";
	}
}