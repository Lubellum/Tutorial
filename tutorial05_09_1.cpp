#include "tutorial.h"

void tutorial5_9_1()
{
	int num = 0;
	int max = 0;
	int min = 0;

	for (int i = 0; i < 10; i++)
	{
		std::cout << "���̐�������͂��Ă�������(" << i + 1 << "�Ԗ�)\n";
		scanf_s("%d", &num);

		if (max < num)
		{
			max = num;
		}

		if (min > num)
		{
			min = num;
		}
	}

	std::cout << "�ő�l��" << max << "�ł�\n";
	std::cout << "�ŏ��l��" << min << "�ł�\n";
}