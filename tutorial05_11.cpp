#include "tutorial.h"

void Tutorial05_11()
{
	int countNum = 0;

	std::cout << "•\Ž¦‚·‚é”Žš‚ÌŒÂ”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n";
	scanf_s("%d", &countNum);

	for (int i = 0; i < countNum; i++)
	{
		std::cout << i % 10;
	}
}