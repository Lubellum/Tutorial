#include "tutorial.h"

void Tutorial08_03()
{
	const int count = 10;
	int number[count] = {};
	int* p;
	
	p = &number[count];
	
	//int x;
	//int y;
	//int z;

	//char alphabet[3] = {'x', 'y' ,'z'};

	for (int i = 0; i < count; i++)
	{
		std::cout << "数字を入力してください(" << i + 1 << "番目)\n";
		std::cin >> *(p + i);
		//std::cin >> number[i];
	}

	for (int i = 0; i < count; i++)
	{
		std::cout << *(p - i - 1) << "\n";
	}
}