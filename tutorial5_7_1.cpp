#include "tutorial.h"

void tutorial5_7_1()
{
	int Giants = 0;
	int GiantsScore = 0;
	int Tigers = 0;
	int TigersScore = 0;

	for (int i = 0; i < 9; i++)
	{
		std::cout << i + 1 << "��\�@���l�̓��_�́H\n";
		scanf_s("%d", &Giants);
		GiantsScore += Giants;

		std::cout << i + 1 << "�񗠁@��_�̓��_�́H\n";
		scanf_s("%d", &Tigers);
		TigersScore += Tigers;
	}

	std::cout << "�����I��\n";
	std::cout << "���l�F" << GiantsScore << "�_\n";
	std::cout << "��_�F" << TigersScore << "�_\n";
	if (GiantsScore > TigersScore)
	{
		std::cout << "���l�̏���\n";
	}
	else if (GiantsScore < TigersScore)
	{
		std::cout << "��_�̏���\n";
	}
	else
	{
		std::cout << "��������\n";
	}
}