#include "tutorial.h"

void tutorial3_10()
{
	int x, y;

	printf_s("1つ目の数値を入力してください\n");
	scanf_s("%d", &x);

	printf_s("2つ目の数値を入力してください\n");
	scanf_s("%d", &y);

	std::cout << "和：　" << x + y << "\n";
	std::cout << "差：　" << x - y << "\n";
	std::cout << "積：　" << x * y << "\n";
	std::cout << "商：　" << x / y << "\n";
	std::cout << "余：　" << x % y << "\n";
}