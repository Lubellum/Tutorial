#include "tutorial.h"

void tutorial4_6()
{
	int x = 0;
	
	std::cout << "”’l‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n";

	scanf_s("%d", &x);

	if (x == 0)
	{
		std::cout << x << "‚Å‚·\n";
	}
	else if ((x > 0) && (x % 2 == 0))
	{
		std::cout << x << "‚Í³‚Ì‹ô”‚Å‚·\n";
	}
	else if (x > 0)
	{
		std::cout << x << "‚Í³‚ÌŠï”‚Å‚·\n";
	}
	else if ((x < 0) && (x % 2 == 0))
	{
		std::cout << x << "‚Í•‰‚Ì‹ô”‚Å‚·\n";
	}
	else
	{
		std::cout << x << "‚Í•‰‚ÌŠï”‚Å‚·\n";
	}

	//if (x == 0)
	//{
	//	std::cout << x << "‚Å‚·\n";
	//}
	//else if (x > 0)
	//{
	//	if (x % 2 == 0)
	//	{
	//		std::cout << x << "‚Í³‚Ì‹ô”‚Å‚·\n";
	//	}
	//	else
	//	{
	//		std::cout << x << "‚Í³‚ÌŠï”‚Å‚·\n";
	//	}
	//}
	//else if (x < 0)
	//{
	//	if (x % 2 == 0)
	//	{
	//		std::cout << x << "‚Í•‰‚Ì‹ô”‚Å‚·\n";
	//	}
	//	else
	//	{
	//		std::cout << x << "‚Í•‰‚ÌŠï”‚Å‚·\n";
	//	}
	//}
}