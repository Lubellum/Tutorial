#include "tutorial.h"

void tutorial5_3()
{

	// ++i �������ǂ�                       i += 1
	// i++ ������Ă��܂��Ă���̂ŁA���ʁB i = i + 1
	for (int i = 1; i <= 8; ++i)
	{
		double x = std::pow(2, i);
		std::cout << x << "\n";
		int j = i;
		std::cout << ++  j << "\n";
	}
}