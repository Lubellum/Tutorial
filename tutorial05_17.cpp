#include "tutorial.h"

void Tutorial05_17()
{
	int number = 0;
	bool factorFlag = 0;
	int start = 2;

	std::cout << "���̃v���O�����́A���͂��ꂽ���l��f������������v���O�����ł��B\n";
	std::cout << "���l����͂��Ă��������B\n";

	scanf_s("%d", &number);

	//for (int i = 2; 1 < number; ++i)
	//{
	//	// todo: 2�Ŋ���؂������ʂ�0�ƂȂ��Ă��܂��A�������[�v���Ă��܂�
	//	while ( (number % i) == 0)
	//	{
	//		std::cout << i << "\n";
	//		number /= i;
	//	}
	//}

	while (number > 1)
	{
		// while�ŁA���������܂킷�ۂɁA2��ڈȍ~i��2����X�^�[�g���Ă��܂��̂ŁA���Ɏg�p���������ēx�g�p���Ȃ��悤�ɕϐ���
		for (int i = start; i <= number; ++i)
		{
			if (number % i == 0)
			{
				printf("%d\n", i);
				number = number / i;
				start = i;
				break;
			}
		}
	}
}