#include "tutorial.h"

void tutorial6_1()
{
	int numbers[10];
	
	for (int i = 0; i < 10; i++)
	{
		std::cout << "���l����͂��Ă��������B(" << i + 1 << "���)\n";
		std::cin >> numbers[i];
	}

	for (int i = 0; i < 10; i++)
	{
		numbers[i] *= 2;
	}
	
	std::cout << "2�{���ꂽ���͈ȉ��ł��B\n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << std::setw(2) << i + 1 << "�ԖځF" << numbers[i] << "\n";
	}
}