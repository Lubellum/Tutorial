#include "tutorial.h"

void tutorial4_8()
{
	int MiddleTestScore = 0;
	int EndTestScore = 0;

	std::cout << "���ԃe�X�g�̓_������͂��Ă�������\n";
	scanf_s("%d", &MiddleTestScore);

	std::cout << "�����e�X�g�̓_������͂��Ă�������\n";
	scanf_s("%d", &EndTestScore);

	int TotalScore = MiddleTestScore + EndTestScore;

	if ((MiddleTestScore >= 60) && (EndTestScore >= 60))
	{
		std::cout << "���i�ł�\n";
	}
	else if (TotalScore >= 130)
	{
		std::cout << "���i�ł�\n";
	}
	else if ((TotalScore >= 100) && (MiddleTestScore >= 90 || EndTestScore >= 90))
	{
		std::cout << "���i�ł�\n";
	}
	else
	{
		std::cout << "�s���i�ł�\n";
	}
}