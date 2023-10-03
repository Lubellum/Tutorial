#include "tutorial.h"

void tutorial5_3()
{

	// ++i Œø—¦‚ª—Ç‚¢                       i += 1
	// i++ ‘ã“ü‚µ‚Ä‚µ‚Ü‚Á‚Ä‚¢‚é‚Ì‚ÅA–³‘ÊB i = i + 1
	for (int i = 1; i <= 8; ++i)
	{
		double x = std::pow(2, i);
		std::cout << x << "\n";
		int j = i;
		std::cout << ++  j << "\n";
	}
}