#include "tutorial.h"

void Ttutorial03_11()
{
	float x, y;

	printf_s("1つ目の数値を入力してください\n");
	scanf_s("%f", &x);

	printf_s("2つ目の数値を入力してください\n");
	scanf_s("%f", &y);

	float average = (x + y) / 2.0f;

	std::cout << "平均値：" << average << "\n";
}