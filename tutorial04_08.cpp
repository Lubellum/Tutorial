#include "tutorial.h"

void tutorial4_8()
{
	int middleTestScore = 0;
	int endTestScore = 0;

	std::cout << "���ԃe�X�g�̓_������͂��Ă�������\n";
	scanf_s("%d", &middleTestScore);

	std::cout << "�����e�X�g�̓_������͂��Ă�������\n";
	scanf_s("%d", &endTestScore);

	int totalScore = middleTestScore + endTestScore;

	if ((middleTestScore >= 60) && (endTestScore >= 60))
	{
		std::cout << "���i�ł�\n";
	}
	else if (totalScore >= 130)
	{
		std::cout << "���i�ł�\n";
	}
	else if ((totalScore >= 100) && (middleTestScore >= 90 || endTestScore >= 90))
	{
		std::cout << "���i�ł�\n";
	}
	else
	{
		std::cout << "�s���i�ł�\n";
	}
}