#include "tutorial.h"

void tutorial3_9()
{
	double x = 0;

	printf_s("���l����͂��Ă�������\n");
	scanf_s("%lf", &x);

	double answer1 = pow(x, 1);
	double answer2 = pow(x, 2);
	double answer3 = pow(x, 3);

	std::cout << answer1 << "\n";
	std::cout << answer2 << "\n";
	std::cout << answer3 << "\n";
}