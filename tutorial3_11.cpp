#include "tutorial.h"

void tutorial3_11()
{
	int x, y;

	printf_s("1つ目の数値を入力してください\n");
	scanf_s("%d", &x);

	printf_s("2つ目の数値を入力してください\n");
	scanf_s("%d", &y);

	int	average = (x + y) / 2;

	std::cout << "平均値：" << average << "\n";
}