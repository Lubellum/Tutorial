#include "tutorial.h"

void Tutorial05_07_1()
{
	int giantsTotalScore = 0;
	int tigersTotalScore = 0;

	for (int i = 0; i < 9; i++)
	{
		int giantsScore = 0;
		int tigersScore = 0;

		std::cout << i + 1 << "��\�@���l�̓��_�́H\n";
		scanf_s("%d", &giantsScore);
		giantsTotalScore += giantsScore;

		std::cout << i + 1 << "�񗠁@��_�̓��_�́H\n";
		scanf_s("%d", &tigersScore);
		tigersTotalScore += tigersScore;
	}

	std::cout << "�����I��\n";
	std::cout << "���l�F" << giantsTotalScore << "�_\n";
	std::cout << "��_�F" << tigersTotalScore << "�_\n";
	if (giantsTotalScore > tigersTotalScore)
	{
		std::cout << "���l�̏���\n";
	}
	else if (giantsTotalScore < tigersTotalScore)
	{
		std::cout << "��_�̏���\n";
	}
	else
	{
		std::cout << "��������\n";
	}
}