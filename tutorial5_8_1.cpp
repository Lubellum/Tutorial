#include "tutorial.h"

void tutorial5_8_1()
{
	int num = 0;
	int NumGroup[10];
	int A = 33;
	int B = 100;

	for (int i = 0; i < 10; i++)
	{
		std::cout << "正の整数を入力してください(" << i + 1 << "番目)\n";
		scanf_s("%d", &num);

		NumGroup[i] = num;
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout << NumGroup[i] << "\n";
	}

	//int max = __std_max_element(&NumGroup[0], &NumGroup[10]);
	int max = *std::max_element(&NumGroup[0], &NumGroup[10]);
	std::cout << "最大値は" << max << "です\n";
}