#include "tutorial.h"

void tutorial5_11()
{
	int CountNum = 0;

	std::cout << "•\Ž¦‚·‚é”Žš‚ÌŒÂ”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n";
	scanf_s("%d", &CountNum);

	for (int i = 0; i < CountNum; i++)
	{
		std::cout << i % 10;
	}
}