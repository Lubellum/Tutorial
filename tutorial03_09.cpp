#include "tutorial.h"

void Tutorial03_09()
{
	int x = 0;

	printf_s("数値を入力してください\n");
	scanf_s("%d", &x);

	double answer1 = pow(x, 1);
	double answer2 = pow(x, 2);
	double answer3 = pow(x, 3);

	std::cout << answer1 << "\n";
	std::cout << answer2 << "\n";
	std::cout << answer3 << "\n";
}