#include "tutorial.h"

void tutorial5_5()
{
	int num[10];
	int sum = 0;

	// sizeof(num) ���@�z��S�̂̃������̑傫��
	int size = sizeof(num) / sizeof(num[0]);

	for (int i = 0; i < size; i++)
	{
		std::cout << i + 1 << "����\n";
		std::cin >> num[i];

		sum += num[i];
	}

	int avarage = sum / size;
	std::cout << "���ϒl��" << avarage << "�ł�\n";
}