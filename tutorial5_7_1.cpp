#include "tutorial.h"

void tutorial5_7_1()
{
	int GiantsTotalScore = 0;
	int TigersTotalScore = 0;

	for (int i = 0; i < 9; i++)
	{
		int GiantsScore = 0;
		int TigersScore = 0;

		std::cout << i + 1 << "��\�@���l�̓��_�́H\n";
		scanf_s("%d", &GiantsScore);
		GiantsTotalScore += GiantsScore;

		std::cout << i + 1 << "�񗠁@��_�̓��_�́H\n";
		scanf_s("%d", &TigersScore);
		TigersTotalScore += TigersScore;
	}

	std::cout << "�����I��\n";
	std::cout << "���l�F" << GiantsTotalScore << "�_\n";
	std::cout << "��_�F" << TigersTotalScore << "�_\n";
	if (GiantsTotalScore > TigersTotalScore)
	{
		std::cout << "���l�̏���\n";
	}
	else if (GiantsTotalScore < TigersTotalScore)
	{
		std::cout << "��_�̏���\n";
	}
	else
	{
		std::cout << "��������\n";
	}
}