#include "tutorial.h"

void Tutorial05_10()
{
	int viewCount = 0;

	std::cout << "������̃v���O�����́A���͂��ꂽ�����̕������u*�v��\�����܂��B\n";
	std::cout << "�\����������������͂��Ă��������B\n";

	scanf_s("%d", &viewCount);

	for (int i = 0; i < viewCount; i++)
	{
		std::cout << "*";

		// 10���ɉ��s
		if ( (i + 1 >= 10) && ( (i + 1) % 10 == 0) )
		{
			std::cout << "  " << i + 1 << "\n";
		}
	}
}