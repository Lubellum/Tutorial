#include "tutorial.h"

void DrawTriangle(char aChara, int aNum)
{
	for (int y = 0; y < aNum; ++y)
	{

		for (int x = 0; x < y + 1; ++x)
		{
			std::cout << aChara;
		}

		std::cout << "\n";
	}
	std::cout << "\n";
}

void Tutorial09_05()
{
	char chara = 0;
	int num = 0;

	printf_s("�\�������镶���ƁA�O�p�`�̑傫��(����)����͂��Ă�������\n");
	
	printf_s("�\�������镶�� :\n");
	scanf_s("%c", &chara, 1);

	printf_s("�O�p�`�̑傫�� :\n");
	scanf_s("%d", &num);

	DrawTriangle(chara, num);
}