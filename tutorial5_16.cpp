#include "tutorial.h"

void tutorial5_16()
{
	int number = 0;
	int factorCount = 0;

	std::cout << "���̃v���O�����́A���͂��ꂽ���l���f�����ۂ����肷��v���O�����ł��B\n";
	std::cout << "���l����͂��Ă��������B\n";

	scanf_s("%d", &number);


	// ���͂��ꂽ���l�ȉ��Ɉ��������邩�ǂ������ʂ���
	//for (int i = 0; i < number; i++)
	//{
	//	// todo: number - 1�̎��A%(i+1)�̕������K�������𖞂����Ă��܂�
	//	if ( (i >= 4) && (number % (i + 1) == 0) )
	//	{
	//		++factorCount;
	//	}
	//}

	for (int i = 2; i < number; ++i)
	{
		if (number % i == 0)
		{
			++factorCount;
			break;
		}
	}

	if (factorCount > 0)
	{
		std::cout << "���͂��ꂽ���l�͑f���ł͂���܂���B\n";
	}
	else
	{
		std::cout << "���͂��ꂽ���l�͑f���ł��B\n";
	}
}