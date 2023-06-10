#include "tutorial.h"

void tutorial5_5()
{
	int num[10];
	int sum = 0;

	// sizeof(num) →　配列全体のメモリの大きさ
	int size = sizeof(num) / sizeof(num[0]);

	for (int i = 0; i < size; i++)
	{
		std::cout << i + 1 << "こ目\n";
		std::cin >> num[i];

		sum += num[i];
	}

	int avarage = sum / size;
	std::cout << "平均値は" << avarage << "です\n";
}