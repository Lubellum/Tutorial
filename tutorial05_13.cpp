#include "tutorial.h"

void Tutorial05_13()
{
	int num = 0;
	int sum = 0;

	while (sum < 100)
	{
		std::cout << "��������͂��Ă�������\n";
		scanf_s("%d", &num);

		sum += num;

		std::cout << "���v�l�F " << sum << "\n";
	}

	// for���[�v�Ŗ������[�v
	//for (; ;)
	//{
	//	//std::cout << "��������͂��Ă�������\n";
	//	//scanf_s("%d", &num);

	//	std::cout << num << "\n";
	//}

	//for (num = 0; num < 10; ++num)
	//{
	//	std::cout << num << "\n";
	//}

	//std::cout << "\n";
	//std::cout << num << "\n";
}