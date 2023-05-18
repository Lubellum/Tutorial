#include "tutorial.h"

void tutorial3_8()
{
	int x = 0;

	printf_s("数値を入力してください\n");
	scanf_s("%d", &x);

	x++;
	std::cout << "インクリメント:" << x << "\n";

	x--;
	std::cout << "デクリメント  :" << x << "\n";
}