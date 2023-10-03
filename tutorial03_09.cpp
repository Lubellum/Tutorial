#include "tutorial.h"

void tutorial3_9()
{
	int x = 0;

	printf_s("”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf_s("%d", &x);

	double answer1 = pow(x, 1);
	double answer2 = pow(x, 2);
	double answer3 = pow(x, 3);

	std::cout << answer1 << "\n";
	std::cout << answer2 << "\n";
	std::cout << answer3 << "\n";
}